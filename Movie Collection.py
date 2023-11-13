import json

# List to store movie data
movies = []

def load_movies():
    """
    Loads movies from a JSON file.

    This function attempts to read a file named 'movies.json'.
    If the file is found, it loads the JSON content into the movies list.
    If the file is not found, it starts with an empty list.
    In case of JSON decoding error, it handles the exception and returns an empty list.

    @return the loaded list of movies, which could be empty
    """
    try:
        with open('movies.json', 'r') as file:
            return json.load(file)
    except FileNotFoundError:
        return []
    except json.JSONDecodeError:
        print("Error reading the movies file. Data may be corrupted.")
        return []

def save_movies():
    """
    Saves movies to a JSON file.

    This function writes the current list of movies into a file named 'movies.json'.
    It uses JSON formatting for data storage.
    """
    with open('movies.json', 'w') as file:
        json.dump(movies, file)

def add_movie():
    """
    Adds a new movie to the movies list.

    This function prompts the user for the movie's title, director, and release year.
    It validates that the year is a number and adds the movie to the movies list.

    @return None
    """
    title = input("Enter the movie title: ")
    director = input("Enter the movie director: ")

    while True:
        year = input("Enter the movie release year: ")
        if year.isdigit():
            break
        else:
            print("Please enter a valid year consisting only of numbers.")

    movies.append(
        {
            "title": title,
            "director": director,
            "year": year
        }
    )
    print(f"'{title}' added successfully!")


def add_upcoming_movie():
    """
    Adds a new upcoming movie to the movies list.

    This function prompts the user for the upcoming movie's title, director, and release date.
    It then adds the movie to the movies list with a flag indicating that it's an upcoming release.

    @return None
    """
    title = input("Enter the upcoming movie title: ")
    director = input("Enter the movie director: ")
    release_date = input("Enter the movie release date (e.g., 2023-12-25): ")

    movies.append(
        {
            "title": title,
            "director": director,
            "year": "Upcoming",
            "release_date": release_date
        }
    )
    print(f"'{title}' added successfully as an upcoming movie!")


def list_movie():
    """
    Lists all movies in the movies list.

    This function iterates over the movies list and prints each movie's details.
    If the list is empty, it informs the user.

    @return None
    """
    if not movies:
        print("No movies in the list. Please add some movies first.")
        return

    for movie in movies:
        print_movie(movie)

def print_movie(movie):
    """
    Prints a single movie's details.

    This function takes a movie dictionary as input and prints its title, director, and release year.

    @param movie: A dictionary containing movie details
    @return None
    """
    print(f"Title : {movie['title']}")
    print(f"Director: {movie['director']}")
    print(f"Release year: {movie['year']}")

def find_movie():
    """
    Finds a movie by title.

    This function prompts the user for a movie title and searches the movies list for a match.
    If a matching movie is found, it prints the movie's details.
    Otherwise, it informs the user that no movie was found.

    @return None
    """
    search_title = input("Enter movie title you are looking for: ")

    movie_found = False
    for movie in movies:
        if movie["title"] == search_title:
            print_movie(movie)
            movie_found = True

    if not movie_found:
        print(f"No movie found with the title '{search_title}'. Consider adding it to the list.")

def menu():
    """
    Displays the main menu and handles user input.

    This function presents a menu to the user with options to add, add upcoming, list, find, or quit.
    It processes the user input and calls the appropriate function based on the selection.

    @return None
    """
    global movies
    movies = load_movies()

    selection = input("\nEnter 'a' to add a movie, 'u' to add an upcoming movie, 'l' to list your movies, 'f' to find a movie by the title, or 'q' to quit: ").lower()
    while selection != 'q':
        if selection == "a":
            add_movie()
        elif selection == "u":
            add_upcoming_movie()
        elif selection == "l":
            list_movie()
        elif selection == "f":
            find_movie()
        else:
            print("Unknown command. Please try again")
        selection = input("\nEnter 'a' to add a movie, 'u' to add an upcoming movie, 'l' to list your movies, 'f' to find a movie by the title, or 'q' to quit: ")

        save_movies()  # Save movies after each operation

menu()


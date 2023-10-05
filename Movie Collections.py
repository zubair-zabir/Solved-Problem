movies = []

def add_movie():
    title = input("Enter the movie title: ")
    director = input("Enter the movie director: ")

    while True:
        year = input("Enter the movie release year: ")
        # Check if the year contains only numbers
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


def list_movie():
    if not movies:  # If the list is empty
        print("No movies in the list. Please add some movies first.")
        return

    for movie in movies:
        print_movie(movie)


def print_movie(movie):
    print(f"Title : {movie['title']}")
    print(f"Director: {movie['director']}")
    print(f"Release year: {movie['year']}")


def find_movie():
    search_title = input("Enter movie title you are looking for: ")

    movie_found = False  # Flag to track if a movie is found

    for movie in movies:
        if movie["title"] == search_title:
            print_movie(movie)
            movie_found = True

    if not movie_found:
        print(f"No movie found with the title '{search_title}'. Consider adding it to the list.")


def menu():
    selection = input("\nEnter 'a' to add a movie, 'l' to see your movies, 'f' to find a movie by the title, or 'q' to quit: ").lower()
    while selection != 'q':
        if selection == "a":
            add_movie()
        elif selection == "l":
            list_movie()
        elif selection == "f":
            find_movie()
        elif selection == "q":
            break
        else:
            print("Unknown command. Please try again")
        selection = input("\nEnter 'a' to add a movie, 'l' to see your movies, 'f' to find a movie by the title, or 'q' to quit: ")

menu()

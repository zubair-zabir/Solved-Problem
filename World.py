import random

# Define a list of words to choose from
word_list = ["apple", "banana", "cherry", "date", "fig", "grape", "kiwi", "lemon", "melon", "orange", "peach", "pear",
             "plum"]

# Choose a random word from the list
secret_word = random.choice(word_list)
secret_word = secret_word.lower()  # Convert the secret word to lowercase

# Set the number of attempts
attempts = 6

# Create a set to store guessed letters
guessed_letters = set()

# Main game loop
while attempts > 0:
    # Display the current state of the word with underscores for missing letters
    display_word = ""
    for letter in secret_word:
        if letter in guessed_letters:
            display_word += letter
        else:
            display_word += "_"

    print("Word:", display_word)
    print("Attempts left:", attempts)

    # Ask the player for a guess
    guess = input("Guess a letter: ").lower()

    # Check if the guess is a single letter
    if len(guess) != 1 or not guess.isalpha():
        print("Please enter a single letter.")
        continue

    # Check if the letter has already been guessed
    if guess in guessed_letters:
        print("You already guessed that letter.")
        continue

    guessed_letters.add(guess)

    # Check if the guess is in the secret word
    if guess in secret_word:
        print("Good guess!")

        # Check if the player has guessed all the letters
        if all(letter in guessed_letters for letter in secret_word):
            print("Congratulations! You've guessed the word:", secret_word)
            break
    else:
        print("Oops! That letter is not in the word.")
        attempts -= 1

# If the player runs out of attempts
if attempts == 0:
    print("Sorry, you're out of attempts. The word was:", secret_word)

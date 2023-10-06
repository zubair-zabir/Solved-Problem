"""
A Rock-Paper-Scissors game that plays one round of human vs. computer

CMS 120
"""
from random import randint

ROCK = 1
PAPER = 2
SCISSORS = 3

def user_input():

    pick_user = input('Please enter your choice of 1 for Rock, 2 for Paper, and 3 for Scissors.\n')
    
    try:
        pick_user_int = int(pick_user)
    except ValueError:
        print('Invalid input. Please start the game again.')
        return None

    moves = {ROCK: "Rock", PAPER: "Paper", SCISSORS: "Scissors"}

    if pick_user_int in moves:
        print(f'You picked: {moves[pick_user_int]}')
        return pick_user_int
    else:
        print('Please enter 1, 2, or 3 only.')
        return None

def cpu_input():

    pick_CPU = randint(1,3)
    moves = {ROCK: "Rock", PAPER: "Paper", SCISSORS: "Scissors"}
    print(f'We picked: {moves[pick_CPU]}')
    
    return pick_CPU

def who_wins(pick_user_int, pick_CPU):

    if pick_user_int == pick_CPU:
        return 0
    elif (pick_user_int == ROCK and pick_CPU == SCISSORS) or \
         (pick_user_int == PAPER and pick_CPU == ROCK) or \
         (pick_user_int == SCISSORS and pick_CPU == PAPER):
        return 1
    else:
        return -1

def play_game():
    print('\nWelcome to the Rock-Paper-Scissors Game!')
    rounds_int = None
    while not rounds_int:
        try:
            rounds_str = input("How many wins total would you like to play to? Maximum is 100 wins.\n")
            rounds_int = int(rounds_str)
            if rounds_int <= 0 or rounds_int > 100:
                print("Please enter a number greater than 0 and less than or equal to 100.")
                rounds_int = None
        except ValueError:
            print("Invalid input. Please enter a number.")
    
    wins_int = 0
    loses_int = 0
    draws_int = 0

    while wins_int < rounds_int and loses_int < rounds_int:
        user_choice = user_input()
        if user_choice is None:
            continue

        cpu_choice = cpu_input()

        result = who_wins(user_choice, cpu_choice)
        if result == 1:
            print('Yay! You Won!')
            wins_int += 1
        elif result == 0:
            print('It\'s a draw...')
            draws_int += 1
        else:
            print('Aww... you lost. Better luck next time.')
            loses_int += 1
        
        # Print statistics after each round
        print('-'*30)  # separator
        print(f'Wins so far: {wins_int}')
        print(f'Loses so far: {loses_int}')
        print(f'Draws so far: {draws_int}')
        print('-'*30)  # separator

    print(f'Wins: {wins_int}')
    print(f'Loses: {loses_int}')
    print(f'Draws: {draws_int}')

    if wins_int > loses_int:
        print("Congratulations! You Won!")
    else:
        print("You did not win, but...Congratulations to the Computer!")

    print(f'Your win total was: {wins_int}')
    print(f"The Computer's win total was: {loses_int}")
    print(f'The margin of Victory was: {abs(wins_int - loses_int)}')
play_game()

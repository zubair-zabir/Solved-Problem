"""
A Rock-Paper-Scissors game that plays one round of human vs. computer

CMS 120
"""

# Imports
from random import randint
import sys
def get_user_choice():
    user_choice = int(input("Enter your choice (1 for Rock, 2 for Paper, or 3 for Scissors):"))
    while user_choice not in [1, 2, 3]:
        print("Invalid choice. Please choose 1 for Rock, 2 for Paper, or 3 for Scissors.")
        user_choice = int(input("Enter your choice (1 for Rock, 2 for Paper, or 3 for Scissors):"))
    return user_choice

def get_computer_choice():
    
    computer_choice = randint(1, 3)
    return computer_choice

def determine_winner(user_choice, computer_choice):
    if user_choice == computer_choice:
        return "It's a tie!"
    elif (user_choice == 1 and computer_choice == 3) or (user_choice == 2 and computer_choice == 1) or (user_choice == 3 and computer_choice == 2):
        return "You win!"
    else:
        return "Computer wins!"


def play_round():
    print("Let's play a round of Rock-Paper-Scissors!")
    user_choice = get_user_choice()
    computer_choice = get_computer_choice()
    
    print(f"You chose {user_choice}.")
    print(f"The computer chose {computer_choice}.")
    
    result = determine_winner(user_choice, computer_choice)
    print(result)
    
play_round()

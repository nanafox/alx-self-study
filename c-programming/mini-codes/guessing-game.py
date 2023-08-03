# build a guessing game...

# user enters a number in range A and B
#       - meaning get two numbers from user
#       - ensure A is not greater than or equal to B
#           - A should be lesser than B
# generate a random number in range in A and B
#
# allowed_guesses = 5
#
# ask the user to guess the number
# give hints if higher or lower

import random

def get_random_number():
    number_A = int(input("Point A: "))
    number_B = int(input("Point B: "))

    if number_A >= number_B:
        print("Invalid range.. A is greater B")
    else:
        return random.randint(number_A, number_B)

def number_guessing_game():
    guess = get_random_number()

    if guess is not None:
        allowed_guesses = 5

        while allowed_guesses > 0:
            print(f"\nChances left: {allowed_guesses}\n")
            user_guess = int(input("Your guess: "))

            allowed_guesses -= 1
            if user_guess > guess:
                print("Too high")
            elif user_guess < guess:
                print("Too low")
            else:
                print("You got it!")
                break
        else:
            print("You exhausted all you guess...")

if __name__ == '__main__':
    number_guessing_game()

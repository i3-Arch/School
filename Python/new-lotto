import random
import sys

class LotteryError(Exception):
    """Custom exception for lottery-related errors"""
    pass

def generate_powerball():
    """Generate numbers for Powerball"""
    try:
        # Powerball consists of 5 numbers between 1 and 69, and 1 Powerball between 1 and 26
        white_balls = random.sample(range(1, 70), 5)
        powerball = random.choice(range(1, 27))
        return sorted(white_balls), powerball
    except Exception as e:
        raise LotteryError(f"Error generating Powerball numbers: {e}")

def generate_mega_millions():
    """Generate numbers for Mega Millions"""
    try:
        # Mega Millions consists of 5 numbers between 1 and 70, and 1 Mega Ball between 1 and 25
        white_balls = random.sample(range(1, 71), 5)
        mega_ball = random.choice(range(1, 26))
        return sorted(white_balls), mega_ball
    except Exception as e:
        raise LotteryError(f"Error generating Mega Millions numbers: {e}")

def generate_pick_3():
    """Generate numbers for Pick 3"""
    try:
        # Pick 3 consists of 3 digits between 0 and 9
        return [random.randint(0, 9) for _ in range(3)]
    except Exception as e:
        raise LotteryError(f"Error generating Pick 3 numbers: {e}")

def generate_pick_4():
    """Generate numbers for Pick 4"""
    try:
        # Pick 4 consists of 4 digits between 0 and 9
        return [random.randint(0, 9) for _ in range(4)]
    except Exception as e:
        raise LotteryError(f"Error generating Pick 4 numbers: {e}")

def generate_lottery_numbers(game_type):
    """Generate lottery numbers based on the game type"""
    try:
        if game_type == 'Powerball':
            return generate_powerball()
        elif game_type == 'MegaMillions':
            return generate_mega_millions()
        elif game_type == 'Pick3':
            return generate_pick_3()
        elif game_type == 'Pick4':
            return generate_pick_4()
        else:
            raise LotteryError("Invalid game type. Choose from 'Powerball', 'MegaMillions', 'Pick3', 'Pick4'.")
    except Exception as e:
        print(f"Error generating numbers: {e}")
        sys.exit(1)

def display_all_numbers():
    """Display the generated numbers for all lottery games"""
    print("Generating lottery numbers for all available games...\n")
    
    # Generate and display numbers for each game
    try:
        powerball_numbers = generate_lottery_numbers('Powerball')
        print(f"Powerball Numbers: {powerball_numbers[0]} | Powerball: {powerball_numbers[1]}")

        mega_millions_numbers = generate_lottery_numbers('MegaMillions')
        print(f"Mega Millions Numbers: {mega_millions_numbers[0]} | Mega Ball: {mega_millions_numbers[1]}")

        pick_3_numbers = generate_lottery_numbers('Pick3')
        print(f"Pick 3 Numbers: {pick_3_numbers}")

        pick_4_numbers = generate_lottery_numbers('Pick4')
        print(f"Pick 4 Numbers: {pick_4_numbers}")
    
    except LotteryError as e:
        print(f"Lottery Error: {e}")
        sys.exit(1)
    except Exception as e:
        print(f"An unexpected error occurred: {e}")
        sys.exit(1)

def main():
    """Main function to run the lottery number generator"""
    display_all_numbers()

if __name__ == "__main__":
    try:
        main()
    except Exception as e:
        print(f"An error occurred while generating lottery numbers: {e}")
        sys.exit(1)

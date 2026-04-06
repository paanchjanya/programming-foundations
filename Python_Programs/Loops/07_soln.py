# Keep asking the user for input until they enter a number between 1 and 10
while True:
    user_input = int(input())
    if 1<= user_input <= 10:
        print("You have entered the number which is between 1 and 10.")
    
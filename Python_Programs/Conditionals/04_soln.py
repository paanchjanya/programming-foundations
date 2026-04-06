# Determine if a fruit is ripe, overripe, or unripe based on it's on it's color. (e.g., Banana: Green-Unripe, Yellow - Ripe, Brown - Overripe)
    # user_input = input("Enter the condition of the banana fruit (ripe, overripe or unripe):").lower()

    # if user_input == "ripe" :
    #     print("Yellow.")
    # elif user_input == "overripe" :
    #     print("Brown.")
    # elif user_input == "unripe" :
    #     print("Green.")
    # else:
    #     print("Please enter valid fruit condition. Thank you.")


fruit = "Banana"
color = "Yellow"

if fruit == "Banana" :
    if color == "Green" :
        print("Unripe")
    elif color == "Yellow":
        print("Ripe")
    elif color == "Brown":
        print("Overipe")
else:
    print("Provide a valid fruit.")
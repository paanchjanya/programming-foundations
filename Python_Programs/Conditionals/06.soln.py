# Choose a mode of transportation based on the distance (e.g., 3km: Walk, 3-15 km: Bike, >15 km : Car)
user_input = int(input("Enter the distance you want to travel: "))
if user_input < 3:
    trans_mode = "Walk"
elif user_input in range(3,15):
    trans_mode = "Bike"
elif user_input >= 15:
    trans_mode = "Car"

print(f"You can  choose {trans_mode}.")
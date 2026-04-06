# Suggest an activity on the weather(e.g., Sunny-Go for a walk, Rainy-Read a book, Snowy-Buid a snowman).
weather = input("Enter the weather condition(Sunny, Rainy, Snowy): ").lower()
if weather == "sunny":
    suggestion = "Go for a walk"
elif weather == "rainy":
    suggestion = "Read a book"
elif weather == "snowy":
    suggestion = "Build a snowman"
else:
    print("Invalid weather condition.")

print(suggestion)
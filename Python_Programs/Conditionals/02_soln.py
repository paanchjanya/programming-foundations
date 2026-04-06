# Movie tickets are priced based on age: $12 for adults (18 and over), $8 for children. Everyone gets a discount of $2 on wednesday

age = int(input("Enter the age:"))
day = input("Enter the day you want to watch movie:").lower()

price = 12 if age >=18 else 8

if day == "wednesday" :
    price -= 2

print("Ticket price for you is: $",price)

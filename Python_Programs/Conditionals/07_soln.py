# Customize a coffee order: "Small", "Medium" or, "Large" with an option for "Extra Short" of expresso
order_size = input("Enter the coffee(small, medium, or large): ")
extra_short = True

if extra_short:
    coffee = order_size + " coffee with an extra short"
else:
    coffee = order_size + " cofee"

print("Order: ",coffee)
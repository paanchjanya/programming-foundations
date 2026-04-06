# Classify a person's age group: Child (<13>), Tennager (13-19), Adult (20-59), Senoir (60+).
age = int(input("Enter the age:"))
if age < 12 :
    print("Child.")
elif age < 20 :
    print("Teenager.")
elif age <60 :
    print("Adult.")
else:
    print("Senior.")

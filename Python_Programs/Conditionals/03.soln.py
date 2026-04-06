# Assign a letter grade based on a student's score: A(90-100), B(80-89), C(70-79), D(60-69), F(below 60)
marks = int(input("Enter your marks:"))
if marks > 100 :
    print("Invalid Marks.")
elif marks >= 90:
    print("A")
elif marks >= 80:
    print("B")
elif marks >= 70:
    print("C")
elif marks >= 60:
    print("D")
else:
    print("Fail.")
    
    
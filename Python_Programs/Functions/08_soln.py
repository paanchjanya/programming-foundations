# Create a function that accepts any number of keyword arguments and print them in format  key:value
def print_kwargs(**kwargs):
    for key,value in kwargs.items():
        print(f"{key} : {value}")

# print_kwargs(name = "Praveen" , age = 22)
print_kwargs(Name = "Praveen", Age = 23, City = "Vijayapura", Current_State = "Under-graduate Student.")
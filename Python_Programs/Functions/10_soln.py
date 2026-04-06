# Create a recursive function to calculate the factorial of a number
def fact(n):
    if n == 0 or n == 1 :
        return 1
    else:
        return n * fact(n-1)

print(fact(5))

# def fibo(n):
#     a,b = 0,1
#     for _ in range(n):
#         yield a
#         a,b = b, a+b

# num = fibo(9)
# print(type(num))
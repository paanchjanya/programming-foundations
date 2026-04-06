# username = "praveen"

# def test():
#     # username = "desai"
#     print(username)

# print(username)
# test()

x = 99
# def func(y):
#     z = x + y
#     return z
# result = func(1)
# print(result)

# def func3():
#     global x
#     x = 88
# func3()
# print(x)

# def f1():
#     x = 88
#     def f2():
#         print(x)
#     return f2
# myresult = f1()
# myresult()

def chaicoder(num):
    def actual(x):
        return x ** num
    return actual

f = chaicoder(2)
g = chaicoder(3)

print(f(3))
print(g(3))
# Calculate the sum of even numbers up a given number n

num = 10
sum_even = 0

for i in range(1,num+1):
    if i % 2 == 0:
        sum_even += i

print(f"Sum of even numbers up to {num} is {sum_even}")
# Print the multiplication table for a given number upto 10, but skip the fifth iteration
number = 4
for i in range(1,11):
    if i == 5 :
        continue
    print(number,'X',i,"=",number*i)


# number = 4
# [print(f"{number} X {i} = {number*i}") for i in range(1, 11) if i != 5]
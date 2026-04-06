# Given a string, find the first non-repeated character.
input_str = "Praveen"
res_str = []
for c in input_str:
    if input_str.count(c) == 1 :
        res_str.append(c)

print(res_str)
        
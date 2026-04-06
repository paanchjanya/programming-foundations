# Check if all elements in a list are unique. If a duplicate is found, exit the loop and print the duplicate.

items = ["apple","banana","orange","apple","mango"]

# unique_item = set()

# for item in items:
#     if item in unique_item:
#         print("Duplicate item: ",item)
#         break
#     unique_item.add(item)

unique_items = set()
duplicates = set()

for item in items :
    if item in unique_items :
        duplicates.add(item)
    else:
        unique_items.add(item)

if duplicates:
    print("Duplicate items: ",duplicates)
else:
    print("All items are unique.")
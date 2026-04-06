# Check if a password is "strong", "medium" or "weak" based on the its criteria of length( < 6 chars(weak), 6-10(medium) >10 (strong)).
password = "prav123"
if len(password) < 6 :
    strength = "Weak."
elif len(password) <= 10:
    strength = "Medium."
else:
    strength = "Strong."

print("Entered password is: ",strength)
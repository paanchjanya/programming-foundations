# Create a function that returns both the area and circumference of a circle given it's radius.
import math
def circle_status(radius):
    area = math.pi * radius ** 2
    circumference = 2 * math.pi * 2
    return area, circumference

a, c = circle_status(3)
print(f"Area: {a}\nCircumference: {c}")
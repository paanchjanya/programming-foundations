class Car:
    def __init__(self,brand,model):
        self.brand = brand
        self.model = model

my_car = Car("BMW","X6")
print(my_car.brand,my_car.model)

my_new_car = Car("Porsche","cayenne")
print(my_new_car.brand,my_new_car.model)

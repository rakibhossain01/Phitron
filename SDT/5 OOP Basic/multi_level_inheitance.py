class Vehicle:
    def __init__(self, name, price) -> None:
        self.name = name
        self.price = price

    def __repr__(self) -> str:
        return f'{self.name} {self.price}'

    def move(self):
        pass

class Bus(Vehicle):
    def __init__(self, name, price, seat) -> None:
        super().__init__(name, price)
        self.seat = seat

class Truck(Vehicle):
    def __init__(self, name, price, weight) -> None:
        super().__init__(name, price)
        self.weight = weight

class PickUpTruck(Truck):
    def __init__(self, name, price, weight) -> None:
        super().__init__(name, price, weight)

class ACBus(Bus):
    def __init__(self, name, price, seat, temperature) -> None:
        super().__init__(name, price, seat)
        self.temperature = temperature

    def __repr__(self) -> str:
        return f'{self.name} {self.price} {self.seat} {self.temperature}'

green_line = ACBus('green', 500000000, 22, 16)
print(green_line)

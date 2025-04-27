class Person:
    def __init__(self, name, age, height, weight) -> None:
        self.name = name
        self.age = age
        self.height = height
        self.weight = weight

    def eat(self):
        print('vat mangso polau korma')

    def exercise(self):
        raise NotImplementedError

class Cricketer(Person):
    def __init__(self, name, age, height, weight, team) -> None:
        super().__init__(name, age, height, weight)
        self.team = team

    def eat(self):
        print('vegetables')

    def exercise(self):
        print('gym e posa diya hudai gham jorai')

    #operator overload
    def __add__(self, other):
        return self.age + other.age
    
    def __mul__(self,other):
        return self.weight * other.weight
    
    def __len__(self):
        return self.height
    
    def __gt__(self,other):
        return self.age > other.age
    
sakib = Cricketer('sakib', 38, 68, 91, 'BD')
mushi = Cricketer('mushi', 36, 65, 78, 'BD')
print(sakib + mushi)
print(sakib * mushi)
print(len(sakib))
print(sakib > mushi)
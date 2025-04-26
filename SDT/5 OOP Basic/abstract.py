from abc import ABC, abstractmethod
#abstract base class

class Animal(ABC):
    @abstractmethod #enforce all derived class to have a eat method
    def eat(self):
        print('hey nana !, eating banana')
        
    def movie(self):
        pass


class Monkey(Animal):
    def __init__(self,name) -> None:
        self.category = 'Monkey'
        self.name = name
        super().__init__()
    
    def eat(self):
        print('jsdhsdhjdhsdh')
        return super().eat()
    
    def movie(self):
        print('hdshdhsudhdhdj jwdhwudhd')
        return super().movie()
        
layka = Monkey('lucky')
layka.eat()
#Ena Poribohon

class Company:
    def __init__(self,name,adrress)->None:
        self.name = name
        self.bus = []
        self.routes = []
        self.drivers = []
        self.counter = []
        self.manager = []
        self.supervisor = []
        self.fare = []
    
class Driver:
    def __init__(self,name,license,age)-> None:
        self.license = license
        self.name = name 
        self.age = age
        
class Counter:
    def __init__(self):
        pass
    
    def purchase_a_ticket(self,start,destination):
        pass

class Passenger:
    def __init__(self)-> None:
        pass

class Supervisor:
    def __init__(self)->None:
        pass

red_mia = Driver('a','123',32)

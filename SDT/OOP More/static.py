# static attribute (class attribute)
# static method @staticmethod
# class method @classmethod
# differences between static method and class method

class Shopping:
    cart = []  # class attribute
    origin = 'china'

    def __init__(self, name, location):
        self.name = name
        self.location = location

    def purchase(self, item, price, amount):
        remaining = amount - price
        print(f'buying: {item} for price: {price} and remaining: {remaining}')

    @staticmethod
    def multiply(a, b):
        result = a * b
        print(result)

    @classmethod
    def hudai_dekhi(cls, item):
        print('Class Name:', cls.__name__)
        print('hudai dekhi kintu kinmu just ac er hawa khaite aschi', item)

# Usage
basundara = Shopping('basu en dhara', 'not popular location')
Shopping.hudai_dekhi('Lungi')
basundara.multiply(6, 9)

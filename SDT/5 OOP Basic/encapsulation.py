class Bank:
    def __init__(self, holder_name, initial_deposit) -> None:
        self.holder_name = holder_name  # public attribute
        self._balance = initial_deposit  # protected attribute
        self.__branch = 'banani 11'  # private attribute

    def deposit(self, amount):
        self._balance += amount

    def get_balance(self):
        return self._balance

    def withdraw(self, amount):
        if amount < self._balance:
            self._balance -= amount
            return amount
        else:
            return f'Fokia taka nai'

rafsun = Bank('Chooooto bro', 10000)

print(rafsun.holder_name)
rafsun.holder_name = 'boro vai'
rafsun.deposit(40000)
print(rafsun._balance)
print(rafsun.get_balance())
# print(rafsun.__branch)
# print(dir(rafsun))

print(rafsun._Bank__branch)

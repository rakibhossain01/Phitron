class Calculator:
    brand = 'Casio MS990'
    
    def add(self,num1,num2):
        sum = num1 + num2
        return sum
    def deduct(self,num1,num2):
        sub = num1 - num2
        return sub
    def multiply(self,num1,num2):
        mul = num1 * num2
        return mul
    def divide(self,num1,num2):
        div = num1 / num2
        return div
my_calculator = Calculator()
sum = my_calculator.add(10,5)
print(sum)

sub = my_calculator.deduct(10,5)
print(sub)

mul = my_calculator.multiply(10,5)
print(mul)

div = my_calculator.divide(10,5)
print(div)
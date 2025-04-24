class Shop:
    shoping_mall = 'jamuna'
    def __init__(self,buyer):
        self.buyer = buyer
        self.cart = [] #icar is an instance atribute
    
    def add_to_cart(self,item):
        self.cart.append(item)

mehjabeen = Shop('Mez Jab een')
mehjabeen.add_to_cart('shoe')
mehjabeen.add_to_cart('phone')
print(mehjabeen.cart)

nisho = Shop('Nisho night er nisho')
nisho.add_to_cart('hat')
nisho.add_to_cart('watch')
print(nisho.cart)
class Shop:
    cart = []
    def __init__(self,buyer):
        self.buyer = buyer
    
    def add_to_cart(self,item):
        self.cart.append(item)
        
mehzabin = Shop('meh jabeen')
mehzabin.add_to_cart('shoes')
mehzabin.add_to_cart('phone')
print(mehzabin.cart)

nisho = Shop('noisho')
nisho.add_to_cart('cap')
nisho.add_to_cart('watch')
print(nisho.cart)
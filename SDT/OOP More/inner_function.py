# Function is a first-class object
def double_decker():
    print('starting the double decker')
    def inner_function():
        print('inside the inner')
        return 3000
    return inner_function

# double_decker returns a function, so we can assign it and call it later
# Example usage:
# func = double_decker()
# print(func())

def do_something(work):
    print('work started')
    work()  # work should be a callable (function)
    print('work ended')

# Incorrect usages:
# do_something(2)              # ❌ 2 is not callable
# do_something('am i busy')    # ❌ string is not callable

# A proper function to pass to do_something
def coding():
    print('coding in python')

# Now call the do_something function with coding as argument
do_something(coding)

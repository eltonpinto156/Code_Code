# An Armstrong number is a number the sum of whose digits raised to the power of total number of digits is the number itself.

# Function to check if given number is Armstrong or not.
def armstrong(val):
    if int(val) >= 0:
        sum = 0
        for i in val:
            sum += int(i)**len(val)
        if sum == int(val):
            return 1
    return 0


num = input("Enter an integer: ")

if armstrong(num):
    print(num + " is an Armstrong number.")
else:
    print(num + " is not an Armstrong number")

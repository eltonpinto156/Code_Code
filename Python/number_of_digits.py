# Function to calculate the number of digits in the given input integer
def digits(val):
    if val.isnumeric:
        # negating the minus '-' sign
        if val[0] == '-':   
            return ("Number of digits in " + val + " is " + str(len(val)-1))
        else:
            return ("Number of digits in " + val + " is " + str(len(val)))
    else:
        return ("Invalid Input!")

#Prompting User for input
num = input("Enter an integer: ")

print(digits(num))

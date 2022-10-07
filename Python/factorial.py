# Function to calculate the factorial recursively
def factorial(val):
    if val == 0:
        return 1
    else:
        return val * factorial(val-1)

#Prompting user for input
num = int(input("Enter the non-negative integer whose factorial is required: "))

#Check for non-negative integer
if num < 0:
    print("Invalid input! Entered integer is less than 0.")
else:
    print(factorial(num))

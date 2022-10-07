#Function to recursively reverse a given number
def reverse(val):
    #Handling the case of negative integers
    if val < 0:
        val *= -1
        result = (val % 10)*(10**(len(str(val))-1)) + reverse(int(val/10))
        return(result * -1)
    elif val == 0:
        return 0
    else:
        result = (val % 10)*(10**(len(str(val))-1)) + reverse(int(val/10))
        return(result)


num = int(input("Enter the number to be reversed: "))

print(reverse(num))

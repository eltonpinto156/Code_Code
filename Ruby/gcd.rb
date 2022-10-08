def calculateGCD(a, b)
    while (a != b)
        if a > b
            return calculateGCD(a - b, b);
        else
            return calculateGCD(a, b - a);
        end
    end
    
    return a;
end

print "Enter number1: ";
number1 = gets.chomp.to_i;  

print "Enter number2: ";
number2 = gets.chomp.to_i;  

result = calculateGCD(number1, number2);

print "GCD is: ",result;

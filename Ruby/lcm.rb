def LCM(a, b, res)
    if (res % a == 0 && res % b == 0)
        return res;
    else
        LCM(a, b,res + 1);
    end
end

print "Enter number1: ";
number1 = gets.chomp.to_i;  

print "Enter number2: ";
number2 = gets.chomp.to_i;  

result = LCM(number1, number2,1);

print "LCM is: ",result;

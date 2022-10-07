def reverse(num,rev)
	if num > 0 
	    rem = (num % 10);
		rev = rev*10+rem;
		reverse(num / 10,rev);
	else
	    return rev;    
	end
end

print "Enter number: ";
number = gets.chomp.to_i;  

result = reverse(number, 0);
print "Result is: ",result;

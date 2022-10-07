puts "Enter the number:"
num=gets.chomp.to_i

temp=num
count=0

while (temp>0)
	count+=1
	temp=temp/10
end

puts "#{num} has #{count} digits"

#Iterates through all numbers 1 to 1000 to calculate the sum of multiples 3 or 5
sum =0
for i in 1...1000
	if (i%3 == 0 || i%5 ==0)
		sum += i
	end
end
puts sum
#This method sums up the numbers that are multiples of mult within the range first and last. It is then #called three times. Twice to add the sums of 3 and 5 and once to subtract the duplicates created by #multiples of 15. This reduces the amount of numbers iterated through by 40.1%
def sumMultiplesInRange(mult, first, last)
	i = first
	sum = 0
	while (i*mult < last)
		sum += i*mult
		i += 1
	end
	return sum
end

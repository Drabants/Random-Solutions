#Method sums up the multiples of the first number given within the
#range of the second and third number given
def sumMultiplesInRange(mult, first, last)
	i = first
	sum = 0
	while (i*mult < last)
		sum += i*mult
		i += 1
	end
	return sum
end
#Reduces the amount of numbers iterated through by 40.2%
puts sumMultiplesInRange(3, 1, 1000) + sumMultiplesInRange(5,1,1000) - sumMultiplesInRange(15,1,1000)

#Iterates through all numbers 1 to 1000 to calulate the sum
#of multiples 3 or 5
sum =0
for i in 1...1000
	if (i%3 == 0 || i%5 ==0)
		sum += i
	end
end
puts sum

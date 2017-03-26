
def ceasar_cipher(string, shift)
  letters = string.split("")
  letters = letters.map do |letter|
	  if letter.ord.between?(65,90) || letter.ord.between?(97, 122)
	    newnum = letter.ord + shift.to_i
	      if newnum.between?(91, 96) || newnum > 122
	        newnum = newnum - 26
	      end
	  else
	    newnum = letter
		end
		newnum.chr
	end.join
end
puts "Type the string to be converted"
string = gets.chomp

puts "Type the conversion factor"
factor = gets.chomp

puts ceasar_cipher(string, factor)

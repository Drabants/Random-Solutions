def bubble_sort(arr)
	j = arr.length-1
	while (j>1)
		i=0
		while(i!= j)
			if (arr[i] > arr[i+1])
				arr[i], arr[i+1] = arr[i+1], arr[i]
			end
			i += 1
		end
		j -= 1
	end
	return arr
end

puts bubble_sort([4,3,78,2,0,2])

def bubble_sort_by(arr, &block)
	j = arr.length-1
	while (j>1)
		i=0
		while(i!= j)
		arr[i], arr[i+1] = arr[i+1], arr[i] if block.call(arr[i], arr[i+1]) >0
			i += 1
		end
		j -= 1
	end
	return arr
end


puts bubble_sort_by(["hi","hello","hey"]) {|left,right| right <=> left}

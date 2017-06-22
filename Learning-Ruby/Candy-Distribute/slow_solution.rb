def distribute_candies(candies)
    answer = candies.group_by{|x| x}.count
    return answer <= (candies.length/2) ? answer: candies.length/2 
    
end

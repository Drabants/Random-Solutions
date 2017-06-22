# @param {Integer[]} candies
# @return {Integer}
def distribute_candies(candies)
    answer = candies.uniq.count
    return answer <= (candies.length/2) ? answer: candies.length/2 
    
end

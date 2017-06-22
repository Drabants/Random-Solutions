var distributeCandies = function(candies) {
    var answer = new Set(candies).size
    return (answer < candies.length/2) ? answer:candies.length/2;
};

class Solution {
public:
    int climbStairs(int n) {
        int one =1; 
        int two =1;
        
        for(int i = 0; i< n; i++){
            one = (two += one)-one;
        }
        return one;
    }
};

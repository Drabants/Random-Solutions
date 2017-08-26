class Solution {
public:
    int getSum(int a, int b) {
        int sum =a;
        while(b){
            sum =a^b;
            b = (a&b);
            a = sum;
        }
        return sum;
    }
};

class Solution {
public:
    int reverse(int x) {
        long long reversedInt= 0;
        while(x != 0){
            reversedInt = reversedInt*10;
            reversedInt += x%10;
            x = x/10;

        }
       return (reversedInt<INT_MIN || reversedInt>INT_MAX) ? 0 : reversedInt;
    }
};

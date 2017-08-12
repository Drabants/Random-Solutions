class Solution {
public:
    int findComplement(int num) {
        int shiftRight = num;
        int counter=0;
        while(shiftRight !=0){
            shiftRight >>= 1;
            num ^= (1 << counter);
            counter++;
        }
        return num;
    }
};

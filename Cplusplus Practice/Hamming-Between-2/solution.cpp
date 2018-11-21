class Solution {
public:
    int hammingDistance(int x, int y) {
        int z  = x ^ y;
        int hammingDistance = 0;
        int i = z&1;
        for(int i=0; i<31; i++){
            if(z&1 == 1){
                hammingDistance++;
            }
            z = z>>1;
        }
        return hammingDistance;
    }
};

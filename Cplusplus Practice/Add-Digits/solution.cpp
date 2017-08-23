class Solution {
private:
    int sum = 0;
public:
    int addDigits(int num) {
        while(newSum(num));
        return num;
    }
    
    bool newSum(int &num){
        if(num < 10){
            return false;
        }else{
            while(num !=0){
                sum += num%10;
                num = num/10;
            }
        }
        num=sum;
        sum=0;
        return true;
    }
};

class Solution {
public:
    string addStrings(string num1, string num2) {
        int j = num1.size()-1;
        int k = num2.size()-1;
        int carry = 0;
        int sum = 0;
        string answer;
        while(j>=0 || k>=0 || carry){
            if (j>= 0)  sum += num1[j]-'0';
            if (k>= 0)  sum += num2[k]-'0';
            sum += carry;
            carry  = sum/10;
            sum = sum%10;
            answer.push_back(sum+'0');
            sum = 0;
            j--;
            k--;
        }
        reverse(answer.begin(),answer.end());
        return answer;
    }
};

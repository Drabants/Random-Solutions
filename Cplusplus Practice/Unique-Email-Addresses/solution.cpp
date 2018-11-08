#include <string>

class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        map<string , int> uniqueEmails;
        int length = emails.size();
        int count = 0;
        for (int i = 0 ; i< length; i++){
            for(int j = 0; j < emails[i].length(); j++){
                if(emails[i][j] == '.'){
                    emails[i].erase(emails[i].begin()+j);
                }
                if(emails[i].at(j) == '+'){
                    while(emails[i].at(j) != '@'){;
                     emails[i].erase(emails[i].begin()+j);
                    }
                }
                if(emails[i].at(j) == '@'){
                    j = emails[i].length();
                }
            }
            if(uniqueEmails[emails[i]] == 0){
                uniqueEmails[emails[i]]++;
                count++;
            }
        }
        return count;
    }
};

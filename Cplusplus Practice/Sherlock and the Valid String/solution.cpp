#include <bits/stdc++.h>

using namespace std;

int getMax(int charCount[]){
    int max = 0;
    for(int i = 0 ; i <26; i++){
        if(charCount[i] > max){
            max = charCount[i];
        }
    }    
    return max;
}

int getMin(int charCount[]){
    int min = INT_MAX;
    for(int i = 0 ; i <26; i++){
        if(charCount[i] < min && charCount[i] != 0){
            min = charCount[i];
        }
    }    
    return min;
}

bool moreThanOneChangeNeeded(int charCount[], int min, int max){
    int minRepeat=0;
    int maxRepeat=0;
    for(int i = 0; i<26; i++){
        if(charCount[i] == min){
            minRepeat++;
        }
        else if(charCount[i] == max){
            maxRepeat++;
        }
        else if(charCount[i] != 0){
            return true; 
        }
    }
    if(minRepeat>1 && maxRepeat >1){
        return true;
    }
    if(minRepeat>1 && max-min > 1){
        return true;
    }
    return false;
}

// Complete the isValid function below.
string isValid(string s) {
    int charCount[26] = {0};
    int min;
    int max;
    for(int i = 0 ; i <s.size(); i++){
        charCount[s[i]-'a']++;
    }
    max = getMax(charCount);
    min = getMin(charCount);
    cout << min << " " << max;
    if((max-min)>1 && min != 1){
        return "NO";
    }
    if(min==max){
        return "YES";
    }
    if(moreThanOneChangeNeeded(charCount, min, max)){
        return "NO";
    }
    return "YES";
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

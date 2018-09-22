#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    int seaLevel = 0;
    int tripLength = s.size();
    int i = 0;
    int valleys= 0;
    while(i < tripLength){
        if (!seaLevel){
            if(s[i]=='D'){
                valleys++;
            }
        }
        if(s[i] == 'D'){
            seaLevel--;
        }else{
            seaLevel++;
        }
        i++;
    }
    return valleys;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}

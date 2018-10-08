#include <bits/stdc++.h>

using namespace std;

// Complete the isBalanced function below.
string isBalanced(string s) {
    stack<char> balance;
    int size = s.size();
    for(int i = 0; i< size; i++){
        if(s[i]=='('){
            balance.push(')');
        }
        if(s[i]=='['){
            balance.push(']');
        }
        if(s[i]=='{'){
            balance.push('}');
        }
        if(!balance.empty()){
        if(s[i]==')'){
            if(balance.top() != ')'){
                return "NO";
            }
            balance.pop();
        }
        if(s[i]==']'){
            if(balance.top() != ']'){
                return "NO";
            }
            balance.pop();
        }
        if(s[i]=='}'){
            if(balance.top() != '}'){
                return "NO";
            }
            balance.pop();
        }
        }else{
            return "NO";
        }
    }
    if(!balance.empty()){
        return "NO";
    }
    return "YES";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

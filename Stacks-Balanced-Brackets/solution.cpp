#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

bool is_balanced(string expression) {
    char temp;
    stack<char> charstack;
  if(expression.size()%2 !=0){
      return false;
  }
    for(int i = 0; i<expression.size(); i++){
        if(expression.at(i)=='('){
            charstack.push(')');
        }
        else if(expression.at(i)=='{'){
            charstack.push('}');
        }
        else if(expression.at(i)=='['){
            charstack.push(']');
        }
        else {
            if(charstack.empty()){
                return false;
            }
        temp= charstack.top();
        charstack.pop();
        if (temp != expression.at(i)){
            return false;
        }
     }
    }
    if(charstack.empty()){
   return true;
    }
    else{
        return false;
    }
    
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string expression;
        cin >> expression;
        bool answer = is_balanced(expression);
        if(answer)
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

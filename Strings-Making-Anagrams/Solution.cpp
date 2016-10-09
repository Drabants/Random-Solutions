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

int number_needed(string a, string b) {
    int alist[26]={ }, blist[26]={ }, tempa=0, tempb=0;
   for(int i=0; i<a.size(); i++){
       alist[a.at(i)-'a']= alist[a.at(i)-'a']+1;
   }
   for(int i=0; i<b.size(); i++){
       blist[b.at(i)-'a']= blist[b.at(i)-'a']+1;
   }
   for(int i=0; i<26; i++){
       if(alist[i] != blist[i]){
           if(alist[i]>blist[i]){
               tempa = tempa+alist[i]-blist[i];
           }
           else{
               tempa = tempa+blist[i] - alist[i];
           }
       }
   }
    return tempa;
}

int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    cout << number_needed(a, b) << endl;
    return 0;
}

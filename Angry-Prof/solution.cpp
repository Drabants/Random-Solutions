#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    int temp =0;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        cin >> n >> k;
        vector<int> a(n);
        for(int a_i = 0;a_i < n;a_i++){
           cin >> a[a_i];
        }
        for(int b=0; b<n; b++){
            if(a[b] <= 0){
                temp++;
            }
        }
        if (temp >= k){
            cout << "NO" <<endl;
        }
        else{
            cout << "YES" <<endl;
        }
        temp=0;
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int birthdayCakeCandles(int n, vector <int> ar) {
    // Complete this function
    int max=0;
    int candles = 0;
    for (int i =0; i<ar.size(); i++){
        if (ar[i] > max){
            max = ar[i];
            candles = 0;
        }
        if (ar[i] == max){
            candles += 1;
        }
    }
    return candles;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = birthdayCakeCandles(n, ar);
    cout << result << endl;
    return 0;
}

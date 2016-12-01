#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n=0;
    int total = 3;
    int values [total]{0};
    for (int i=0; i<total; i++){
        cin>> values[i];
    }
    total = values[1] - values[0];
    int days[total] {0};
    int valuesrev[total]{0};
    for(int i=0; i<total; i++){
        days[i]=values[0]+i;
        n= days[i];
        while (n!=0){
            valuesrev[i]= valuesrev[i]*10 + (n%10);
            n= n/10;
        }
    }
    for(int i=0; i<total; i++){
        if(((days[0]+i) - valuesrev[i])%values[2]==0){
            n++;
        }
    }
    cout << n;
    return 0;
}

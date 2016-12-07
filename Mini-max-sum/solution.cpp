#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <limits.h>
#include <cstdint>
#include <stdint.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    uint64_t temp =0;
    uint64_t min=ULLONG_MAX, max=0;
    uint64_t num[5]{0};
    for(int i=0; i <5; i++){
        cin>>num[i];
    }
    for(int i=0; i<5; i++){
        for(int s=0; s<5; s++){
            if(s!=i){
            temp+= num[s];
            }
        }
        if(temp < min){
            min=temp;
        }
        if(temp > max){
            max=temp;
        }
        temp=0;
    }
    cout << min <<" " << max ;
    return 0;
}

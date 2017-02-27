#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int sum=0;
    int items;
    int allergy;
    cin>>items >> allergy;
    int cost[items];
    for(int i=0; i<items; i++){
        cin>> cost[i];
        sum+= cost[i];
    }
    sum-= cost[allergy];
    sum= sum/2;
    cin>>items;
    if(sum==items){
        cout<< "Bon Appetit";
    }
    else{
    cout<< items-sum ;
    }
    return 0;
}

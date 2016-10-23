#include <cmath>
#include <iomanip>
#include <queue>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void add_to_queue(priority_queue<int,vector<int>>& min, priority_queue<int,vector<int>, greater<int>>& max, int num){
    if(min.size() == 0 || num <   min.top()){
        min.push(num);
    }
    else{
        max.push(num);
    }
}

void balance_heaps(priority_queue<int,vector<int>>& min, priority_queue<int,vector<int>,greater<int>>& max){
    if(min.size()>max.size()){
        if(min.size()-max.size() >=2){
            max.push(min.top());
            min.pop();
        }
    }
    else if(min.size()<max.size()){
        if(max.size()-min.size() >=2){
            min.push(max.top());
            max.pop();
        }
    }
}

void print_median(priority_queue<int,vector<int>>& min, priority_queue<int,vector<int>,greater<int>>& max){
    cout << setprecision(1) << fixed;
    if((min.size()+max.size()) % 2 == 0){
        cout<< float((min.top()+max.top()))/2.0 <<endl;
    }
    else{
        if(min.size()>max.size()){

           cout<< float(min.top()) <<endl;
        }
        else{
            cout << float(max.top()) << endl;
        }
    }
}


int main(){
    priority_queue<int,vector<int>> minHeap;
    priority_queue<int,vector<int>, greater<int>> maxHeap;
    int n;
    float medians[n];
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
       add_to_queue(minHeap, maxHeap, a[a_i]);
       balance_heaps(minHeap,maxHeap);
       print_median(minHeap, maxHeap);
    }
    
    return 0;
}

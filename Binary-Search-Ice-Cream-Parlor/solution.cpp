#include <bits/stdc++.h>
using namespace std;

class IceCream {
    
    public: 
        int flavor; 
        int index;

        IceCream(int cost, int place) {
            flavor= cost;
            index= place;
       }
};
bool compare(IceCream a, IceCream b){
    return a.flavor<b.flavor;
}    
int binarySearch(int first, int last, vector<IceCream> arr, int search) {
   int index = (last+first)/2;
   if(arr[index].flavor==search){
       return index;
   }
   else if (last-first== 1){
       return -1;
   }
   else if(search > arr[index].flavor){
       return binarySearch(index, last, arr, search);
   }
    else{
       return binarySearch(first, index, arr, search);
   }
}

int main() {
    int t;
    int n, m;
    cin >> t;
    for(int test = 0; test < t; test++) {    
        cin >> m >> n;
        vector<IceCream> arr;
        arr.reserve(n); 

        for (int i = 0; i < n; i++) {
            int cost;
            cin >> cost;
            arr.push_back(IceCream(cost, i + 1));
        }
        sort(arr.begin(), arr.end(), compare);
        int firstIndex = 100000, secondIndex = 100000;
        for(int i = 0; i < n - 1 ; i++) {
            int search = m - arr[i].flavor;
            if(search >= arr[i].flavor) {
                int index = binarySearch( i + 1, n - 1, arr, search);
                if( index != -1 ) {
                    if(arr[i].index > arr[index].index){
                    cout << arr[index].index << " " << arr[i].index << endl;
                    }
                    else{
                    cout << arr[i].index << " " << arr[index].index << endl;    
                    }
                    break;

                }
            }
        }

    }

}

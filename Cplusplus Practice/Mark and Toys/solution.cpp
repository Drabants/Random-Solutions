#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

void merge(vector<int>& prices, int start,int middle, int end){
    int arr1size = middle-start+1;
    int arr2size = end - middle;
    int arr1[arr1size];
    int arr2[arr2size];
    
    for(int i=0; i < arr1size; i++){
        arr1[i]=prices[start+i];
    }
    for(int i=0; i < arr2size; i++){
        arr2[i]=prices[middle+1+i];
    }
    int i=0;
    int j=0;
    int k=start;
    while(i <arr1size && j<arr2size){
        if(arr1[i]<=arr2[j]){
            prices[k]=arr1[i];
            i++;
        }else{
            prices[k]=arr2[j];
            j++;   
        }
        k++;
    }
    while(i<arr1size){
        prices[k]=arr1[i];
        i++;
        k++;
    }
    while(j<arr2size){
            prices[k]=arr2[j];
            j++;
            k++;
    }

}

void mergeSort(vector<int>& prices, int start, int end){
    if(start<end){
    int middle = (start+end)/2;
    mergeSort(prices, start, middle);
    mergeSort(prices, middle+1, end);
    merge(prices,start,middle, end);
    }
}



// Complete the maximumToys function below.
int maximumToys(vector<int> prices, int k) {
    mergeSort(prices, 0, prices.size()-1);
    int sum = 0;
    for(int i = 0; i < prices.size(); i++){
        cout << prices[i] << "  ";
        sum += prices[i];
        if(sum > k){
            return i;
        }
    }
    if(sum<k){
        return prices.size();
    }
    return 0;
    

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nk_temp;
    getline(cin, nk_temp);

    vector<string> nk = split_string(nk_temp);

    int n = stoi(nk[0]);

    int k = stoi(nk[1]);

    string prices_temp_temp;
    getline(cin, prices_temp_temp);

    vector<string> prices_temp = split_string(prices_temp_temp);

    vector<int> prices(n);

    for (int i = 0; i < n; i++) {
        int prices_item = stoi(prices_temp[i]);

        prices[i] = prices_item;
    }

    int result = maximumToys(prices, k);

    fout << result << "\n";

    fout.close();

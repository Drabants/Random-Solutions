#include <bits/stdc++.h>

using namespace std;


int addRow(vector<vector<int>> arr, int height, int width){
    int sum = 0;
    for(int i = 0; i< 3; i++){
        sum += arr[height][width+i];
    }
    return sum;
}


int hourglassSumAdder(vector<vector<int>> arr, int height, int width){
    if(height+2 > arr.size() || width+2 > arr.size()){
        return INT_MIN;
    }
    int sum = 0;
    sum = addRow(arr, height, width);
    sum += addRow(arr, height+2, width);
    sum += arr[height+1][width+1];
    return sum;
}


// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
    int highestSum = INT_MIN;
    int temp =0;
    for(int i=0; i < 4; i++){
        for(int j=0; j<4; j++){
            temp = hourglassSumAdder(arr, i, j);
            if (temp> highestSum){
                highestSum=temp;
            }
        }
    }
    return highestSum;

}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

#include <iomanip>
#include <iostream>
using namespace std;

// To execute C++, please define "int main()"
int main() {
  for(int i=1; i<13; i++){
    for(int s=1; s<13; s++){
      cout <<setw(4) << s*i;
    }
    cout << endl;
  }
  return 0;
}

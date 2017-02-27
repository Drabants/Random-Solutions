#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

struct Node{
    map<char, Node* >data;
    int count =0;
};
class Tree{
    public:
    Node* root = new Node;
void    add_to_tree(string temp, Node* parent){
        Node* current,* addnode;
        current = parent;
        for(char s : temp){
            if(current->data.find(s)== current->data.end()){
                addnode = new Node;
                addnode->count++;
                current->data[s]=addnode;
                current = addnode;
            }
            else{
                current = current->data[s];
                current->count ++;
            }
        }
    }
int    find(string temp, Node* root){
        Node* current=root;
     for(char s : temp){
         if(current->data.find(s) == current->data.end()){
                 return 0;
            }
         else{
                 current= current->data[s];
            }
        }
    return current->count;
    }
};
int main(){
    int n;
    Tree mytrie;
    cin >> n;
    for(int a0 = 0; a0 < n; a0++){
        string op;
        string contact;
        cin >> op >> contact;
        if(op == "add"){
            mytrie.add_to_tree(contact, mytrie.root);
        }
        else{
            cout << mytrie.find(contact, mytrie.root)<< endl;
        }
    }
    return 0;
}

#include<iostream>
#include<vector>
using namespace std;

int main(){
    //declaration
    vector <int> v(6);
    cout << "Enter the value of vector\n";
    for(int i=0; i<6; i++){
        cin >> v[i];
    }
    cout << "Enter the key: \n";
    int key;
    cin >> key;

    int pos = -1;
    for (int i=0; i<6; i++){
        if(key == v[i]){
            pos = i;
        }
    }
    cout << "Position of keyis: " << pos;
}
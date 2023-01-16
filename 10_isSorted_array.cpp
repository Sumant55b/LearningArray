#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> v(5);
    //taking input
    cout << "Enter the value: \n";
    for(int i=0; i<5; i++){
        cin >> v[i];
    }

   //Checking sorted or not
    bool flag = true;
    for(int i=1; i<v.size(); i++){
        if(v[i-1] >= v[i]){
            flag = false;
            break;
        }
    }
    cout << flag;
}
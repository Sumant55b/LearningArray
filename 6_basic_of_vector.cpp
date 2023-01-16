#include<iostream>
#include<vector>  //to use vector
using namespace std;

int main(){
    //1.) declaration of vector
    vector <int> vec_name;       //without size
    vector <int> vec_size(5);       //with size

    cout << "\n\n\n\n" ;

    //2.) to check size of vector
    cout << "------------Concept of size---------------\n";
    cout << "size of vector auto: " << vec_name.size() << endl;
    cout << "size of vector manually: " << vec_size.size() << endl;

    //3.) to update size of vector
    vec_name.resize(6);
    vec_size.resize(8);
    cout << "Resize of vector which defined auto: " << vec_name.size() << endl;
    cout << "Resize of vector which defined manually: " << vec_size.size() << endl;

    //4.) capacity:- it is increasing as power of 2. when you put data more than size of vector.
    cout << "\n------------Concept of Capacity---------------\n";
    vector <int> cap;
    cout << "Size of vector: " << cap.size() << endl;
    cout << "Capacity of vector: " << cap.capacity() << endl;
    cap.push_back(5);                          //use for put data in vector at the last position
    cout << "Size of vector: " << cap.size() << endl;
    cout << "Capacity of vector: " << cap.capacity() << endl;
    cap.push_back(5); 
    cout << "Size of vector: " << cap.size() << endl;
    cout << "Capacity of vector: " << cap.capacity() << endl;
    cap.push_back(5); 
    cout << "Size of vector: " << cap.size() << endl;
    cout << "Capacity of vector: " << cap.capacity() << endl;
    cap.push_back(5); 
    cout << "Size of vector: " << cap.size() << endl;
    cout << "Capacity of vector: " << cap.capacity() << endl;
    cap.push_back(5); 
    cout << "Size of vector: " << cap.size() << endl;
    cout << "Capacity of vector: " << cap.capacity() << endl;

    cap.pop_back();             // use for delete data from vector at last index
    cap.pop_back();
    cap.pop_back();
    cout << "Size of vector: " << cap.size() << endl;
    cout << "Capacity of vector: " << cap.capacity() << endl;
    


    //taking input
    cout << "\n------------Concept of Taking input---------------\n";
    vector <int> v;
    cout << "\n Enter the value : \n";
    for(int i=0; i<5; i++){                  //here, 5 means you want to take 5 element
        int element;
        cin >> element;
        v.push_back(element);
    }
    //accessing data 
    for(int i=0; i<v.size(); i++){                  
        cout << v[i] << " ";
    } cout << endl;
    for(int element:v){
        cout << element << " ";
    }
    cout << "\n------------Concept of input & Delete---------------\n";
    //Erase for specific position
    v.erase(v.end()-1);      // we can use .clear to delete all the data.


    //input for specific position- .insert(pos,data);
    v.insert(v.begin()+1,5);    

    for(int element:v){
        cout << element << " ";
    }
    cout << "\n\n\n\n" ;
}
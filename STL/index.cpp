#include<bits/stdc++.h>
using namespace std;

 
int main() {

    // syntax of STL Elements:

    // Array:
    // array<datatype, size> array_name;
    // array<int,5> a = {5,4,3,2,1};

    // int size = a.size();

    // cout <<"Print array elements before sorting: ";
    // for(int i=0;i<size;i++){
    //     cout << a[i] <<" ";
    // } cout <<endl;

    // sort(a.begin(), a.end());
    // cout <<"Print array elements after sorting: ";
    // for(int i=0;i<size;i++){
    //     cout << a[i] <<" ";
    // } cout <<endl;

    // cout <<"Element at 0th index: " << a.at(0) <<endl;
    // cout <<"Element at 2nd index: " << a.at(2) <<endl;
    // cout <<"Empty or not: "<< a.empty() <<endl;
    // cout <<"First element: "<< a.front() <<endl;
    // cout <<"Last element: "<< a.back() <<endl;
    


    // Vector:
    // vector<datatype> vector_name;
    // vector<int> v;
    // cout <<"Capacity: "<<v.capacity()<<endl;
    // cout <<"Size: "<<v.size()<<endl;

    // v.push_back(1);
    // cout <<"Capacity: "<<v.capacity()<<endl;
    // cout <<"Size: "<<v.size()<<endl;

    // v.push_back(2);
    // cout <<"Capacity: "<<v.capacity()<<endl;
    // cout <<"Size: "<<v.size()<<endl;

    // v.push_back(3);
    // cout <<"Capacity: "<<v.capacity()<<endl;
    // cout <<"Size: "<<v.size()<<endl;

    // cout <<"Element at 2nd index: " << v.at(2) <<endl; 

    // cout <<"First element: "<< v.front() <<endl;
    // cout <<"Last element: "<< v.back() <<endl;
    
    // cout <<"before pop: "<<endl;
    // for(int i:v) {
    //     cout << i <<" ";
    // } cout <<endl;

    // v.pop_back();

    // cout <<"after pop: "<<endl;
    // for(int i:v) {
    //     cout << i <<" ";
    // } cout <<endl;

    // cout <<"before clear size: "<<v.size()<<endl;
    // v.clear();
    // cout <<"after clear size: "<<v.size()<<endl;


    // vector<int> w(5);   // initialize all vector elements to 0
    // cout <<"print w: "<<endl;
    // for(int i:w) {
    //     cout << i <<" ";
    // } cout <<endl;

    // vector<int> x(5,1);   // initialize all vector elements to 1
    // cout <<"print x: "<<endl;
    // for(int i:x) {
    //     cout << i <<" ";
    // } cout <<endl;

    // vector<int> y = {3,1,7,4,9,5};
    // sort(y.begin(), y.end());
    // cout <<"after sorting: "<<endl;
    // for(int i:y) {
    //     cout << i <<" ";
    // } cout <<endl;

    // int x → Variable to store each element
    // : v/w/x/y → Loop runs for every element in vector v/w/x/y



    // deque (double ended queue):
    // syntax: deque(datatype) name;
    // deque<int> d;
    // d.push_front(5);
    // cout <<"Size: "<< d.size() <<endl;
    // cout <<"front element: "<< d.front() <<endl;

    // d.push_back(3);
    // cout <<"Size: " << d.size() <<endl;
    // cout <<"back element: "<< d.back() <<endl;

    // d.pop_back();
    // cout <<"Size: " << d.size() <<endl;
    // for(int i:d){
    //     cout << i <<endl;
    // }
    
    // d.pop_front();
    // cout <<"Size: "<< d.size() <<endl;
    // for(int i:d){
    //     cout << i <<endl;
    // }

    // cout <<"print element at index 1: "<< d.at(1) <<endl;

    // cout <<"Empty or not: "<< d.empty() <<endl;

    // cout <<"before erase: " << d.size() <<endl;
    // d.erase(d.begin(), d.begin()+1);
    // cout <<"after erase: " << d.size() <<endl;
    // for(int i:d){
    //     cout <<"left element: "<< i <<endl;
    // }
    


    // list (doubly linked list):
    list<int> l;
    cout <<l.size() <<endl;

    l.push_back(10);
    cout <<l.size() <<endl;

    l.push_front(20);
    cout <<l.size() <<endl;

    l.insert(l.begin(),50);

    for(int i:l){
        cout << i <<" ";
    }cout <<endl;

    cout <<"before erase: "<< l.size() <<endl;
    l.erase(l.begin());
    cout <<"after erase: " <<l.size() <<endl;
    


    return 0;
}
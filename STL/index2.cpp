#include<bits/stdc++.h>
using namespace std;

 
int main() {

    // Stack (LIFO):
    // syntax: stack<datatype> stack_name;
    // stack<string> st;
    // st.push("shubham");
    // st.push("kumar");
    // st.push("jha");
    // st.push("18");

    // cout <<"empty or not: "<< st.empty() <<endl;
    // cout <<"size of stack: "<< st.size() <<endl;
    // cout <<"Top element before deleteing: "<< st.top() <<endl;
    // st.pop();
    // cout <<"Top element after deleting: "<< st.top() <<endl;

    // int number = st.size();
    // for(int i=0;i<number;i++){
    //     cout << st.top() <<endl;
    //     st.pop();    // print & destroy
    // }
    // cout <<"empty or not: "<< st.empty() <<endl;


    // Neither stack nor queue supports:
    // Indexing
    // Iterators
    // Range-based loop


    // Queue (FIFI):
    // syntax: queue<datatype> name;
    // queue<string> q;
    // q.push("pragya");
    // q.push("suman");
    // q.push("muskan");
    // q.push("kumari");

    // cout <<"\nsize of queue: "<< q.size() <<endl;
    // cout <<"first element: " <<q.front() <<endl;
    // cout <<"last element: " <<q.back() <<endl;

    // q.pop();
    // cout << "Size after pop: "<< q.size() <<endl;
    // cout <<"first element: " <<q.front() <<endl;

    // int num = q.size();
    // for(int i=0;i<num;i++){
    //     cout << q.front() <<endl;
    //     q.pop();
    // }
    // cout <<"empty or not: "<< q.empty() <<endl;


    // Priority_queue:
    // syntax: priority_queue<datatype> name;   // max heap (by default)
    // priority_queue<int> pq;
    // pq.push(3);
    // pq.push(5);
    // pq.push(7);
    // pq.push(2);

    // cout <<"Size: "<< pq.size() <<endl;
    // cout <<"top element: "<< pq.top() <<endl;

    // int n = pq.size();
    // for(int i=0;i<n;i++){
    //     cout << pq.top() <<" ";
    //     pq.pop();
    // } cout <<endl;

    // cout <<"EMPTY OR NOT: "<< pq.empty() <<endl;   


    // // min heap:
    // priority_queue<int, vector<int>, greater<int>> mini;
    // mini.push(3);
    // mini.push(5);
    // mini.push(7);
    // mini.push(2);
    // mini.push(1);

    // cout <<"\nSize: "<< mini.size() <<endl;
    // cout <<"top element: "<< mini.top() <<endl;

    // int m = mini.size();
    // for(int i=0;i<m;i++){
    //     cout << mini.top() <<" ";
    //     mini.pop();
    // } cout <<endl;

    // cout <<"Empty or not: "<< mini.empty() <<endl;   



    // Set: it store unique values
    // set<int> s;
    // s.insert(5);
    // s.insert(5);
    // s.insert(5);
    // s.insert(3);
    // s.insert(3);
    // s.insert(9);
    // s.insert(7);
    // s.insert(7);
    // s.insert(1);

    // cout <<"Size: "<< s.size() <<endl;
    // cout <<"Empty or not: "<< s.empty() <<endl;
    // cout <<"print elements: ";
    // for(int i:s){
    //     cout << i <<" ";
    // } cout <<endl;

    // cout <<"present or not: "<< s.count(5) <<endl;
    // cout <<"Erase: "<< s.erase(5) <<endl;
    // for(auto i:s){
    //     cout << i <<" ";
    // } cout <<endl;

    // cout <<"present or not: "<< s.count(5) <<endl;

    // // cout <<"find element: "<< s.find(5) <<endl;
    // if(s.find(5) != s.end()){
    //     cout << "Element found";
    // } else cout <<"Element not found!";



    // Map: 
    // syntax: map<key_type, value_type> m;
    map<int, string> m;
    m[1] = "shubham";
    m.insert({12,"jha"});
    m[3] = "kumar";
    m[5] = "18";

    for(auto i:m){
        cout << i.first << " -> " << i.second <<endl;
    }

    cout <<"access element: " << m[3] <<endl;
    cout <<"check existence: " << m.count(12) <<endl;
    m.erase(12);
    for(auto i:m){
        cout << i.first << " -> " << i.second <<endl;
    }

    if(m.find(12) != m.end()){
        cout << "found " <<endl;
    } else cout << "not found! " <<endl;


    // unordered_map: 
    // syntax: unordered_map<key_type, value_type> um;
    unordered_map<int, string> um;
    um[1]="muskan";
    um.insert({5,"kumari"});
    um[3]="pragya";
    um[2]="suman";

    // traverse (in random manner)
    for(auto i:um){
        cout << i.first << " -> " << i.second <<endl;
    }

    cout <<"access element: " << um[3] <<endl;
    cout <<"check existence: " << um.count(12) <<endl;
    um.erase(2);
    for(auto i:um){
        cout << i.first << " -> " << i.second <<endl;
    }

    if(um.find(1) != um.end()){
        cout << "found " <<endl;
    } else cout << "not found! " <<endl;


    
    return 0;
}
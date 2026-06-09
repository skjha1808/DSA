#include<bits/stdc++.h>
using namespace std;

 
int main() {

    vector<int> v;

    v.push_back(3);
    v.push_back(1);
    v.push_back(9);
    v.push_back(7);
    v.push_back(15);
    v.push_back(3);

    sort(v.begin(), v.end());
    cout <<"sort in ascending order: ";
    for(int i:v){
        cout << i <<" ";
    } 

    // sort(v.begin(), v.end(), greater<int>());
    // cout <<"\nsort in descending order: ";
    // for(int i:v){
    //     cout << i <<" ";
    // }

    // lower_bound(>=) & upper_bound(>) to given value:
    auto it = lower_bound(v.begin(),v.end(),3);
    cout << "lower bound is: " << *it <<endl;

    auto it1 = upper_bound(v.begin(),v.end(),3);
    cout << "upper bound is: " << *it1 <<endl;


    cout <<"Search element: "<< binary_search(v.begin(), v.end(), 7) <<endl;
    cout <<"Count Element: "<< count(v.begin(), v.end(), 5) <<endl;

    // auto it = find(v.begin(), v.end(), 9);
    if(find(v.begin(), v.end(), 9) != v.end()){
        cout <<"found: "<<endl;
    } else cout <<"not found! "<<endl;

    cout <<"after replacing: ";
    replace(v.begin(), v.end(),1,20);
    for(int i:v){
        cout << i <<" ";
    } cout <<endl;

    vector<int> v2(5);    // allocate space
    copy(v.begin(),v.end(),v2.begin());
    cout <<"after copying: ";
    for(int i:v2){
        cout << i <<" ";
    }cout <<endl;
    

    string s = "ABCD";
    reverse(s.begin(), s.end());
    cout <<"reversed string: " << s <<endl;

    int a=5,b=9;
    cout <<"Max: "<< max(a,b) <<endl;
    cout <<"Min: "<< min(a,b) <<endl;

    swap(a,b);
    cout <<"After swap a & b are: "<< a << " & " << b <<endl;
    



    return 0;
}
#include<bits/stdc++.h>
using namespace std;

// T.C. = O(N) & S.C. = O(N)   using extra string
string replaceSpace(string s){
    
    string temp = "";

    for(char c : s){
        if(c == ' '){
            temp += "@45"; 
        }
        else{
            temp += c;
        }
    }

    return temp;
}

// T.C. = O(N) & S.C. = O(1)  using in-place
string replaceSpaces(string s){

    // count spaces
    int spaceCount = 0;
    for(char c : s){
        if(c == ' ')  spaceCount++;
    }

    // Resize string
    int oldLength = s.length();
    int newLength = s.length() + 2*spaceCount;
    s.resize(newLength);

    // initialize two pointers
    int i = oldLength - 1;    // original end
    int j = newLength - 1;    // end end

    // fill from back
    while(i >= 0){
        if(s[i] == ' '){
            s[j--] = '5';
            s[j--] = '4';
            s[j--] = '@';
        }
        else {
            s[j--] = s[i];
        }
        i--;
    }

    return s;   // return modified string
}


int main() {

    string s = "My name is Shubham";
    cout << replaceSpace(s) <<endl;

    string ss = "Myself Shubham Kumar";
    cout << replaceSpaces(ss) <<endl;


    return 0;
}
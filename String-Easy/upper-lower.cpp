#include<bits/stdc++.h>
using namespace std;

char toLowercase(char ch) {
    if(ch >= 'A' && ch <='Z'){
        ch = ch + 32;
    }
    return ch;
}

char toUppercase(char ch) {
    if(ch >= 'a' && ch <='z'){
        ch = ch - 32;
    }
    return ch;
}


int main() {

    char ch = 'A';
    cout <<"Lowercase: " <<toLowercase(ch) <<endl;

    char ch1 = 'z';
    cout <<"Uppercase: " <<toUppercase(ch1) <<endl;

    return 0;
}
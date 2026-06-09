#include<bits/stdc++.h>
using namespace std;

// find length of string:
int getLength(char str[]){

    int count = 0;
    // loop until null character
    while(str[count] != '\0'){
        count++;
    }

    // for(int i=0;str[i] != '\0';i++){
    //     count++;
    // }
    return count;
}


int main() {

    // char ch[20];
    // cout <<"Enter your Name: ";
    // cin >> ch;
    // cout <<"My Name is " << ch <<endl;


    char ch[] = "Shubham Kumar";
    cout <<"My name is " << ch <<endl;

    // null character (\0)
    char name[] = {'s','h','u','b','\0','h','a','m'};
    cout <<"My Name is " << name <<endl;

    // using loop
    cout <<"Length: " << getLength(ch) <<endl;

    // using strlen() (library function)
    cout <<"Length: " << strlen(ch) <<endl;

    // using c++ stl
    string s = "hello";
    cout <<"Length: " << s.length() <<endl;



    return 0;
}
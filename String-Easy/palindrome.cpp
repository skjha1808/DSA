#include<bits/stdc++.h>
using namespace std;

// function to convert uppercase to lowercase
char toLowercase(char ch) {
    if(ch >= 'A' && ch <= 'Z'){
        ch = ch + 32;
    }
    return ch;
}
// function to check palindrome
bool isPalindrome(string str){

    int s = 0, e = str.size()-1;
    while(s < e){
        // if(toLowercase (str[s]) != toLowercase (str[e]))
        if(str[s] != str[e])
        {
            return false;
        }
        else{
            s++;
            e--;
        }
    }
    return true;
}


// function to find the length
int getLength(char ch[]){
    int count = 0;
    while(ch[count] != '\0'){
        count++;
    }
}
// check palindrome for char array
bool checkPalindrome(char ch[]){

    int n = getLength(ch);

    int s = 0, e = n-1;
    while(s < e){
        if(ch[s++] != ch[e--]){
            return false;
        }
    }
    return true;
}


// ignore special character (@,!,#,%,$)
bool isitPalindrome(string s) {

    int st = 0, end = s.length()-1;
    
    while(st < end){
        // skip non-alphanumeric character
        if(!isalnum(s[st])){
            st++;
            continue;     // continue → skips the rest of the loop and goes to the next iteration
        }
        if(!isalnum(s[end])){
            end--;
            continue;
        }

        // convert to lowerCase & compare
        if(tolower(s[st]) != tolower(s[end])){
            return false;
        }
        st++;
        end--;
    }
    return true;
}

int main() {

    string s = "Madam";   // case sensitive
    if(isPalindrome(s)){
        cout <<"Palindrome" <<endl;;
    }
    else cout << "Not palindrome!" <<endl;


    char ch[] = "madam";
    if(checkPalindrome(ch)){
        cout <<"Palindrome" <<endl;;
    }
    else cout << "Not palindrome!" <<endl;


    string str = "A man, a plan, a canal: Panama";
    if(isitPalindrome(str)){
        cout <<"Palindrome" <<endl;;
    }
    else cout << "Not palindrome!" <<endl;


    return 0;
}
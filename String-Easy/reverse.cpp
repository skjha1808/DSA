#include<bits/stdc++.h>
using namespace std;

// Reverse String using two pointers:
void reverse(string &s){
    int st = 0;
    int end = s.length()-1;
    while(st < end){
        swap(s[st++], s[end--]);
    }
}

// reverse for char array
void reverseString(char ch[], int n){
    int s = 0;
    int e = n-1;
    while(s < e){
        swap(ch[s++], ch[e--]);
    }
}


// Reverse String II :
string reverseStr(string s, int k){
    int n = s.length();

    for(int i=0;i<n;i=i+2*k){
        // Find ending index for reversal
        // i + k - 1 → end of first k characters
        // n - 1 → last valid index
        // min() ensures we don't go out of bounds
        int end = min(i+k-1, n-1);

        int start = i;    // Start index of current block
        while(start < end){
            swap(s[start++], s[end--]);
        }
    }

    return s;    // Return modified string
}


// Reverse only letters:
string reverseOnlyLetters(string s){
    int st = 0, end = s.length()-1;

    while(st < end){
        // Skip non-letter from start
        if(!isalpha(s[st])){
            st++;
        }
        // Skip non-letter from end
        else if(!isalpha(s[end])){
            end--;
        }
        else // swap only letters
        {
            swap(s[st++], s[end--]);
        }
    }

    return s;
}


int main() {

    // using built-in function
    string str = "ram";
    reverse(str.begin(), str.end());
    cout <<"Reverse string: " << str <<endl;

    
    string s = "i love coding";
    reverse(s);
    cout << s <<endl;


    char ch[] = "hurrah";
    int n = 6;
    reverseString(ch,n);
    cout << ch <<endl;


    string s1 = "abcdefgh";
    int k = 2;
    cout << reverseStr(s1,k) <<endl;


    string s2 = "a-bC-dEf-ghIj";
    cout << reverseOnlyLetters(s2) <<endl;


    return 0;
}
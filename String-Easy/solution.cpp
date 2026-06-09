#include<bits/stdc++.h>
using namespace std;

void reverse(string &s, int start, int end) {
    while(start < end){
        swap(s[start++],s[end--]);
    }
}

string reverseWords(string s){
    int n = s.length();

    int i = 0;   // writes cleaned string
    int j = 0;   // reads original string

    // skip leading spaces/skip spaces at beginning
    while(j < n && s[j] == ' ') j++;

    // process entire string
    while(j< n){
        // Case 1: Normal character → copy it
        if(s[j] != ' '){
            s[i++] = s[j++];   // copy character & move both pointers
        }
        else {  // Case 2: Space found
            s[i++] = ' ';   // keep ONLY ONE space

            // skip multiple spaces
            while(j < n && s[j] == ' ') j++;
        }
    }

    // remove trailing spaces
    if(i > 0 && s[i-1] == ' ') i--;

    // resize string, because original string still has old garbage
    s.resize(i);   // shrink string
    n = s.length();  // update length

    // reverse the whole string
    reverse(s,0,n-1);

    // now reverse each words
    int start = 0;
    for(int end=0;end<=n;end++){
        // If end of word OR end of string
        if(end == n || s[end] == ' '){
            reverse(s,start,end-1);   // reverse current word
            start = end+1;    // move start to next word
        }
    }

    return s;   // return 
}

int main() {

    string s = "  i   love   my   country  ";
    cout << reverseWords(s) <<endl;


    return 0;
}
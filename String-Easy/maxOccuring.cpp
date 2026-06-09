#include<bits/stdc++.h>
using namespace std;

// return one character that have maximum frequency.
char maxOccuringChar(string s){
    int freq[26] = {0};    // freq[256] = {0};

    // count freq of chars
    for(int i=0;i<s.length();i++){
        freq[s[i] - 'a']++;    // freq[s[i]]++;
    }

    // find max occuring chars
    int maxFreq = 0;
    char ans = 'a';    // char ans;

    for(int i=0;i<26;i++){
        if(freq[i] > maxFreq){
            maxFreq = freq[i];
            ans = i + 'a';    // ans = char(i);
        }
    }

    return ans;
}

// return all characters that have maximum frequency.
string maxOccuringChars(string s){
    int freq[256] = {0};

    // count freq
    for(char c : s){
        freq[c]++;
    }

    // find max freq
    int maxFreq = 0;
    for(int i=0;i<256;i++){
        if(freq[i] > maxFreq){
            maxFreq = freq[i];
        }
    }

    // store all max char in string
    string result = "";
    for(int i=0;i<256;i++){
        if(freq[i] == maxFreq && maxFreq > 0){
            result.push_back(char(i));
        }
    }

    return result;
}


int main(){

    string s = "shubham";
    cout << "Max occuring character: " << maxOccuringChar(s) <<endl;

    string ss = "programming";
    cout << "Max occuring characters: " << maxOccuringChars(ss) <<endl;

    return 0;
}
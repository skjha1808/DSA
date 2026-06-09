#include<bits/stdc++.h>
using namespace std;

// Reverse words in a string:
// using extra space - O(n)  & T.C. = O(N)
string reverseWords(string s) {

    vector<string> words;   // vector stores words for easy reversal
    string word;    // temporary variable

    // Step 1: Extract words
    stringstream ss(s);    // Converts string into a stream (like input stream cin)
    // stringstream automatically handles multiple spaces
    while (ss >> word) {
        words.push_back(word);   //Adds extracted word to vector
    }

    // Step 2: Reverse words
    reverse(words.begin(), words.end());

    // Step 3: Join words
    string result = "";    // Initialize empty string, Final answer will be stored here
    for (string w : words) {
        result += w + " ";
    }

    // Remove last space/character
    if (!result.empty()) {
    result.pop_back();
    }

    return result;    // Returns final reversed string
}


// optimal (in-place - O(1))  & T.C = O(N)
// Helper function to reverse the string
void reverseRange(string &s, int start, int end) {
    while (start < end) {
        swap(s[start++], s[end--]);
    }
}
// Main function 
string reverseWord(string s) {
    int n = s.length();

    // Step 1: Reverse whole string
    reverseRange(s, 0, n - 1);

    // Step 2: Reverse each word
    int start = 0;
    for (int end = 0; end <= n; end++) {
        if (end == n || s[end] == ' ') {
            reverseRange(s, start, end - 1);
            start = end + 1;
        }
    }

    return s;
}



int main() {

    string s = "  i   love   coding  ";
    cout << reverseWords(s) << endl;

    string st = "i like cricket";
    cout << reverseWord(st) << endl;

    
    return 0;
}
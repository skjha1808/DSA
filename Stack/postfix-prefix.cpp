#include<bits/stdc++.h>
using namespace std;

string postfixToPrefix(string s) {
    // Stack stores expressions
    stack<string> st;

    // traverse to left -> right
    for(char ch:s) {
        // if operand
        if(isalnum(ch)) {
            // convert char to string (create string of length 1 from char ch)
            st.push(string(1,ch));
        }
        // if operator
        else {
            // first pop -> operand2
            string op2=st.top();
            st.pop();

            // second pop -> operand1
            string op1=st.top();
            st.pop();

            // build prefix expression
            string temp = string(1,ch) + op1 + op2;
            // push back into string
            st.push(temp);
        }
    }
    // final expression
    return st.top();
}

int main() {
    // postfix expression
    string s = "AB-DE+F*/";

    cout << postfixToPrefix(s) <<endl;

    return 0;
}
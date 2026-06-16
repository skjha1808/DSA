#include<bits/stdc++.h>
using namespace std;

string prefixToInfix(string s) {
    // Stack stores expressions
    stack<string> st;

    // treverse to right -> left
    for(int i=s.length()-1;i>=0;i--){
        // operand
        if(isalnum(s[i])) {
            // convert char to string (create string of length 1 from char)
            st.push(string(1,s[i]));
        }
        // operator
        else {
            // First pop → operand1
            string op1=st.top();
            st.pop();

            // Second pop → operand2
            string op2=st.top();
            st.pop();

            // build infix expression
            string temp = "(" + op1 + s[i] + op2 + ")";
            // push result
            st.push(temp);
        }
    }
    // return final expression
    return st.top();
}

int main() {
    // prefix expression
    string s = "*+PQ-MN";

    cout << prefixToInfix(s) <<endl;

    return 0;
}
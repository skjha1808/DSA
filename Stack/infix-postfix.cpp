#include<bits/stdc++.h>
using namespace std;

// Function to return precedence of operators
int prec(char ch){

    // Highest precedence
    if(ch=='^') return 3;

    // Multiplication and division
    if(ch=='*' || ch=='/') return 2;

    // Addition and subtraction
    if(ch=='+' || ch=='-') return 1;

    // Not an operator
    return -1;
}

// Function to convert infix → postfix
string infixToPostfix(string s){

    // Stack stores operators and brackets
    stack<char> st;

    // Final postfix expression
    string ans = "";

    // Traverse each character
    for(char ch : s){

        // Operand → directly add to output
        if(isalnum(ch)) ans += ch;

        // Opening bracket → push
        else if(ch=='(') st.push(ch);

        // Closing bracket
        else if(ch==')'){

            // Pop until '(' found
            while(!st.empty() && st.top()!='('){
                ans += st.top();
                st.pop();
            }
            // Remove '('
            st.pop();
        }

        // Operator encountered
        else{
            /*
            Pop if: 
            1. Stack operator has greater precedence, OR 
            2. Same precedence and current operator is not '^'.
            '^' is right associative
            */
            while(!st.empty() && (prec(st.top()) > prec(ch) || 
            (prec(st.top()) == prec(ch) && ch != '^'))){
                ans += st.top();
                st.pop();
            }
            // Push current operator
            st.push(ch);
        }
    }

    // Pop remaining operators
    while(!st.empty()){
        ans += st.top();
        st.pop();
    }

    // Return postfix expression
    return ans;
}

int main(){

    // Infix expression
    string s = "A+B*C";
    // string s = "A^B^C";

    // Convert and print postfix
    cout << infixToPostfix(s);

    return 0;
}
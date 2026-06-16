#include <bits/stdc++.h>
using namespace std;

// Function to return precedence of operators
int prec(char ch) {
    // Highest precedence
    if (ch == '^') return 3;

    // Multiplication and division
    if (ch == '*' || ch == '/') return 2;

    // Addition and subtraction
    if (ch == '+' || ch == '-') return 1;

    // Invalid / non-operator
    return -1;
}

// Function to convert Infix → Prefix
string infixToPrefix(string s) 
{
    // Step 1: Reverse entire expression
    reverse(s.begin(), s.end());

    // Step 2: Swap brackets -> '(' becomes ')' & ')' becomes '('
    for (char &ch : s) {
        if (ch == '(') ch = ')';

        else if (ch == ')') ch = '(';
    }

    // Stack stores operators
    stack<char> st;

    // Stores postfix of reversed expression
    string ans = "";

    // Step 3: Convert reversed infix → postfix
    for (char ch : s) {
        // Operand → directly append
        if (isalnum(ch)) ans += ch;

        // Opening bracket → push
        else if (ch == '(') {
            st.push(ch);
        }

        // Closing bracket
        else if (ch == ')') {
            // Pop until '('
            while (!st.empty() && st.top() != '(') {
                ans += st.top();
                st.pop();
            }
            // Remove '('
            st.pop();
        }

        // Operator
        else {
            /* Prefix conversion:
            Since expression is reversed, associativity changes.
            For '^' → Pop higher OR equal precedence
            */
            if (ch == '^') {
                while (!st.empty() && (prec(st.top()) >= prec(ch))) {
                    ans += st.top();
                    st.pop();
                }
            }
            // Other operators: Pop only if stack has strictly higher precedence
            else {
                while (!st.empty() && (prec(st.top()) > prec(ch))) {
                    ans += st.top();
                    st.pop();
                }
            }
            // Push current operator
            st.push(ch);
        }
    }

    // Step 4: Pop remaining operators
    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }

    // Step 5: Reverse postfix to obtain prefix
    reverse(ans.begin(),ans.end());

    return ans;
}

int main() {
    // Infix expression
    string s = "A+B*C";
    // string s="A^B^C";

    // Print Prefix expression
    cout << infixToPrefix(s);

    return 0;
}
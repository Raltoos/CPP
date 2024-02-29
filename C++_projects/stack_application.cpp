#include <iostream>
#include <string>
#include "stack"
using namespace std;
  
int prec(char c)
{
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}
  
void infixToPostfix(string s)
{
  
    stack<char> st;
    string result;
  
    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
  
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
            result += ch;
  
        else if (ch == '(')
            st.push('(');
  
        else if (ch == ')') {
            while (st.top() != '(') {
                result += st.top();
                st.pop();
            }
            st.pop();
        }

        else {
            while (!st.empty() && prec(s[i]) <= prec(st.top())) {
                result += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }
  
    while (!st.empty()) {
        result += st.top();
        st.pop();
    }
  
    cout << result << endl;
}
  
int main()
{
    string exp = "(AX*(BX*(((CY+AY)+BY)*CX)))";

    infixToPostfix(exp);
    
    return 0;
}
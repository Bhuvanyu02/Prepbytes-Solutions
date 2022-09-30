#include <bits/stdc++.h>
using namespace std;
int prec(char c)
{
     if (c == '^')
        return 4;
    else if (c == '/')
        return 3;
    else if(c=='*')
        return 2;
    else if (c == '-')
        return 1;
    else if(c=='+')
        return 0;
    else
      return -1;
}
void convert(string s)
{
 
    stack<char> st; 
    string result;
 
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
     if ((c >= 'a' && c <= 'z'))
            result += c;
            
            
        else if (c == '(')
            st.push('(');
 
        else if (c == ')') {
            while (st.top() != '(') {
                result += st.top();
                st.pop();
            }
            st.pop();
        }
 
        else {
            while (!st.empty()
                   && prec(s[i]) <= prec(st.top())) {
                result += st.top();
                st.pop();
            }
            st.push(c);
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
    int t;
    cin>>t;
    while(t--){
      string s;
      cin>>s;
      convert(s);
    }
    
    return 0;
  }

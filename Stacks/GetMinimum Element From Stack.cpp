#include <bits/stdc++.h>
using namespace std;
void getMin(stack<int> s)
{
    stack<int> s2 = s;
    int min=s2.top();
    while(!s2.empty()){
        if(s2.top()<min){
            min=s2.top();
        }
        s2.pop();
    }
    cout<<min<<endl;
}
int main()
{
    long long n;
    cin >> n;
    stack<int> s;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        if (s.empty() && (a == 2 || a == 3 || a == 4))
        {
            cout << -1 << endl;
        }
        else if (a == 1)
        {
            int b;
            cin >> b;
            s.push(b);
        }
        else if (a == 2)
        {
            s.pop();
        }
        else if (a == 3)
        {
            cout << s.top() << endl;
        }
        else if (a == 4)
        {
             getMin(s);
        }
    }

    return 0;
}

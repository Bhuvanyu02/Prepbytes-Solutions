#include <bits/stdc++.h>
using namespace std;
  
  int main()
  {
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      queue<long long>q;
      queue<long long>q2;
      for(int i=0;i<n;i++){
        int a;
        cin>>a;
        q.push(a);
      }
      for(int i=0;i<n;i++){
        for(int j=0;j<q.size()-1;j++){
          int b=q.front();
          q.pop();
          q.push(b);
        }
        q2.push(q.front());
        q.pop();
      }
      while(!q2.empty()){
        int c=q2.front();
        cout<<c<<" ";
        q2.pop();
      }
      cout<<endl;
    }
    
    return 0;
  }

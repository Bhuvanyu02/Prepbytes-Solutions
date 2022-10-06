#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
      int t;
      cin>>t;
      while(t--){
        int n;
        cin>>n;
        queue<int>q;
        for(int i=1;i<=n;i++){
          q.push(i);
        }
        int ans=-1;
        while(!q.empty()){
          for(int i=0;i<n;i++){
            int a=q.front();
            q.pop();
            q.push(a);
            q.pop();
            ans=a;
          }
        }
        cout<<ans<<endl;
      }
    return 0;
  }

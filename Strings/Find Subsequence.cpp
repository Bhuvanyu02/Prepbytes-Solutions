#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int t;
    cin>>t;
    while(t--){
      string s;
      cin>>s;
      string t;
      cin>>t;
      long long ls=s.length();
      long long lt=t.length();
      long long ans=0;
      int j=0;
      for(int i=0;i<ls;i++){
        if(s[i]==t[j]){
          ans++;
          j++;
        }
      }
      if(ans==lt){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
    }
    
    return 0;
  }

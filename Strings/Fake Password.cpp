#include <bits/stdc++.h>
using namespace std;
  int main()
  {
    int t;
    cin>>t;
    while(t--){
      string o,f;
      cin>>o>>f;
      int ol=o.length();
      int fl=f.length();
      if((f[0]==o[ol-2]&&f[1]==o[ol-1])||(o[0]==f[fl-2]&&o[1]==f[fl-1])){
        cout<<"Yes"<<endl;
      }
      else{
        cout<<"No"<<endl;
      }
    }
    
    return 0;
  }

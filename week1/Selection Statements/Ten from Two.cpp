#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      int count=0;
      if(n%10==0){
        count=0;
      }
      else if (n%5==0){
        n*=2;
        count++;
      }
      else{
        count=-1;
      }
      cout<<count<<endl;
    }
    return 0;
  }

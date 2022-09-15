#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      int count=0;
      while(n>0){
        if(n%10==5){
          count++;
        }
        n/=10;
      }
      cout<<count<<endl;
    }
    return 0;
  }

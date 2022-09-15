#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int n;
    cin>>n;
    int c=0;
    while(n>0){
      int r=n%10;
      c+=r;
      n=n/10;
    }
    cout<<c<<endl; 
    return 0;
  }

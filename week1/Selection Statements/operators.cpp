#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int a,b;
    cin>>a>>b;
    if(a>b){
      cout<<a<<" is greater than "<<b;
    }
    else if(a==b){
      cout<<a<<" is equal to "<<b;
    }
    else{
      cout<<a<<" is smaller than "<<b;
    }
    
    return 0;
  }

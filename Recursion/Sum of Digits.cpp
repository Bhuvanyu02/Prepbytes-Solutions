#include <bits/stdc++.h>
  using namespace std;
  int sum;
  void func(int n){
    if(n<=0){
      cout<<sum<<endl;
    }
    else{
      sum+=n%10;
      func(n/10);
    }
  }
  int main()
  {
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      sum=0;
    func(n);
    }
    
    return 0;
  }

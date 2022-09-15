#include <bits/stdc++.h>
using namespace std;
int a=0;
int b=1;
int c;
int fib(int n){
 if(n<=1){
   return n;
 }
 else{
    return fib(n-1)+fib(n-2);
 }
}
  int main()
  {
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
    cout<<fib(n)<<endl;
    }
    
    return 0;
  }

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      while(n>=10){
        n=n/10;
      }
      cout<<n<<endl;
    }
    
    return 0;
}

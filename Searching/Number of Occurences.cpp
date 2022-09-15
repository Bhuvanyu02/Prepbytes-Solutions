#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long c=0;
        char arr[n];
        for(int i=0;i<n;i++){
          cin>>arr[i];
          if(arr[i]=='x'){
            c++;
          }
        }
        cout<<c<<endl;
    }
    
    return 0;
  }

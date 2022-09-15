#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int t;
    cin>>t;
    while(t--){
      float q;
      float price;
      cin>>q>>price;
      price*=q;
      if(q>100.0){
        price=price-(0.2*price);
        
      }
     printf("%.1f",price);
     cout<<endl;
    }
    
    return 0;
  }

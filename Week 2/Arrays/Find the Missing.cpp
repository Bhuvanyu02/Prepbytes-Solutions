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
         
         int arr[n-1];
         
         
        long long sumN = ( ( (long long)n*(n+1) )/ 2 );
        
        
         long long sum=0;
         
        for(int i=0;i<n-1;i++){
           cin>>arr[i];
           
           sum+=arr[i]; 
         } 
        
         
         
        cout<<sumN -sum<<endl;
         
         
         
    }
   
    
    return 0;
  }

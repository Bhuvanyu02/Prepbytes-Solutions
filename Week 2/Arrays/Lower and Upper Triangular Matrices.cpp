#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    int arr2[m][n];
    for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
        cin>>arr[i][j];
        arr2[i][j]=arr[i][j];
        
      }
    }
    for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
        if(j>i){
          arr[i][j]=0;
        }
      }
    }
    for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
      }
      cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
        if(j<i){
          arr2[i][j]=0;
        }
      }
    }
    for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
        cout<<arr2[i][j]<<" ";
      }
      cout<<endl;
    }
    
    return 0;
  }

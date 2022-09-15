#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int m,n;
    cin>>m>>n;
    int arr[m][m];
    int arr2[n][n];
    for(int i=0;i<m;i++){
      for(int j=0;j<m;j++){
        cin>>arr[i][j];
      }
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        cin>>arr2[i][j];
      }
    }
    int arr3[m][n];
    for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
        arr3[i][j]=arr[i][j]+arr2[i][j];
      }
    }
    for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
        cout<<arr3[i][j]<<" ";
      }
      cout<<endl;
    }
    int arr4[m][n];
    for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
        int k=0;
        arr4[i][j]=0;
        while(k<n){
          arr4[i][j]+=(arr[i][k]*arr2[k][j]);
          k++;
        }
      }
    }
    for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
        cout<<arr4[i][j]<<" ";
      }
      cout<<endl;
    }
    return 0;
  }

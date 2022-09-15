#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int n;
    cin>>n;
    int arr[n];
    int i1=0;
    int i2=0;
    int arr1[n];
    int arr2[n];
    
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    for(int i=0;i<n;i++){
      if(arr[i]%2==0){
        arr1[i1]=arr[i];
        i1++;
      }
      else
      {arr2[i2]=arr[i];
        i2++;
      }
    }
    for(int i=0;i<i1;i++){
      cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<i2;i++){
      cout<<arr2[i]<<" ";
    }
    cout<<endl;
    return 0;
  }

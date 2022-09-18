#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    sort(arr,arr+n);
    int k;
    cin>>k;
    map<int,int>m;
    for(int i=0;i<n;i++){
      m[arr[i]]++;
    }
    map<int,int>::iterator i;
    bool chec=false;
    for(i=m.begin();i!=m.end();i++){
      if(i->second==k && chec==false){
        chec=true;
        cout<<i->first<<endl;
      }
    }
    return 0;
  }

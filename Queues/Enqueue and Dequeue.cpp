#include <bits/stdc++.h>
using namespace std;
queue<int>q;
void display(){
  queue<int>q1=q;
  while(!q1.empty()){
    cout<<q1.front()<<" ";
    q1.pop();
  }  
  cout<<endl;
}
  int main()
  {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    for(int i=0;i<n;i++){
      q.push(arr[i]);
      display();
    }
    for(int i=0;i<n-1;i++){
      q.pop();
      display();
    }
    
    
    return 0;
  }

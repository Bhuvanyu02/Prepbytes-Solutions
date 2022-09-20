#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
sort(arr,arr+n);
int q;
cin>>q;
while(q--){
int a;
cin>>a;
int c=0;
if(a<arr[0]){
    c=0;
}
else if(a>arr[n-1]){
    c=n;
}
else{
for(int i=0;i<n;i++){
if(arr[i]<=a){
c++;
}
else{
    break;
}
}
}
cout<<c<<endl;
}
}

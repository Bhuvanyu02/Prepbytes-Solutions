#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>arr[i][j];

    int p=0,q=0;
    while(p<n && q<m){
        for(int i=q;i<m;i++)
            cout<<arr[p][i]<<" ";
        p++;
        for(int i=p;i<n;i++)
            cout<<arr[i][m-1]<<" ";
        m--;
        if(p<n){
            for(int i=m-1;i>=q;i--){
                cout<<arr[n-1][i]<<" ";
            }
            n--;
        }
        if(q<m){
            for(int i=n-1;i>=p;i--){
                cout<<arr[i][q]<<" ";
            }
            q++;
        }
    }
    cout<<endl;
    }
    return 0;
}

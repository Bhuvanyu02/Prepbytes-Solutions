#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
   int t;
   cin>>t;
   while(t--){
     string s;
     cin>>s;
     int l=s.length();
     bool check=false;
     map<char,int>m;
     
     for(int i=0;i<l;i++){
       m[s[i]]++;
     }
      map<char,int> :: iterator it;
      
      for(it=m.begin() ; it!=m.end(); it++){
          if(it->second > 1){
            cout<<it->first<<"="<<it->second<<" ";
            
            check = true;
          }
      }
     if(check==false){
       cout<<-1;
     }
     cout<<endl;
     
   }
    return 0;
}

#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int t;
    cin>>t;
    while(t--){
      string s;
      cin>>s;
      bool check=false;
      int l=s.length();
      for(int i=0;i<l;i++){
       if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='n'){
          continue;
        }
       else{
            if(s[i+1]=='a'||s[i+1]=='e'||s[i+1]=='i'||s[i+1]=='o'||s[i+1]=='u'){
              continue;
            }        
            else{
              check=true;
              
            }
        }
        
      }
      if(check==false){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
    }
    
    return 0;
  }

#include<bits/stdc++.h>

using namespace std;


int main() {

   stack<int> st1, st2;

   int n;

   int a[n];

   cin>>n;

   for (int i = 0; i < n; i++){

     cin>>a[i];

   }

   for (int i = 0; i < n; i++){

     st1.push(a[i]);

   }

   for (int i = n - 1; i > -1; i--){

     st2.push(a[i]);

   }

   

   while (!st1.empty() && !st2.empty()){

     if (st1.top() > st2.top()){

       cout<<2<<" ";

       st2.pop();

     }

     else if (st1.top() < st2.top()){

       cout<<1<<" ";

       st1.pop();

     }

     else{

       cout<<0<<" ";

       st1.pop();

       st2.pop();

     }

   }

   

   return 0;

}

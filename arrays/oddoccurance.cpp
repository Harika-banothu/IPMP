#include<bits/stdc++.h>
using namespace std; 
int main()
{
  int n;
  int arr[n];
   for(int i=0;i<n;i++)
   cin>>arr[i];
   
   int val;
   for(int i=1;i<n;i++)
   {
    val=val^arr[i];
   }
   cout<<val<<endl;
   return 0;
}
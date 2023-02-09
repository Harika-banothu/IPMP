#include<bits/stdc++.h>
using namespace std;

int find_a_b_c(int n)
{
    for(int a=1;a<n;a++)
    {
        for(int b=a+1;b<n;b++)
        {
          int x=a*a+b*b;
           int c=sqrt(x);
           if(c*c==x && c<=n)
           {
               cout<<a<<" "<<b<<" "<<c<<endl;
           }
        }
    }
}
int main()
{
  int n=10;
  find_a_b_c(n);
  return 0;
}
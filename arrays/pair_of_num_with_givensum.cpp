#include <iostream>
using namespace std;
void pair_of_num(int arr[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
         if(arr[i]+arr[j]==x)
            cout<<"pair is "<<"("<<arr[i]<<" "<<arr[j]<<")"<<endl;
        }
    }
}
int main()
{
    int arr[]={3,4,2,7,8,1,9,5};
    int x=6;
    int n=sizeof(arr)/sizeof(arr[0]);
    pair_of_num(arr,n,x);
    return 0;
}
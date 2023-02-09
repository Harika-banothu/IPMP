#include<iostream>
using namespace std;

void triplets(int arr[],int n,int x)
{
    for(int i=0;i<n-2;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            for(int k=0;k<n;k++)
            {
                if(arr[i]+arr[j]+arr[k]==x)
                 cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<endl;
            }
        }
    }
}
int main()
{
    int arr[]={2,4,7,9,10,12,26};
    int x;
    cout<<"enter number:";
    cin>>x;
    int n=sizeof(arr)/sizeof(arr[0]);
       triplets(arr,n,x);
       return 0;
}
#include <iostream>
using namespace std;
void repeating_elem(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
             cout<<arr[i]<<endl;
            }
        }
    }
}
int main()
{
    int arr[]={1,1,2,3,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    repeating_elem(arr,n);
    return 0;
}
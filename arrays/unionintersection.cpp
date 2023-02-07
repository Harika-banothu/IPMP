#include<iostream>
using namespace std;
void merge(int arr1[],int arr2[],int n1,int n2)
{
    int i=0,j=0;
    while(i<n1 && j<n2)
    {
     if(arr1[i]<arr2[j])
     { 
      cout<<arr1[i]<<endl;
      i++;
     }
     else if(arr1[i]>arr2[j])
     {
        cout<<arr2[j]<<endl;
        j++;
     }  
     else{
        cout<<arr1[i]<<endl;
        i++;
        j++;
     }
    }
    while(i<n1)
     cout<<arr1[i++]<<endl;
    while(j<n2)
     cout<<arr2[j++]<<endl;
}
void intersection(int arr1[],int arr2[],int n1,int n2)
{
  int i=0,j=0;
  while(i<n1 && j<n2){
    if(arr1[i]<arr2[j])
    { 
      i++;
    }
    else if(arr1[i]>arr2[j])
    {
        j++;
    }  
    else{
        cout<<arr1[i]<<endl;
        i++;
        j++;
    } 
  } 
}
int main()
{
    int arr1[]={2,7,8,9,10,11};
    int arr2[]={3,4,6,8,10,12};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    cout<<"Union:"<<endl;
    merge(arr1,arr2,n1,n2);
    cout<<"Intersection"<<endl;
    intersection(arr1,arr2,n1,n2);
    return 0;
}
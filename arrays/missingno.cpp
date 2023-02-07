#include <bits/stdc++.h>
using namespace std;
 

int MissingNumber(int a[], int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
      sum=sum+a[i];
    }
    int total = (n+1) * (n +2)/ 2;
    int missingNumber=total-sum;
        
    return missingNumber;
}
 

int main()
{
    int arr[] = { 1, 2, 4, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = MissingNumber(arr, n);
    cout << ans;
}

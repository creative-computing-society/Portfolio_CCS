//  if we dont include it -> remains as it is    &      is we include -> subtract from sum variable

#include<iostream>
using namespace std;

int count_subset(int arr[],int n,int sum)
{
    if(n==0)
     return(sum==0)? 1:0;
    
    return count_subset(arr,n-1,sum) + count_subset(arr,n-1,sum-arr[n-1]);
}

int main()
{
    int size,sum;
    cin>>size>>sum;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    cout<<count_subset(arr,size,sum);
    
    return 0;
}
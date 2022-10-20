// n persons in a circle, we need to kill every kth person and give output who is surviving.
//  +k -> as position changed after killing  &  %n -> we need to count from 0 to n
#include<iostream>
using namespace std;

int joshp(int n,int k) 
{
    if(n==1)
     return 0;
    else
     return (joshp(n-1,k)+k)%n;
}

int main()
{
    int n,k;
    cin>>n>>k;
    cout<<joshp(n,k);
    return 0;
}
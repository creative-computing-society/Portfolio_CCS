#include<iostream>
using namespace std;

int sum(int n)
{
    if(n==0)
     return 0;
   else
    return(sum(n/10) + (n%10));
}
// n%10 -> to go to last digit   n/10 -> to remove the digit

// int sum(int n)
// {
//     int res=0;
//     while(n>=0)
//      {
//         res=res+n%10;
//         n=n/10;
//      }
//      return res;
// }
int main()
{
    int n;
    cin>>n;
    cout<<sum(n);
    return 0;
}
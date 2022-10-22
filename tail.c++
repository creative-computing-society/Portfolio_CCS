// last thing in recursive function is recursive func call nothing else is called tail recursion -> its func execution is faster

#include<iostream>
using namespace std;

int fact(int n,int k) 
{
    if(n==0 || n==1)
     return k;

     return(n-1,k*n);
}
// factorial function


int main()
{
    cout<<fact(3,1);
    return 0;
}

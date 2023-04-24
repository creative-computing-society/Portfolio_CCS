#include<iostream>
#include<queue>
using namespace std;

void print(priority_queue<int,vector<int>,greater<int>> pq)
{
    while(pq.empty()==false)
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
}

int purchase(priority_queue<int,vector<int>,greater<int>> pq,int sum)
{
    int res=0;
   while(sum>=0 && pq.empty()==false && pq.top()<=sum)
   {
    
    sum=sum-pq.top();
    pq.pop();

    res++;

   }

   return res;
}

int main()
{
    int arr[]={1,12,4,5,111,200};
    priority_queue<int,vector<int>,greater<int>> pq{arr,arr+5};
    print(pq);
    cout<<endl;
    int res=purchase(pq,10);
    cout<<res;
    return 0;



}
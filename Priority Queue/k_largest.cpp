#include<iostream>
#include<queue>
using namespace std;

void print(priority_queue<int> pq)
{
    while(pq.empty()==false)
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
}

void kLargest(priority_queue<int> pq,int k)
{
    cout<<endl<<"K largest elemnets are:";
    for(int i=0;i<k;i++)
    {
        cout<<endl<<pq.top()<<" ";
        pq.pop();
    }
}

int main()
{
    int arr[]={5,15,10,20,8,25,18};
    priority_queue<int> pq{arr,arr+7};
    print(pq);
    kLargest(pq,3);
    return 0;



}
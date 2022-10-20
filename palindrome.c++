#include<iostream>
#include<string>
using namespace std;

bool palind(string str,int start,int end)
{
    // if(str.length()==0 || str.length()==1)
    // return true;

    if(start>=end)
     return true;

     return (str[start]==str[end]) && 
     palind(str,start+1,end-1);

}
int main()
{
    int start = 0;
    string str;
    int end = str.length();
    cin>>str;
    cout<<palind(str,start,end-1);
    return 0;
}
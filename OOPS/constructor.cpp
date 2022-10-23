#include<iostream>

using namespace std;

class car{
 private:
 string Name;
 int Model;
 string Owner;
 public:
 car(string name,string owner,int model)
 {
    Name=name;
    Model=model;
    Owner=owner;

 }

 void print()
{
     cout<<"Brand:"<<Name<<endl;
    cout<<"Model:"<<Model<<endl;
    cout<<"Owner:"<<Owner<<endl;
    cout<<endl;

}






};



int main(){
    car c1("BMW","Zaildar",2);
    car c2("AUDI","Zaildar",4);


    c1.print();
    c2.print();
 

    // cout<<"Brand:"<<c1.Name<<endl;
    // cout<<"Model:"<<c1.Model<<endl;
    // cout<<"Owner:"<<c1.Owner<<endl;


    // cout<<endl;
    // cout<<"Brand:"<<c2.Name<<endl;
    // cout<<"Model:"<<c2.Model<<endl;
    // cout<<"Owner:"<<c2.Owner<<endl;
}
 

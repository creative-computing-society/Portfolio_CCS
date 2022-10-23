#include<iostream>
using namespace std;

class car{
 private:
 string Name;
 int Model;
 protected:
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

void inc(){
    Model++;

}
void change(string new_name){
    Owner=new_name;
}




};

class RacingChannel:public car{
	public:
    RacingChannel(string name,string owner,int model):car(name,owner,model){

    }

};


int main(){
    car c1("BMW","Zaildar",2);
    car c2("AUDI","Zaildar",4);

    c1.inc();
    c2.inc();
    c1.print();
    c2.print();
    c1.change("puneet");
    c1.print();

    RacingChannel rc1("Lambo","Zaildar",5);
    rc1.print();
    rc1.inc();
    rc1.print();





    // cout<<"Brand:"<<c1.Name<<endl;
    // cout<<"Model:"<<c1.Model<<endl;
    // cout<<"Owner:"<<c1.Owner<<endl;


    // cout<<endl;
    // cout<<"Brand:"<<c2.Name<<endl;
    // cout<<"Model:"<<c2.Model<<endl;
    // cout<<"Owner:"<<c2.Owner<<endl;
}

#include<iostream>
using namespace std;
class student
{
    protected:
    int roll_number;
    public:
    void set_roll_number(int n)
    {
        roll_number=n;
    }
    void print_roll_number()
    {
        cout<<"Your roll number = "<<roll_number<<endl;
    }
};
class test:virtual public student
{
    protected:
    float maths;
    float physics;
    public:
    void set_marks(float a,float b)
    {
        maths=a;
        physics=b;
    }
    void print_marks()
    {
        cout<<"Math marks = "<<maths<<endl;
        cout<<"Physics marks = "<<physics<<endl;
    }
};
class sports:virtual public student 
{
    // virtual-> ik baar dena hai niche member function/data member
    protected:
    float score;
    public:
    void set_score(float n)
    {
        score=n;
    }
    void print_score()
    {
        cout<<"Your score = "<<score<<endl;
    }
};
class result:public test,public sports
{
    float total;
    public:
    void print_total()
    {
        total=maths+physics+score;
        print_roll_number();
        print_marks();
        print_score();
        cout<<"total = "<<total<<endl;
    }
};
int main(){
    result r;
    r.set_roll_number(437628747);
    r.set_marks(78.8,99.7);
    r.set_score(8.8);

    r.print_total();

    return 0;
}
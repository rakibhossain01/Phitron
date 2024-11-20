#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int roll;
    int cls;
    double gpa;

    // Student(int r,int c,double g){
    //     roll = r;
    //     cls = c;
    //     gpa = g;
    // }
};

int main(){
    // int r,c;
    // double g;
    // cin>>r>>c>>g;
    // Student rahim(r,c,g);
    Student rahim;
    cin>>rahim.roll>>rahim.cls>>rahim.gpa;

    //Student karim(44,6,3.91);

    cout<<rahim.roll<<" "<<rahim.cls<<" "<<rahim.gpa<<endl;
    //cout<<karim.roll<<" "<<karim.cls<<" "<<karim.gpa<<endl;
}
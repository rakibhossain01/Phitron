#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    int id;
    string name;
    char section;
    int total_marks;

    Student(int i,string nam,char sec,int tm) {
        id=i;
        name=nam;
        section=sec;
        total_marks=tm;
    }
};

int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b;
        char c;
        string st;

        cin>>a>>st>>c>>b;

        Student r(a,st,c,b);
        
        int d,e;
        char f;
        string stt;

        cin>>d>>stt>>f>>e;

        Student k(d,stt,f,e);

        int g,h;
        char i;
        string sttt;

        cin>>g>>sttt>>i>>h;

        Student l(g,sttt,i,h);

        if (b>=e && b>=h) {
            cout<<r.id<<" "<<r.name<<" "<<r.section<<" "<<r.total_marks<<endl;
        }
        else if (e>=b && e>=h) {
            cout<<k.id<<" "<<k.name<<" "<<k.section<<" "<<k.total_marks<<endl;
        }
        else if (h>=e && h>=b) {
            cout<<l.id<<" "<<l.name<<" "<<l.section<<" "<<l.total_marks<<endl;
        }
    }

    return 0;
}

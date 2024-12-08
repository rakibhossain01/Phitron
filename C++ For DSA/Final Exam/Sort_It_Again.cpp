#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};

bool cmp(Student l,Student r) {
    if (l.eng_marks != r.eng_marks) {
        return l.eng_marks > r.eng_marks;
    }
    if (l.math_marks != r.math_marks) {
        return l.math_marks > r.math_marks;
    }
    return l.id < r.id;
}

int main() {
    int n;
    cin>>n;

    Student a[1000]; 

    for (int i = 0; i < n; i++) {
        cin>>a[i].nm>>a[i].cls>>a[i].s>>a[i].id>>a[i].math_marks>>a[i].eng_marks;
    }

    sort(a,a+n,cmp);

    for (int i = 0; i < n; i++) {
        cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<" "<<a[i].math_marks<<" "<<a[i].eng_marks<<endl;
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
    int day;
    cin>>day;

    switch (day)
    {
    case 1:
        cout<<"Satarday\n";
        break;
    case 2:
        cout<<"Sunday\n";
        break;
    case 3:
        cout<<"Monday\n";
        break;
    case 4:
        cout<<"Tuesday\n";
        break;
    case 5:
        cout<<"Wednesday\n";
        break;
    case 6:
        cout<<"Thursday\n";
        break;
    case 7:
        cout<<"Friday\n";
        break;
    default :
        cout<<"Not day number not correct\n";
        break;
    }

    char c;
    cin>>c;

    switch (c)
    {
    case 'a':
        cout<<"Vowel\n";
        break;
    case 'e':
        cout<<"Vowel\n";
        break;
    case 'i':
        cout<<"Vowel\n";
        break;
    case 'o':
        cout<<"Vowel\n";
        break;
    case 'u':
        cout<<"Vowel\n";
        break;
    
    
    default:
        cout<<"Consonent\n";
        break;
    }
}
#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    string name;
    int age;
    int marks;
};
    bool cmp(student a,student b) // main kaj eita..
    {
        if(a.marks>b.marks) return true; //ami ki cassi seita onujaiyi condition
        else return false;
    }
int main()
{
    student ar[3];
    for(int i=0;i<3;i++)
    {
        getline(cin,ar[i].name);
        cin>>ar[i].age>>ar[i].marks;
        cin.ignore();        
    }
    //sort function
    sort(ar,ar+3,cmp);
    for(int i=0;i<3;i++)
    {
        cout<<ar[i].name<<" "<<ar[i].marks<<endl;
    }          
    return 0;   
} 

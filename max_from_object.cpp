#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    string name;
    int age;
    int marks;
};
int main()
{
    student ar[3];
    for(int i=0;i<3;i++)
    {
        getline(cin,ar[i].name);
        cin>>ar[i].age>>ar[i].marks;
        cin.ignore();  //enter er por space remove kore      
    }
         //maximum er jonno 
    student  mx;
    mx.marks=INT_MIN;
    for(int i=0;i<3;i++)
    {
        if(ar[i].marks>mx.marks)
        {
           mx= ar[i]; //mx ke ar[i] er man ta diye di
        }
       
    }
     cout<<mx.name<<" "<<mx.marks<<endl;
     
                     //minimum er jonno
    student  mn;
    mn.marks=INT_MAX;  //min er jonno max use kori
    for(int i=0;i<3;i++)
    {
        if(ar[i].marks<mn.marks)
        {
           mn= ar[i];
        }
       
    }
    cout<<mn.name<<" "<<mn.marks<<endl;
    return 0;   
} 

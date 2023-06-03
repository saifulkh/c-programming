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
        cin.ignore();        
    }
    for(int i=0;i<3;i++)
    {
        cout<<ar[i].name<<" "<<ar[i].age<<" "<<
        ar[i].marks<<endl;
    }
    
    return 0;   
} 

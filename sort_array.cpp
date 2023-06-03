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

            //1st part:accending order

    for(int i=0;i<2;i++)
    {
        for(int j=i+1;j<3;j++)
        {
            if(ar[i].marks > ar[j].marks)  //chuto thke boro sajanu
            {
                swap(ar[i],ar[j]);
            }
        }        
    }
    for(int j=0;j<3;j++)
    {
        cout<<ar[j].name <<" "<<ar[j].marks<<endl;
    }
     
            //2ND PART:decending part

     for(int i=0;i<2;i++)
    {
        for(int j=i+1;j<3;j++)
        {
            if(ar[i].marks < ar[j].marks)  //boro  thke chuto sajanu
            {
                swap(ar[i],ar[j]);
            }
        }        
    }
    for(int j=0;j<3;j++)
    {
        cout<<ar[j].name <<" "<<ar[j].marks<<endl;
    }        
       
    
    return 0;   
} 

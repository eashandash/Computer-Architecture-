#include <iostream>

using namespace std;
string fu[5][9];
string inst1[4];
string inst2[4];
int flag1,flag2,flag3;
/*o-int
1,2-mul
3-add
4-div*/

int checkoperand1()
{
    cout<<"\nfor instruction 1 \n";
    flag1=0;
    flag2=1;
    flag3=1;

    cout<<"\n";
    cout<<inst1[2]<<"availability is "<<flag2<<" \n";
    cout<<inst1[3]<<"availability is "<<flag3<<" \n";
    cout<<inst1[1]<<"availability is "<<flag1<<" \n";



}

int main()
{
    cout<<"hi";
    cout<<"\nenter the instruction 1\n";
    for(int i=0;i<4;i++)
    {
        cin>>inst1[i];
    }
    cout<<"\nenter the instruction 2\n";
    for(int i=0;i<4;i++)
    {
        cin>>inst2[i];
    }

    cout<<"\nthe entered instruction 1\n";
     for(int i=0;i<4;i++)
    {
        cout<<" "<<inst1[i];
    }
    cout<<"\nthe entered instruction 2\n";
     for(int i=0;i<4;i++)
    {
        cout<<" "<<inst2[i];
    }

//for first iteration
    checkoperand1();






































    return 0;
}

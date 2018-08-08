#include <iostream>

using namespace std;

int main()
{
    int cur_state,RW;
    int copies;
    cout << "\nWelcome to MESI protocol" << endl;
    cout<<"\nthe MESI states are as follows\n";
    cout<<"1 : Invalid\n2 : Exclusive\n3 : Share\n4 : Modified\n";
    cout<<"\nMode \n1: MESI transistions on remote request(Dual Core)\n2 : MESI transistions On local request (Single Core)\n";
    

    cout<<"\n Enter current state \n";
    cin>>cur_state;
    if(cur_state==1)
        cout<<"\ncurrent state is Invalid";
    else if(cur_state==2)
        cout<<"\ncurrent state is Exclusive";
    else if(cur_state==3)
        cout<<"\ncurrent state is Share";
    else if(cur_state==4)
        cout<<"\ncurrent state is Modified";
    else
        cout<<"\nUndefined state";


    

      cout<<"\nEnter read/write\n1 : read\n2 : Write\n";
      cin>>RW;


      int cur_state1=cur_state;


    
     

     switch(cur_state)
     {
         case 1 : if(RW==1||RW==2)
                    {
                        cur_state=1;
                    }
                    break;
        case 2 :  if(RW==1)
                    {
                       cur_state=3;
                    }
                    else if(RW==2)
                    {
                       cur_state=1;
                    }
                    break;

        case 3 :  if(RW==1)
                    {
                       cur_state=3;
                    }
                    else if(RW==2)
                    {
                       cur_state=1;
                    }
                    break;

         case 4 :  if(RW==1)
                    {
                       cur_state=3;
                    }
                    else if(RW==2)
                    {
                       cur_state=1;
                    }
                    break;

     }
     
     



if(cur_state==1)
        cout<<"\nFinal state is Invalid\n";
    else if(cur_state==2)
        cout<<"\nFinal state is Exclusive\n";
    else if(cur_state==3)
        cout<<"\nFinal state is Share\n";
    else if(cur_state==4)
        cout<<"\nFinal state is Modified\n";
    else
        cout<<"\nUndefined state\n";



    cout<<"\n\n|| "<<cur_state1<<" || ------ "<<RW<<"----->>----->> || "<<cur_state<<" ||\n";



    return 0;
}

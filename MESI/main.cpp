#include <iostream>

using namespace std;

int main()
{
    int cur_state,RW,mode;
    int copies;
    cout << "\nWelcome to MESI protocol" << endl;
    cout<<"\nthe MESI states are as follows\n";
    cout<<"1 : Invalid\n2 : Exclusive\n3 : Share\n4 : Modified\n";
    cout<<"\nMode \n1: MESI transistions on remote request(Dual Core)\n2 : MESI transistions On local request (Single Core)\n";
    int a=0;


    do
    {

    cout<<"enter mode\n";
    cin>>mode;

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


    if(mode==1)
        cout<<"\nRemote request\n";
    else if(mode==2)
        cout<<"\nLocal request\n";

      cout<<"\nEnter read/write\n1 : read\n2 : Write\n";
      cin>>RW;


      int cur_state1=cur_state;


     //Remote  request
     if(mode==1)
     {

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
     }
     else if(mode==2)
     {


         switch(cur_state)
     {
         case 1 : cout<<"\n1 : copies exist\n2 : No copies exist\n";
                    cin>>copies;
                    if(RW==1)
                    {
                        if(copies==1)
                       cur_state=3;

                       else if(copies==2)
                            cur_state=2;
                    }
                    else if(RW==2)
                    {
                       cur_state=4;
                    }
                    break;

        case 2 :  if(RW==1)
                    {
                       cur_state=2;
                    }
                    else if(RW==2)
                    {
                       cur_state=4;
                    }
                    break;

        case 3 :  if(RW==1)
                    {
                       cur_state=3;
                    }
                    else if(RW==2)
                    {
                       cur_state=4;
                    }
                    break;

         case 4 :  if(RW==1)
                    {
                       cur_state=4;
                    }
                    else if(RW==2)
                    {
                       cur_state=4;
                    }
                    break;

     }


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

    cout<<"\ndo u want to continue?\n";
     cin>>a;
    }while(a==1);




    return 0;
}

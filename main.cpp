#include <iostream>
#include <list>
using namespace std;
#include "employee.h"
#include "owner.h"
#include "waiter.h"
#include "chefs.h"
int main()
{
    string ownerName;
    string chef1Name;
    string chef1Type;
    string chef2Name;
    string chef2Type;
    string waiter1Name;
    double tip1;
    int year1;
    string waiter2Name;
    double tip2;
    int year2;
    string waiter3Name;
    double tip3;
    int year3;
    double overallRev;
    employee * ptr[6];
    start:
    cout<<"What is the overall revenue of the restaurant for this month?"<<endl;
    /* if statements to prompt user to enter required values to be used in creating the different employees*/
    if(!(cin>>overallRev))//each time, checks if user entered the correct value. error if didn't.
     {

            cerr<<"\n***Error-You did not enter a valid entry***\n\n";
            cin.clear();
            cin.ignore(10000, '\n');
            goto start;
     }
     for(int i=0; i<6;i++)
     {
         if(i==0)
         {
             cout<<"\nWhat is the name of the owner?"<<endl;
             if(!(cin>>ownerName))
            {
                cerr<<"\n***Error-You did not enter a valid entry***\n\n";
                cin.clear();
                cin.ignore(10000, '\n');
                goto start;
            }
         }
         if(i==1)
         {
             cout<<"\nWhat is the name of the first chef?"<<endl;
              if(!(cin>>chef1Name))
            {
                cerr<<"\n***Error-You did not enter a valid entry***\n\n";
                cin.clear();
                cin.ignore(10000, '\n');
                goto start;
            }
            cout<<"\nWhat is this chefs expertise?"<<endl;
            if(!(cin>>chef1Type))
            {
                cerr<<"\n***Error-You did not enter a valid entry***\n\n";
                cin.clear();
                cin.ignore(10000, '\n');
                goto start;
            }
         }
         if(i==2)
         {
             cout<<"\nWhat is the name of the second chef?"<<endl;
              if(!(cin>>chef2Name))
            {
                cerr<<"\n***Error-You did not enter a valid entry***\n\n";
                cin.clear();
                cin.ignore(10000, '\n');
                goto start;
            }
            cout<<"\nWhat is this chefs expertise?"<<endl;
            if(!(cin>>chef2Type))
            {
                cerr<<"\n***Error-You did not enter a valid entry***\n\n";
                cin.clear();
                cin.ignore(10000, '\n');
                goto start;
            }
         }
         if(i==3)
         {
             cout<<"\nWhat is the name of the first waiter?"<<endl;
              if(!(cin>>waiter1Name))
            {
                cerr<<"\n***Error-You did not enter a valid entry***\n\n";
                cin.clear();
                cin.ignore(10000, '\n');
                goto start;
            }
            cout<<"\nWhat is this waiters tip?"<<endl;
            if(!(cin>>tip1))
            {
                cerr<<"\n***Error-You did not enter a valid entry***\n\n";
                cin.clear();
                cin.ignore(10000, '\n');
                goto start;
            }
            cout<<"\nHow many years has this waiter been with this restaurant?"<<endl;
             if(!(cin>>year1))
            {
                cerr<<"\n***Error-You did not enter a valid entry***\n\n";
                cin.clear();
                cin.ignore(10000, '\n');
                goto start;
            }
         }
         if(i==4)
         {
             cout<<"\nWhat is the name of the second waiter?"<<endl;
              if(!(cin>>waiter2Name))
            {
                cerr<<"\n***Error-You did not enter a valid entry***\n\n";
                cin.clear();
                cin.ignore(10000, '\n');
                goto start;
            }
            cout<<"\nWhat is this waiters tip?"<<endl;
            if(!(cin>>tip2))
            {
                cerr<<"\n***Error-You did not enter a valid entry***\n\n";
                cin.clear();
                cin.ignore(10000, '\n');
                goto start;
            }
            cout<<"\nHow many years has this waiter been with this restaurant?"<<endl;
             if(!(cin>>year2))
            {
                cerr<<"\n***Error-You did not enter a valid entry***\n\n";
                cin.clear();
                cin.ignore(10000, '\n');
                goto start;
            }
         }
         if(i==5)
         {
             cout<<"\nWhat is the name of the third waiter?"<<endl;
              if(!(cin>>waiter3Name))
            {
                cerr<<"\n***Error-You did not enter a valid entry***\n\n";
                cin.clear();
                cin.ignore(10000, '\n');
                goto start;
            }
            cout<<"\nWhat is this waiters tip?"<<endl;
            if(!(cin>>tip3))
            {
                cerr<<"\n***Error-You did not enter a valid entry***\n\n";
                cin.clear();
                cin.ignore(10000, '\n');
                goto start;
            }
            cout<<"\nHow many years has this waiter been with this restaurant?"<<endl;
             if(!(cin>>year3))
            {
                cerr<<"\n***Error-You did not enter a valid entry***\n\n";
                cin.clear();
                cin.ignore(10000, '\n');
                goto start;
            }
         }
     }
     //Create the different employees in ptr and fill in their characteristics
    ptr[0] = new owner(ownerName,1,"O",15000,ptr[0]->Calculate_salary(15000,((.6)*overallRev)),((.6)*overallRev));
    ptr[1] = new chefs(chef1Name,2,"C1",10000,(.2*overallRev),ptr[1]->Calculate_salary(10000,(.2*overallRev)),chef1Type);
    ptr[2] = new chefs(chef2Name,3,"C2",10000,(.2*overallRev),ptr[2]->Calculate_salary(10000,(.2*overallRev)),chef2Type);
    ptr[3] = new waiter(waiter1Name,4,"W1",3000,tip1,ptr[3]->Calculate_salary(3000,tip1),year1);
    ptr[4] = new waiter(waiter2Name,5,"W2",3000,tip2,ptr[4]->Calculate_salary(3000,tip2),year2);
    ptr[5] = new waiter(waiter3Name,6,"W3",3000,tip3,ptr[5]->Calculate_salary(3000,tip3),year3);
    for(int i=0;i<6;i++)
    {
        cout<<"\n"<<endl;
        ptr[i]->display(cout);//for loop to display all employee statistics
    }
    delete[] ptr;//returns memory back
}

#include "employee.h"
#ifndef OWNER_H_INCLUDED
#define OWNER_H_INCLUDED
class owner : public employee
{
    public:
        owner(string name = "", int empID=0, string employeeClass = "", double salary = 0, double sixtyPercProfit = 0, double overallProfit = 0);
        /*----------------------------------------------------------------------
        owner constructor.
        Preconditions:  None.
        Postconditions: myName, myEmoloyeeClass, mySalary initialized in employee constructor.
        mySixtyPercProfit is initialized to 0, myOverallProfit is initialized to 0.

        -----------------------------------------------------------------------*/
         virtual void display(ostream & out) const;
         /*-----------------------------------------------------------------------
        Output function member.
        Precondition:  ostream out is open.
        Postcondition: A text representation of this owner object has been
        output to out.
        -----------------------------------------------------------------------*/
       virtual double Calculate_salary(double salary, double sixtyPercProfit);
        /*-----------------------------------------------------------------------
        salary calculator
        Preconditions:  the salary and added profits
        Postconditions: Gives overall profits which is salary + sixtyPercProfit
        ----------------------------------------------------------------------*/
    private:
        double mySixtyPercProfit;
        double myOverallProfit;
};
//--- Definition of owner's Constructor
inline owner::owner(string name, int empID, string employeeClass, double salary, double overallProfit, double sixtyPercProfit)
: employee(name, empID, employeeClass, salary),
  mySixtyPercProfit(sixtyPercProfit), myOverallProfit(overallProfit)
{}

//--- Definition of owner's display()
inline void owner::display(ostream & out) const
{
  employee::display(out);
  out <<"Sixty Percent of Restaurant Revenue: $" <<mySixtyPercProfit <<"\nOverall Salary(Original Salary + Sixty Percent of Restaurant Revenue): $"<<myOverallProfit<< endl;
}

//---Definition of owner's Calculated_salary()
inline double owner::Calculate_salary(double salary, double sixtyPercProfit)
{
    return employee::Calculate_salary(salary, sixtyPercProfit);
}


#endif // OWNER_H_INCLUDED

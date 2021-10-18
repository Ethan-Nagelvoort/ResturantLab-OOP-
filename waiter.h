#include "employee.h"
#ifndef WAITER_H_INCLUDED
#define WAITER_H_INCLUDED
class waiter : public employee
{
    public:
      waiter(string name = "", int empID=0, string employeeClass = "", double salary = 0, double tip = 0, double overallProfit=0, int yearsOfService = 0);
        /*----------------------------------------------------------------------
        waiter constructor.
        Preconditions:  None.
        Postconditions: myName, myEmoloyeeClass, mySalary initialized in employee constructor.
        myTip is initialized to 0, myOverallProfit is initialized to 0, myYearsOfService is initialized to 0.
        -----------------------------------------------------------------------*/

        virtual void display(ostream & out) const;
         /*-----------------------------------------------------------------------
        Output function member.
        Precondition:  ostream out is open.
        Postcondition: A text representation of this chefs object has been
        output to out.
        -----------------------------------------------------------------------*/

        virtual double Calculate_salary(double salary, double tip);
        /*-----------------------------------------------------------------------
        salary calculator
        Preconditions:  the salary and added profits
        Postconditions: Gives overall profits which is salary + tip
        ----------------------------------------------------------------------*/
    private:
        double myTip;
        double myOverallProfit;
        int myYearsOfService;
};

//--- Definition of owner's Constructor
inline waiter::waiter(string name, int empID, string employeeClass, double salary, double tip, double overallProfit, int yearsOfService)
: employee(name, empID, employeeClass, salary),
  myTip(tip), myOverallProfit(overallProfit), myYearsOfService(yearsOfService)
{}

//--- Definition of owner's display()
inline void waiter::display(ostream & out) const
{
  employee::display(out);
  out << "Tip: $" <<myTip << "\nOverall Salary(Original Salary + Tip): $" <<myOverallProfit<< "\nNumber of Years With Restaurant: " << myYearsOfService << endl;
}

inline double waiter::Calculate_salary(double salary, double tip)
{
    return employee::Calculate_salary(salary, tip);
}

#endif // WAITER_H_INCLUDED

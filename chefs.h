#include "employee.h"
#ifndef CHEFS_H_INCLUDED
#define CHEFS_H_INCLUDED
class chefs : public employee
{
    public:
        chefs(string name = "", int empID=0, string employeeClass = "", double salary = 0, double twentyPercProfit = 0, double overallProfit=0, string type = "");
        /*----------------------------------------------------------------------
        chefs constructor.
        Preconditions:  None.
        Postconditions: myName, myEmpID, myEmoloyeeClass, mySalary initialized in employee constructor.
        myTwentyPercProfit is initialized to 0, myOverallProfit is initialized to 0, myType is initialized to "".
        -----------------------------------------------------------------------*/

        virtual void display(ostream & out) const;
         /*-----------------------------------------------------------------------
        Output function member.
        Precondition:  ostream out is open.
        Postcondition: A text representation of this chefs object has been
        output to out.
        -----------------------------------------------------------------------*/

        virtual double Calculate_salary(double salary, double twentyPercProfit);
        /*-----------------------------------------------------------------------
        salary calculator
        Preconditions:  the salary and added profits
        Postconditions: Gives overall profits which is salary + twentyPercProfit
        ----------------------------------------------------------------------*/
    private:
        double myTwentyPercentProfit;
        double myOverallProfit;
        string myType;
};

//--- Definition of owner's Constructor
inline chefs::chefs(string name, int empID, string employeeClass, double salary, double twentyPercProfit, double overallProfit, string type)
: employee(name, empID, employeeClass, salary),
  myTwentyPercentProfit(twentyPercProfit), myOverallProfit(overallProfit), myType(type)
{}

//--- Definition of owner's display()
inline void chefs::display(ostream & out) const
{
  employee::display(out);
  out << "Twenty Percent of Restaurant Revenue: $"<<myTwentyPercentProfit << "\nOverall Salary(Original Salary + Twenty Percent of Restaurant Revenue): $"<<myOverallProfit<<"\nType: "<< myType << endl;
}

inline double chefs::Calculate_salary(double salary, double twentyPercProfit)
{
    return employee::Calculate_salary(salary, twentyPercProfit);
}


#endif // CHEFS_H_INCLUDED

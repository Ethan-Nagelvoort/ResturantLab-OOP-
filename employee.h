#include <iostream>
#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED

class employee
{
    public:
        employee(string name = "", int empID=0, string employeeClass = " ", double salary = 0);
        /*-----------------------------------------------------------------------
        employee constructor.
        Preconditions:  None.
        Postconditions: set myName to "", set myEmpID to 0, set myEmoloyeeClass to "", and set mySalary to 0
        ----------------------------------------------------------------------*/
        virtual void display (ostream & out) const;
        /*-----------------------------------------------------------------------
        Output function member.
        Precondition:  ostream out is open.
        Postcondition: A text representation of this employee object has
        been output to out.
        ------------------------------------------------------------------------*/
        virtual double Calculate_salary(double salary, double extraProfit);
        /*-----------------------------------------------------------------------
        salary calculator
        Preconditions:  the salary and added profits
        Postconditions: Gives overall profits which is salary + extraProfits
        ----------------------------------------------------------------------*/
    private:
        string myName;
        int myEmpID;
        string myEmployeeClass;
        double mySalary;
};

    //--- Definition of Employee's Constructor
inline employee::employee(string name, int empID, string employeeClass, double salary)
  : myName(name), myEmpID(empID), myEmployeeClass(employeeClass), mySalary(salary)
{ }

//--- Definition of Employee's display()
inline void employee::display(ostream & out) const
{
  out << myName<<"\nEmployee Class: "<< myEmployeeClass << "\nEmployee ID: " << myEmpID <<"\nOriginal Salary: $"<<mySalary << endl;
}

//--- Definition of output operator <<
inline ostream & operator<<(ostream & out, const employee & emp)
{
  emp.display(out);
  return out;
}

inline double employee::Calculate_salary(double salary, double extraProfit)
{
    return (salary + extraProfit);
}

#endif // EMPLOYEE_H_INCLUDED

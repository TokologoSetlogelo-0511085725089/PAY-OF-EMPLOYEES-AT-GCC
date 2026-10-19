#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
using namespace std;

int main(){
    //DECLARING VARIABLES
    int numberOfEmployees;
    int departmentChoice;
    int positionChoice= 0;
    int employeeID;
    double performanceRating;
    double yearsOfService;

    string employeeName;
    string department;
    string position;

    double basicSalary;
    double bonusAmount= 0.0;
    double totalPay;

    //GETTING THE NUMBER OF EMPLOYEES BEFORE ENTERING THE DETAILS OF EACH EMPLOYEE
    cout << "============================== " << endl;
    cout << " GAUTENG CITY COLLEGE " << endl;
    cout << " PAYROLL FOR EMPLOYEES " << endl;
    cout << "============================== " << endl;
    cout << endl;

    // ASKING HOW EMPLOYEES NEED TO PROSSED AND CAPTUREING THE NUMBER
    cout << " Enter the number of employees: ";
    cin >> numberOfEmployees;
    cout << endl;

        while (cin.fail() || numberOfEmployees <= 0)
            {
            cout << " Invalid NUMBER. Enter a valid number, 0 or more: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin  >>numberOfEmployees;
            cout <<endl;
            }


    //PROCESSING EACH EMPLOYEE UISNG A FOR LOOP and MAKING SURE DETAILS A CAPTURE USING A WHILE LOOP
    for (int i = 1; i <= numberOfEmployees; i++)
        {
             bonusAmount = 0.0;

             cout << "============================== " << endl;
             cout << " Employee " << i << " of Employee " << numberOfEmployees << endl;
             cout << "============================== " << endl;
             cout << endl;

                //GET EMPLOYEE DETAILS
                cout << " Enter Employee ID: ";
                cin  >> employeeID;

                //validate employeeID...
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << endl;


                cout << " Enter Employee Name: ";
                getline(cin, employeeName);
                    while (cin.fail() || employeeName.empty())
                    {
                        cout << " Invalid name. Enter EMPLOYEE NAME: ";
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        getline(cin,employeeName);
                        cout <<endl;
                    }

                //DEPARTMENT SELECCTIONS USING A SWITCH
                cout << "============================================================ " << endl;
                cout << "                          DEPARTMENTS                        " << endl;
                cout << "============================================================ " << endl;
                cout <<endl;
                cout << " 1. HR " << endl;
                cout << " 2. Office " << endl;
                cout << " 3. Security " << endl;
                cout << " 4. Cleaning " << endl;
                cout << " 5. Transport " << endl;
                cout << " 6. Sports " << endl;
                cout <<endl;

                cout << " Select your Department (1-6): ";
                cin  >>  departmentChoice;
                cout <<endl;

                while (cin.fail() || departmentChoice < 1 || departmentChoice > 6)
                    {
                        cout << " Invalid choice. Enter 1-6: ";
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cin >> departmentChoice;
                        cout <<endl;
                    }

                    //STILL UNDER DEPARTMENT
                    //WE STILL NEED TO SELECT A POSITION FROM THE SELECTED DEPARMENT OF CHOICE
                    //THERFORE WE USE A SWITCH FOR EACH CASE OF DEPARTMENT OF CHOICE TO GET A CERTAIN POSITION
                    //AND STILL USE A WHILE LOOP TO MAKE SURE DETAILS HAVE BEEN ENTERED AND CAPTURED, NOT INVALID
                    switch (departmentChoice)
                    {
                    case 1:
                        department = "HR";
                            cout << "============================================================ " << endl;
                            cout <<      "------------------- HR POSITIONS -------------------" << endl;
                            cout << "============================================================ " << endl;
                            cout <<endl;
                            cout << " 1. School Master " << endl;
                            cout << " 2. Deputy master " << endl;
                            cout << " 3. Facilitator " << endl;
                            cout << " 4. Moderator " << endl;
                            cout << " 5. Teacher " << endl;
                            cout << " 6. Assistant Teacher" << endl;
                            cout <<endl;

                        cout << " Select a Position you fall under (1-6): ";
                        cin  >> positionChoice;
                        cout <<endl;

                        while (cin.fail() || positionChoice < 1 || positionChoice > 6)
                            {
                                cout << " INVALID CHOICE, ENTER (1-6): ";
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                cin  >> positionChoice;
                                cout <<endl;

                            }

                            switch (positionChoice)
                                {
                                    case 1:
                                        position = "School Master ";
                                        break;
                                    case 2:
                                        position = "Deputy Master ";
                                        break;
                                    case 3:
                                        position = "facilitator ";
                                        break;
                                    case 4:
                                        position = "Moderator ";
                                        break;
                                    case 5:
                                        position = "Teacher ";
                                        break;
                                    case 6:
                                        position = "Assistant Teacher ";
                                        break;
                                }
                            break;

                    case 2:
                        department =" Office";
                            cout << "============================================================ " << endl;
                            cout <<      "----------------- OFFICE POSITIONS ----------------" << endl;
                            cout << "============================================================ " << endl;
                            cout << " 1. Finance " << endl;
                            cout << " 2. Reception " << endl;
                            cout << " 3. IT " << endl;
                            cout << " 4. Student advisor " << endl;
                            cout <<endl;

                        cout << " Select a Position you fall under (1-4): ";
                        cin  >> positionChoice;
                        cout <<endl;

                        while (cin.fail() || positionChoice < 1 || positionChoice > 4)
                            {
                                cout << " INVALID CHOICE, ENTER (1-4): ";
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                cin  >> positionChoice;
                                cout <<endl;

                            }
                            switch (positionChoice)
                                {
                                    case 1:
                                        position = "Finance ";
                                        break;
                                    case 2:
                                        position = "Reception ";
                                        break;
                                    case 3:
                                        position = "IT ";
                                        break;
                                    case 4:
                                        position = "Student Advisor ";
                                        break;
                                }
                            break;

                    case 3:
                        department =" Security";
                            cout << "============================================================ " << endl;
                            cout <<      "--------------- SECURITY POSITIONS ---------------" << endl;
                            cout << "============================================================ " << endl;
                            cout << " 1. Head Of Security " << endl;
                            cout << " 2. Security Guard " << endl;
                            cout << " 3. Patrol Guard " << endl;
                            cout <<endl;

                        cout << " Select a Position you fall under (1-3): ";
                        cin  >> positionChoice;
                        cout <<endl;

                        while (cin.fail() || positionChoice < 1 || positionChoice > 3)
                            {
                                cout << " INVALID CHOICE, ENTER (1-3): ";
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                cin  >> positionChoice;
                                cout << endl;
                            }
                            switch (positionChoice)
                                {
                                    case 1:
                                        position = "Head Of Security ";
                                        break;
                                    case 2:
                                        position = "Security Guard ";
                                        break;
                                    case 3:
                                        position = "Patrol Guard ";
                                        break;
                                }
                            break;

                    case 4:
                        department =" Cleaning";
                            cout << "============================================================ " << endl;
                            cout <<      "---------------- CLEANING POSITIONS ----------------" << endl;
                            cout << "============================================================ " << endl;
                            cout << " 1. Indoor Cleaning " << endl;
                            cout << " 2. Outdoor Cleaning " << endl;
                            cout <<endl;

                        cout << " Select a Position you fall under (1-3): ";
                        cin  >> positionChoice;
                        cout <<endl;

                        while (cin.fail() || positionChoice < 1 || positionChoice > 2)
                            {
                                cout << " INVALID CHOICE, ENTER (1-2): ";
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                cin  >> positionChoice;
                                cout <<endl;
                            }
                            switch (positionChoice)
                                {
                                    case 1:
                                        position = "Indoor Cleaning ";
                                        break;
                                    case 2:
                                        position = "Outdoor Cleaning ";
                                        break;
                                }
                            break;

                    case 5:
                        department =" Transport";
                            cout << "============================================================ " << endl;
                            cout <<      "--------------- TRANSPROT POSITIONS --------------" << endl;
                            cout << "============================================================ " << endl;
                            cout << " 1. Stuff Transport " << endl;
                            cout << " 2. Student Transport " << endl;
                            cout <<endl;

                        cout << " Select a Position you fall under (1-3): ";
                        cin  >> positionChoice;
                        cout <<endl;

                        while (cin.fail() || positionChoice < 1 || positionChoice > 2)
                            {
                                cout << " INVALID CHOICE, ENTER (1-2): ";
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                cin  >> positionChoice;
                                cout <<endl;
                            }
                            switch (positionChoice)
                                {
                                    case 1:
                                        position = "Stuff Transport ";
                                        break;
                                    case 2:
                                        position = "Student Transport ";
                                        break;
                                }
                            break;

                    case 6:
                        department =" Sport";
                            cout << "============================================================ " << endl;
                            cout <<      "--------------- SPORTS POSITIONS ---------------" << endl;
                            cout << "============================================================ " << endl;
                            cout << " 1. Head Coach " << endl;
                            cout << " 2. Assistant Coach " << endl;
                            cout << " 3. Gym Coach " << endl;
                            cout << " 4. PE Coach " << endl;
                            cout <<endl;

                        cout << " Select a Position you fall under (1-4): ";
                        cin  >> positionChoice;
                        cout <<endl;

                        while (cin.fail() || positionChoice < 1 || positionChoice > 4)
                            {
                                cout << " INVALID CHOICE, ENTER (1-4): ";
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                                cin  >> positionChoice;
                                cout <<endl;
                            }
                            switch (positionChoice)
                                {
                                    case 1:
                                        position = " Head Coach ";
                                        break;
                                    case 2:
                                        position = " Assistant Coach ";
                                        break;
                                    case 3:
                                        position = " Gym Coach ";
                                        break;
                                    case 4:
                                        position = " PE Coach ";
                                    break;
                                }
                            break;
                    }

                //ENTERIN EMPLOYEE SLALRY PER MONTH, WITHOUT BONUS
                cout << " Enter your basic monthly salary : R";
                cin >> basicSalary;
                cout <<endl;

                while (cin.fail() || basicSalary < 0)
                    {
                        cout << " Invalid Salary. Enter 0 or more: ";
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cin  >>basicSalary;
                        cout <<endl;
                    }

                //ENTERING EPMLOYEE PERFORMANCE RATING
                cout << " Enter Performance Rating (1-5): ";
                cin  >> performanceRating;
                cout <<endl;

                while (cin.fail() || performanceRating < 1 || performanceRating >5)
                    {
                        cout << " Invalid input. Enter 1-5: ";
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cin  >>performanceRating;
                        cout <<endl;
                    }

                //ENTERING YEARS OF SERVICE
                cout << " Enter number of year in service: " ;
                cin  >> yearsOfService;
                cout <<endl;

                while (cin.fail() || yearsOfService < 0)
                    {
                        cout << " Invalid input. Enter 1-5: ";
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cin  >>yearsOfService;
                        cout <<endl;
                    }

                    //CALCULATING BONUS ACCORDING TO PERFORMANCE RATING
                    if (performanceRating == 5)
                        {
                            bonusAmount = basicSalary * 0.20;
                        }
                    else if (performanceRating == 4)
                        {
                            bonusAmount = basicSalary * 0.15;
                        }
                    else if (performanceRating == 3)
                        {
                            bonusAmount = basicSalary * 0.10;
                        }
                    else if (performanceRating == 2)
                        {
                            bonusAmount = basicSalary * 0.05;
                        }
                    else
                        {
                            bonusAmount = 0;
                        }

                    //CALCULATING BONUS ACCORDING TO YEARS OF SERVICE
                    if (yearsOfService >= 5)
                        {
                            bonusAmount += basicSalary * 0.05;
                        }

                    //CALCULATING BONUS PER DEPARTMENT
                    if (department == "HR")
                        {
                            bonusAmount += basicSalary * 0.03;
                        }
                    else if (department == "Office")
                        {
                            bonusAmount += basicSalary * 0.02;
                        }
                    else if (department == "Security")
                        {
                            bonusAmount += basicSalary * 0.03;
                        }
                    else if (department == "Cleaning")
                        {
                            bonusAmount += basicSalary * 0.02;
                        }
                    else if (department == "Transport")
                        {
                            bonusAmount += basicSalary * 0.03;
                        }
                    else if (department == "Sports")
                        {
                            bonusAmount += basicSalary * 0.02;
                        }

                    //CALCULATING TOTAL PAY
                    totalPay = basicSalary + bonusAmount;

                    //PAYROLL RESULTS
                    cout << fixed << setprecision(2);

                    cout << " ============================== " << endl;
                    cout << "        PAYROLL RESULTS         " << endl;
                    cout << " ============================== " << endl;
                    cout <<endl;

                    cout << " Employee ID        :" << employeeID << endl;
                    cout << " Employee Name      :" << employeeName << endl;
                    cout << " Department         :" << department << endl;
                    cout << " Position           :" << position << endl;
                    cout << " Basic Salary       :R"<< basicSalary << endl;
                    cout << " Performance Rating :" << performanceRating << endl;
                    cout << " Years Of Service   :" << yearsOfService << endl;
                    cout << " Bonus AMOUNT       :R"<< bonusAmount << endl;
                    cout << " Total Monthly Pay  :R"<< totalPay << endl;
                    cout <<endl;

                    cout << " ============================== " << endl;
                    cout << "               DONE!!!          " << endl;
                    cout << " ============================== " << endl;
                    cout <<endl;
        }

        cout << " EMPLOYEE PAYROLLS HAVE BEE PROCESSED. ";
        cout << " THANK YOU FOR USING OUR NEW PAYROLL SYSTEM. ";

        return 0;
}

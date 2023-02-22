#include <iostream>
using namespace std;

struct employee
{
    string name, designation;
    int salary;
};
employee emp[100];
int total = 0;
void empdata()
{
    int choice;
    cout << "How many employees do you want to enter??" << endl;
    cin >> choice;
    for (int i = 0; i < total + choice; i++)
    {
        cout << "Enter Data of employee" << i + 1 << endl;
        cout << "Employee Name: ";
        cin >> emp[i].name;
        cout << "Employee designation: ";
        cin >> emp[i].designation;
        cout << "Employee Salary: ";
        cin >> emp[i].salary;
    }
    total = total + choice;
}
void showdata()
{
    cout << "\t\tEmployee Management System" << endl;
    for (int i = 0; i < total; i++)
    {
        cout << "Data of Employee" << i + 1 << endl;
        cout << "Employee Name: " << emp[i].name << endl;
        cout << "Employee Designation: " << emp[i].designation << endl;
        cout << "Employee Salary: " << emp[i].salary << endl;
    }
}
void updatedata()
{
    if (total != 0)
    {
        string designation;
        cout << "Enter id of data which you want to update: ";
        cin >> designation;
        for (int i = 0; i < total; i++)
        {
            if (designation == emp[i].designation)
            {
                cout << "Enter new data" << endl;
                cout << "Employee Name: ";
                cin >> emp[i].name;
                cout << "Employee designation: ";
                cin >> emp[i].designation;
                cout << "Employee Salary: ";
                cin >> emp[i].salary;
                break;
            }
        }
    }
}
void deldata()
{
    if (total != 0)
    {
        char user;
        cout << "Press 1 to delete full record" << endl;
        cout << "Press 2 to delete specific record" << endl;
        user = getchar();
        if (user == '1')
        {
            total = 0;
            cout << "All record is deleted...!!!" << endl;
        }
    }
    else
    {
        cout << "Your record is empty" << endl;
    }
}

int main()
{
    cout << "\t\t\tEmployee Management System" << endl;
    char user;
    while (1)
    {
        cout << "Press 1 to enter employee data" << endl;
        cout << "Press 2 to show employee data" << endl;
        cout << "Press 3 to update employee data" << endl;
        cout << "Press 4 to delete employee data" << endl;
        cout << "Press 5 to exit" << endl;
        user = getchar();
        switch (user)
        {
        case '1':
            empdata();
            break;
        case '2':
            showdata();
            break;
        case '3':
            updatedata();
            break;
        case '4':
            deldata();
            break;
        case '5':
            cout << "Thank You";
            break;
        default:
            cout<<"Invalid!!";
            break;
        }
    }
    return 0;
}

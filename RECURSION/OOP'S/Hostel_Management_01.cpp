#include <bits/stdc++.h>
using namespace std;
class Hostel
{
private:
    int Hostel_Number;
    string Hostel_Name;
    string Warden_Name;
    string Supervisor_Name;
    char Hostel_type;
    string Mess_Management_system;

public:
    // properties
    void add_Hostel_Number()
    {
        int n;
        cout << "Enter Hostel Number : ";
        cin >> n;
        Hostel_Number = n;
    }
    void add_Hostel_Name()
    {
        string s;
        cout << "Enter Hostel Name : ";
        cin >> s;
        Hostel_Name = s;
    }
    void add_Warden_Name()
    {
        string s;
        cout << "Enter Warden Name : ";
        cin >> s;
        Warden_Name = s;
    }
    void add_Supervisor_Name()
    {
        string s;
        cout << "Enter Supervisor Name : ";
        cin >> s;
        Supervisor_Name = s;
    }

    void add_Hostel_type()
    {
        char ch;
        cout << "Enter the Hostel type ........." << endl
             << "B -> for Boys " << endl
             << "G -> for Girls ";
        cout << endl;
        cin >> ch;
        Hostel_type = ch;
    }

    void add_Mess_Management_system()
    {
        string s;
        cout << "caterer's name :" << endl;
        cin >> s;
        Mess_Management_system = s; // assigning caterer's name
        int flag;
        cout << "press 1 for see mess menu or 0 for exit :" << endl;
        cin >> flag;

        if (flag == 1)
        {
            // mess menu
            cout << "Monday"
                 << "::"
                 << " "
                 << "Breakfast:- Burger && Eggs/milk"
                 << " "
                 << "Lunch:- Pulaw"
                 << " "
                 << "Dinner:-Chicken/Paneer" << endl
                 << endl;
            cout << "Tuesday"
                 << "::"
                 << " "
                 << "Breakfast:-Puri-Sabji "
                 << " "
                 << "Lunch:- Rice-dal"
                 << " "
                 << "Dinner:-Chicken/Paneer" << endl
                 << endl;
            cout << "Wednesday"
                 << "::"
                 << " "
                 << "Breakfast:- Bhature"
                 << " "
                 << "Lunch:- Rice-dal-curd"
                 << " "
                 << "Dinner:-Chicken/Paneer" << endl
                 << endl;
            cout << "Thrusday"
                 << "::"
                 << " "
                 << "Breakfast:- Dosa"
                 << " "
                 << "Lunch:- Rice-dal"
                 << " "
                 << "Dinner:-Chicken/Paneer" << endl
                 << endl;
            cout << "Friday"
                 << "::"
                 << " "
                 << "Breakfast:- Bread"
                 << " "
                 << "Lunch:- Rice-chhole"
                 << " "
                 << "Dinner:-Chicken/Paneer" << endl
                 << endl;
            cout << "Saturday"
                 << "::"
                 << " "
                 << "Breakfast:- Bread"
                 << " "
                 << "Lunch:- kitchari"
                 << " "
                 << "Dinner:-Fish/Paneer" << endl
                 << endl;
            cout << "Sunday"
                 << "::"
                 << " "
                 << "Breakfast:- Bread"
                 << " "
                 << "Lunch:- Rice-dal-curd"
                 << " "
                 << "Dinner:-Chicken/Paneer/Frooti" << endl
                 << endl;
        }

        else if (flag == 0)
        {
            cout << "Thank You !!" << endl;
        }

        else
        {
            cout << "OOP's please choose the correct option :" << endl;
        }

        int rating;
        int sign;
        cout << "if u want rate your MMC press 1 for rate it or 0 for exit :" << endl;
        cin >> sign;
        if (sign == 1)
        {
            cout << "Give us rating on 5" << endl;
            cin >> rating;
            if (rating == 5)
            {
                cout << "YOU LOVE IT " << endl;
            }
            else if (rating < 5 && rating >= 3)
            {
                cout << "BETTER" << endl;
            }
            else
            {
                cout << "IMPROVE IT" << endl;
            }
        }
        else
        {
            cout << "THANK YOU !" << endl;
        }
    }
    

    void Get_Hostel_Details(){
        cout << "HOSTEL NUMBER IS :"<<Hostel_Number << endl;
        cout << "HOSTEL NAME IS :"<<Hostel_Name << endl;
        cout << "WARDE NAME IS :"<<Warden_Name << endl;
        cout << "SUPERVISOR NAME IS :"<<Supervisor_Name << endl;
    
    }
    int main_menu()
    {
        int choice = 0;

        while (choice != 5)

        {

            cout << "\n\t\t\t\t*************";

            cout << "\n\t\t\t* HOSTEL MAIN MENU *";

            cout << "\n\t\t\t\t*************";

            cout << "\n\n\n\t\t\t1.Hostel Number";

            cout << "\n\t\t\t2.Hostel Name";

            cout << "\n\t\t\t3.Warden Name";

            cout << "\n\t\t\t4.Supervisor Name";

            cout << "\n\t\t\t5.Hostel type";

            cout << "\n\t\t\t6.Mess Management System";

            cout << "\n\t\t\t7.Get Hostel Details";

            cout << "\n\t\t\t8.Exit";

            cout << "\n\n\t\t\tEnter Your Choice: ";

            cin >> choice;

            switch (choice)

            {

            case 1:
                add_Hostel_Number();

                break;

            case 2:
                add_Hostel_Name();

                break;

            case 3:
                add_Warden_Name();

                break;

            case 4:
                add_Supervisor_Name();

                break;

            case 5:
                add_Hostel_type();

                break;

            case 6:
                add_Mess_Management_system();

                break;

            case 7:
                Get_Hostel_Details();

                break;

            case 8:

                break;

            default:

            {

                cout << "\n\n\t\t\tWrong choice!!!";

                cout << "\n\t\t\tPress any key to continue!!";

                return 0;

                system("pause");
            }
            }
        }
    }
};

class Students
{
private:
    string Student_name[100];
    string Student_age;
    string Student_address;
    string Student_phone;
    string Student_Paid_Amount;
    int val;

public:
    void add_Student_Details()
    {
        cout << "enter the number of students :" << endl;
        cin >> val;
        for (int i = 0; i < val; i++)
        {
            string s1;
            cout << "enter the name of student :";
            cin >> s1;
            this->Student_name[i] = s1;
        }
        cout << endl;
        string s2;
        cout << "enter the age of student :";
        cin >> s2;
        Student_age = s2;
        cout << endl;
        string s3;
        cout << "enter the address of student :";
        cin >> s3;
        Student_address = s3;
        cout << endl;
        string s4;
        cout << "enter the phone of student :";
        cin >> s4;
        Student_phone = s4;
        cout << endl;
        string s5;
        cout << "enter the Paid Amount by student :";
        cin >> s5;
        Student_Paid_Amount = s5;
        cout << endl;
        if (s5 == "0")
        {
            cout << "Please pay the due fees otherwise you have to face serious consequence like fine :" << endl;
        }
    }

    void get_Student_Details()
    {
        for (int i = 0; i < val; i++)
        {
            cout << "name of student is :" << Student_name[i] << endl;
        }

        cout << "age of student is :" << Student_age << endl;
        cout << "Address of student is :" << Student_address << endl;
        cout << "Phone of student is :" << Student_phone << endl;
        cout << "Amount Paid by student is :" << Student_Paid_Amount << endl;
    }

    int Student_main_menu()
    {

        int choice = 0;

        while (choice != 3)

        {

            cout << "\n\t\t\t\t*************";

            cout << "\n\t\t\t* STUDENT MAIN MENU *";

            cout << "\n\t\t\t\t*************";

            cout << "\n\n\n\t\t\t1.Set Student Details";

            cout << "\n\t\t\t2.Get Student Details";

            cout << "\n\t\t\t3.Exit";

            cout << "\n\n\t\t\tEnter Your Choice: ";

            cin >> choice;

            switch (choice)

            {

            case 1:
                add_Student_Details();

                break;

            case 2:
                get_Student_Details();

                break;

            case 3:
                break;

            default:

            {

                cout << "\n\n\t\t\tWrong choice!!!";

                cout << "\n\t\t\tPress any key to continue!!";

                return 0;

                system("pause");
            }
            }
        }
    }
};

int main()
{

    Hostel h1;
    Students s1;

    cout << "\n\t\t****************************";

    cout << "\n\t\t* HOSTEL MANAGEMENT SYSTEM *";


    cout << "\n\t\t****************************";

    cout << "\n\n\n\n\n\t\t Press any key to continue!!";

    system("pause");
    h1.main_menu();

    system("pause");
    s1.Student_main_menu();

    return 0;
}
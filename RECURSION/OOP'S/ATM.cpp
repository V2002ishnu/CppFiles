#include <iostream>
using namespace std;
class ATM
{
private:
    double Balance = 200000;
    int PIN = 2023;
    long long Account_number = 123456789;
    long long Phone_number = 7318347525;
    int OTP = 1000;

public:
    void withdraw()
    {
        int amount;
        cout << "enter the amount you want to withdraw :" << endl;
        cin >> amount;
        if (amount <= Balance)
        {
            Balance = Balance - amount;
            cout << "\nPlease collect Your Money ...\n";
            cout << "your updated Balance is :" << Balance << endl;
        }
        else
        {
            cout << "sorry you don't have enough Balance for this transaction !! " << endl;
        }
    }

    void change_Password()
    {
        int pswd;
        cout << "enter your old PIN :" << endl;
        cin >> pswd;
        int new_pswd;
        if (pswd == PIN)
        {
            cout << "enter the new PIN :\n";
            cin >> new_pswd;
            PIN = new_pswd;
            cout << "your PIN is successfully updated ...\n";
        }
        else
        {
            cout << "Please enter the correct PIN !!!\n";
        }
    }

    void Balance_enquiry()
    {
        cout << "Your current Account Balance is :" << Balance << endl;
    }

    void Change_Phone_No()
    {
        long long phone;
        cout << "enter the phone Number Linked to your Bank account :\n";
        cin >> phone;
        long long new_phone;

        if (phone == Phone_number)
        {
            cout << "enter the new phone Number :\n";
            cin >> new_phone;
            cout << "OTP is successfully send to your given mobile number :" << endl;
            int otp;
            cout << "enter the otp :\n";
            cin >> otp;
            if (otp == OTP)
            {
                Phone_number = new_phone;
                cout << "your phone number is successfully updated :\n";
            }
            else
            {
                cout << "Please enter the correct OTP :" << endl;
            }
        }

        else
        {
            cout << "sorry This phone number is not Linked with your Bank Account !!" << endl;
        }
    }

    void MINI_STATEMENT()
    {
        cout << "your current Balance is :" << Balance << endl;
        cout << "Account Number is :" << Account_number << endl;
        cout << "Phone Number is :" << Phone_number << endl;
    }

    int ATM_main_menu()
    {

        int pin;
        cout << "enter the PIN :\n";
        cin >> pin;

        if (pin == PIN)
        {

            int choice = 0;

            while (choice != 6)

            {

                cout << "\n\t\t\t\t*************";

                cout << "\n\t\t\t  * CHOOSE YOUR OPTION *";

                cout << "\n\t\t\t\t*************";

                cout << "\n\n\n\t\t\t1.WITHDRAWAL";

                cout << "\n\t\t\t2.CHANGE PASSWORD";

                cout << "\n\t\t\t3.BALANCE ENQUIRY";

                cout << "\n\t\t\t4.PHONE NUMBER UPDATE";

                cout << "\n\t\t\t5.MINI STATEMENT";

                cout << "\n\t\t\t6.EXIT";

                cout << "\n\n\t\t\tEnter Your Choice: ";

                cin >> choice;

                switch (choice)
                {
                case 1:
                    withdraw();

                    break;

                case 2:
                    change_Password();

                    break;

                case 3:
                    Balance_enquiry();

                    break;

                case 4:
                    Change_Phone_No();

                    break;

                case 5:
                    MINI_STATEMENT();

                    break;

                case 6:

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
        else
        {
            cout << "WRONG PIN !! :\n";
            ATM_main_menu();
        }
    }
};
int main()
{
    ATM vishnu;

    cout << "\n\t\t****************************";

    cout << "\n\t\t* WELCOME TO YONO BANK *";

    cout << "\n\t\t****************************";

    cout << "\n\t\t";

    system("pause");

    vishnu.ATM_main_menu();
}
#include "timeprog.h"
using namespace std;

void time_prog()
{
    cout << "Welcome to the Time converter. \n\n";

    cout << char(201) << "様様様様様様様様様様" << char(187) << endl
         << char(186) << "a - Convert seconds " << char(186) << endl
         << char(186) << "b - Convert minutes " << char(186) << endl
         << char(186) << "c - Convert hours   " << char(186) << endl
         << char(186) << "d - Convert days    " << char(186) << endl
         << char(200) << "様様様様様様様様様様" << char(188) << endl << endl;

    cout << "Selection: ";

    for(int counter=0;counter<1;counter++)
    {
        selection2=getch();
        switch(selection2)
        {
            case 'a':
            case 'A':
               system("CLS");
               showinfo();
               cout << "Please enter the amount of seconds: ";
               while (!(std::cin >> seconds))
               {
                   cout << "Please, use numbers.. \n\n";
                   std::cin.clear();
                   std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
               }
               cout << endl << endl;
               minutes = seconds / 60;
               hours = seconds / 3600;
               days = seconds / 86400;
               cout << setprecision(12) << seconds << " seconds equals: \n"
                    << setprecision(12) << minutes << " minute(s). \n"
                    << setprecision(12) << hours << " hour(s). \n"
                    << setprecision(12) << days << " day(s). \n\n";
            break;

            case 'b':
            case 'B':
               system("CLS");
               showinfo();
               cout << "Please enter the amount of minutes: ";
               while (!(std::cin >> minutes))
               {
                   cout << "Please, use numbers.. \n\n";
                   std::cin.clear();
                   std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
               }
               cout << endl << endl;
               seconds = minutes * 60;
               hours = minutes / 60;
               days = minutes / 1440;
               cout << setprecision(12) << minutes << " minutes equals: \n"
                    << setprecision(12) << seconds << " second(s). \n"
                    << setprecision(12) << hours << " hour(s). \n"
                    << setprecision(12) << days << " day(s). \n\n";
            break;

            case 'c':
            case 'C':
               system("CLS");
               showinfo();
               cout << "Please enter the amount of hours: ";
               while (!(std::cin >> hours))
               {
                   cout << "Please, use numbers.. \n\n";
                   std::cin.clear();
                   std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
               }
               cout << endl << endl;
               seconds = hours * 3600;
               minutes = hours * 60;
               days = hours / 24;
               cout << setprecision(12) << hours << " hours equals: \n"
                    << setprecision(12) << seconds << " second(s). \n"
                    << setprecision(12) << minutes << " minute(s). \n"
                    << setprecision(12) << days << " day(s). \n\n";
            break;

            case 'd':
            case 'D':
               system("CLS");
               showinfo();
               cout << "Please enter the amount of days: ";
               while (!(std::cin >> days))
               {
                   cout << "Please, use numbers.. \n\n";
                   std::cin.clear();
                   std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
               }
               cout << endl << endl;
               seconds = days * 86400;
               minutes = days * 1440;
               hours = days * 24;
               cout << setprecision(12) << days << " days equals: \n"
                    << setprecision(12) << seconds << " second(s). \n"
                    << setprecision(12) << minutes << " minute(s). \n"
                    << setprecision(12) << hours << " hour(s). \n\n";
            break;

            default:
                cout << "Not a valid option!\n";
                counter--;
            break;

        }
    }
    wait();
}

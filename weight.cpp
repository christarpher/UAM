#include "weight.h"
using namespace std;

void weight_prog()
{
   cout << "Welcome to the Weight converter program! \n";
   cout << char(201) << "อออออออออออออออออออออออ" << char(187) << endl
        << char(186) << "a - Convert ounces.    " << char(186) << endl
        << char(186) << "b - Convert pounds.    " << char(186) << endl
        << char(186) << "c - Convert grams.     " << char(186) << endl
        << char(186) << "d - Convert kilograms. " << char(186) << endl
        << char(186) << "e - Convert stones.    " << char(186) << endl
        << char(200) << "อออออออออออออออออออออออ" << char(188) << endl << endl;
   cout << "Selection: ";

   for(int choose=0;choose<1;choose++)
   {
       selection1 = getch();

       switch(selection1)
       {
           case 'a':
           case 'A':
                system("CLS");
                showinfo();

                cout << "Please enter the amount of ounces: ";
                while (!(std::cin >> weighted[0]))
                {
                    cout << "Please, use weighteds.. \n\n";
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }
                weighted[1] = weighted[0] * 0.0625;
                weighted[2] = weighted[0] * 28.3495231;
                weighted[3] = weighted[0] * 0.0283495231;
                weighted[4] = weighted[0] * 0.00446428571;
                cout << setprecision(12) << weighted[1] << " pounds \n"
                     << setprecision(12) << weighted[2] << " grams \n"
                     << setprecision(12) << weighted[3] << " kilograms \n"
                     << setprecision(12) << weighted[4] << " stones \n\n";
           break;


           case 'b':
           case 'B':
                system("CLS");
                showinfo();
                cout << "Please enter the amount of pounds: ";
                while (!(std::cin >> weighted[0]))
                {
                    cout << "Please, use weighteds.. \n\n";
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }
                weighted[1] = weighted[0] * 16;
                weighted[2] = weighted[0] * 453.59237;
                weighted[3] = weighted[0] * 0.45359237;
                weighted[4] = weighted[0] * 0.0714285714;
                cout << setprecision(12) << weighted[1] << " ounces \n"
                     << setprecision(12) << weighted[2] << " grams \n"
                     << setprecision(12) << weighted[3] << " kilograms \n"
                     << setprecision(12) << weighted[4] << " stones \n\n";
           break;


           case 'c':
           case 'C':
                system("CLS");
                showinfo();
                cout << "Please enter the amount of grams: ";
                while (!(std::cin >> weighted[0]))
                {
                    cout << "Please, use weighteds.. \n\n";
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }
                weighted[1] = weighted[0] * 0.0352739619;
                weighted[2] = weighted[0] * 0.00220462262;
                weighted[3] = weighted[0] * 0.001;
                weighted[4] = weighted[0] * 0.000157473044;
                cout << setprecision(12) << weighted[1] << " ounces \n"
                     << setprecision(12) << weighted[2] << " pounds \n"
                     << setprecision(12) << weighted[3] << " kilograms \n"
                     << setprecision(12) << weighted[4] << " stones \n\n";
           break;


           case 'd':
           case 'D':
                system("CLS");
                showinfo();
                cout << "Please enter the amount of kilograms: ";
                while (!(std::cin >> weighted[0]))
                {
                    cout << "Please, use weighteds.. \n\n";
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }
                weighted[1] = weighted[0] * 35.2739619;
                weighted[2] = weighted[0] * 2.20462262;
                weighted[3] = weighted[0] * 1000;
                weighted[4] = weighted[0] * 0.157473044;
                cout << setprecision(12) << weighted[1] << " ounces \n"
                     << setprecision(12) << weighted[2] << " pounds \n"
                     << setprecision(12) << weighted[3] << " grams \n"
                     << setprecision(12) << weighted[4] << " stones \n\n";
           break;


           case 'e':
           case 'E':
                system("CLS");
                showinfo();
                cout << "Please enter the amount of stones: ";
                while (!(std::cin >> weighted[0]))
                {
                    cout << "Please, use weighteds.. \n\n";
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }
                weighted[1] = weighted[0] * 224;
                weighted[2] = weighted[0] * 14;
                weighted[3] = weighted[0] * 6350.29318;
                weighted[4] = weighted[0] * 6.35029318;
                cout << setprecision(12) << weighted[1] << " ounces \n"
                     << setprecision(12) << weighted[2] << " pounds \n"
                     << setprecision(12) << weighted[3] << " grams \n"
                     << setprecision(12) << weighted[4] << " kilograms \n\n";
           break;


           default:
              cout << "Not a valid option!\n";
              choose--;
           break;
       }
   }
    wait();
}

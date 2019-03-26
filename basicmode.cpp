#include "basicmode.h"
using namespace std;

void basicmode()
{
    do{
        while (!(std::cin >> number_basic[0]))
        {
            std::cout << "Please use numbers.. \n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        std::cin >> operation_basic;
        while (!(std::cin >> number_basic[1]))
        {
            std::cout << "Please use numbers.. \n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        switch(operation_basic)
        {
        case '*':
        case 'x':
        case 'X':
            cout << setprecision(12) << number_basic[0] * number_basic[1] << endl << endl;
            break;
        case '/':
        case 'd':
        case 'D':
            if(number_basic[1] == 0.0)
            {
                       cout << "Undefined. " << endl << endl;
            }
            else
            {
                cout << setprecision(12) << number_basic[0] / number_basic[1] << endl << endl;
            }
            break;
        case '-':
        case 's':
        case 'S':
            cout << setprecision(12) << number_basic[0] - number_basic[1] << endl << endl;
            break;
        case '+':
        case 'a':
        case 'A':
            cout << setprecision(12) << number_basic[0] + number_basic[1] << endl << endl;
            break;
        case '^': // POWERS
            if(number_basic[1] > 0)
            {
                  number_basic[2] = number_basic[0];
                  for(int count = 1; count < number_basic[1]; count++)
                  {
                      number_basic[0] = number_basic[0] * number_basic[2];
                  }
            cout << setprecision(12) << number_basic[0];
            cout << endl << endl;
            }
            else if(number_basic[1] == 0)
                cout << "1\n\n";
            else
            {
                number_basic[2] = number_basic[0];
                  for(int count = 1; count > number_basic[1]; count--)
                  {
                      number_basic[0] = number_basic[0] / number_basic[2];
                  }
            cout << setprecision(12) << number_basic[0];
            cout << endl << endl;
            }

             break;
        case 'h':
        case 'H':
             repeat_basic = 0;
             break;
        case 'c':
        case 'C':// CLEAR SCREEN
            system("CLS");
            showinfo2();
            break;
        default:
        cout << "please enter a valid operation. " << endl << endl;

        }//END SWITCH
    }while(repeat_basic == 1);
}

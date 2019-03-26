#include "gpa.h"
using namespace std;

void gpa()
{
    cout << "Welcome to the GPA calculator! " << endl << endl;
    cout << "how many periods are you calculating? ";
    while (!(std::cin >> periods))
    {
     cout << "Please, use numbers.. \n\n";
     std::cin.clear();
     std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    for(int period = 1; period <= periods; period++)
    {
    cout << "Please enter period " << period << ": ";
    cin >> grade;

        switch(grade)
        {
             case '0':
             case 'f':
             case 'F':
                  break;
             case '1':
             case 'd':
             case 'D':
                  total += 1;
                  break;
             case '2':
             case 'c':
             case 'C':
                  total += 2;
                  break;
             case '3':
             case 'b':
             case 'B':
                  total += 3;
                  break;
             case '4':
             case 'a':
             case 'A':
                  total += 4;
                  break;
             default:
                  cout << "          invalid period " << period << " grade \n";
                  period--;
         }// END SWITCH
     }//END FOR
     cout << endl << "your GPA is " << total / periods << endl << endl;
    wait();
}

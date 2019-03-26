#include "force.h"
using namespace std;

void force()
{
    cout << "Welcome to the simple force calculator. " << endl << endl;
    cout << "Please enter a mass (kilograms): ";
    while (!(std::cin >> mass))
    {
    cout << "Please, use numbers.. \n\n";
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    cout << endl << "Please enter the velocity (Meters per second. 9.8 M/s for gravity): ";
    while (!(std::cin >> velocity))
    {
    cout << "Please, use numbers.. \n\n";
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    forces = mass * velocity;
    cout << "That object has " << forces << " newtons of force. \n\n";
    wait();
}

#include "search.h"
using namespace std;

void search_prog()
{
    cout << "Please type what you would like to define: ";
    cin >> search;
    define = "start http://dictionary.reference.com/browse/" + search;
    system(&define[0]);
    cout << "Opening dictionary.com for " << search << endl;
    wait();
}

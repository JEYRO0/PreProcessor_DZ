#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
#define INTEGER


#include "function.h"
using namespace std;

int main()
{
    const int size = 10;

#ifdef INTEGER
    int massive[size];
#elif defined(DOUBLE)
    double massive[size];
#elif defined(CHAR)
    char massive[size];
#endif

    FillMassive(massive, size);

    cout << "Array elements:\n";
    ShowMassive(massive, size);

    cout << "Minimum element: " << Min(massive, size) << std::endl;
    cout << "Maximum element: " << Max(massive, size) << std::endl;

    SortMassive(massive, size);
    ShowMassive(massive, size);


#ifdef INTEGER
    EditMassive(massive, size, 2, 777);
#elif defined(DOUBLE)
    EditMassive(massive, size, 2, 55.55);
#elif defined(CHAR)
    EditMassive(massive, size, 2, 'Z');
#endif

    ShowMassive(massive, size);

    return 0;
}

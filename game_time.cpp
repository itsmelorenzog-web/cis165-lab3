#include <iostream>
using namespace std;

int main()
{
    const int LEVEL_ONE_MINUTES = 78;
    const int LEVEL_TWO_MINUTES = 144;

    int level_one_hours = LEVEL_ONE_MINUTES / 60;
    int level_one_remaining = LEVEL_ONE_MINUTES % 60;

    int level_two_hours = LEVEL_TWO_MINUTES / 60;
    int level_two_remaining = LEVEL_TWO_MINUTES % 60;

    int difference_minutes = LEVEL_TWO_MINUTES - LEVEL_ONE_MINUTES;
    int difference_hours = difference_minutes / 60;
    int difference_remaining = difference_minutes % 60;

    cout << "Level 1: " << level_one_hours << " hours and "
         << level_one_remaining << " minutes" << endl;

    cout << "Level 2: " << level_two_hours << " hours and "
         << level_two_remaining << " minutes" << endl;

    cout << "Level 2 took " << difference_hours << " hours and "
         << difference_remaining << " minutes longer than Level 1." << endl;

    return 0;
}
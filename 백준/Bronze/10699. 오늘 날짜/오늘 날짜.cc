#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int main()
{
    time_t timer = time(NULL);
    struct tm *t = gmtime(&timer);

    cout << t->tm_year + 1900 << "-"
         << setfill('0') << setw(2) << t->tm_mon + 1 << "-"
         << setfill('0') << setw(2) << t->tm_mday << endl;

    return 0;
}
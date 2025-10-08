#include <iostream>
using namespace std;

int main()
{
    int N, inp;
    cin >> N;
    for(int i=0; i<N; i++)
    {
        cin >> inp;
        if(inp == 300)
        {
            cout << "1 ";
        }
        else if(inp >= 275)
        {
            cout << "2 ";
        }
        else if(inp >= 250)
        {
            cout << "3 ";
        }
        else{
            cout << "4 ";
        }
    }
    cout << "\n";
    return 0;
}
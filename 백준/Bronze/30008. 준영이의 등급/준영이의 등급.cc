#include <iostream>

using namespace std;

int main()
{
    int n, k, p;

    cin >> n >> k;

   for (int i = 0; i < k; i++)
   {
        cin >> p;

        int result = p * 100 / n;
        
        if(result >= 0 && result <= 4)
        {
            cout << "1" << " ";
        }
        else if(result > 4 && result <= 11)
        {
            cout << "2" << " ";
        }
        else if(result > 11 && result <= 23)
        {
            cout << "3" << " ";
        }
        else if(result > 23 && result <= 40)
        {
            cout << "4" << " ";
        }
        else if(result > 40 && result <= 60)
        {
            cout << "5" << " ";
        }
        else if(result > 60 && result <= 77)
        {
            cout << "6" << " ";
        }
        else if(result > 77&& result <= 89)
        {
            cout << "7" << " ";
        }
        else if(result > 89 && result <= 96)
        {
            cout << "8" << " ";
        }
        else if(result >  89 && result <= 100)
        {
            cout << "9" << " ";
        }

   }

    return 0;
}
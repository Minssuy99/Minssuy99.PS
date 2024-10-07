#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n = 0;
    int point = 0;
    int loser = 0;
    string winner;

    cin >> n >> winner;

    vector<string> nickname(n);
    vector<string> chattingLog(n);

    for(int i = 0; i < n; i++)
    {
        cin >> nickname[i] >> chattingLog[i];

        if(nickname[i] == winner)
        {
            point = i;
        }
    }

    for(int i = 0; i < point; i++)
    {
        if(chattingLog[point] == chattingLog[i])
        {
            loser += 1;
        }
    }

    cout << loser << endl;

    return 0;
}
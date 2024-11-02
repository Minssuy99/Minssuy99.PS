#include <bits/stdc++.h>

using namespace std;

struct Person
{
    int weight;
    int height;
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<Person> people(n);
    vector<int> rank(n, 1);

    for (int i = 0; i < n; i++)
    {
        cin >> people[i].weight >> people[i].height;
    }

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n; k++)
        {
            if (i != k)
            {
                if (people[i].weight < people[k].weight && people[i].height < people[k].height)
                {
                    rank[i]++;
                }
            }
        }

        cout << rank[i] << " ";
    }

    return 0;
}
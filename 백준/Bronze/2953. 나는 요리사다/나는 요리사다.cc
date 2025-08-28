#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int n, sum, line, max = 0, cnt = 0;
	for(int i = 1; i <= 20; i++)
    {
		cin >> n;
		sum += n;
		if((i % 4) == 0)
        {
			cnt++;
			if(sum > max)
            {
				max = sum;
				line = cnt;
			}
			sum = 0;
		}
	}
	cout << line << " " << max;
}
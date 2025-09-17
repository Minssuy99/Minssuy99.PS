#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n, res=0;
	string str;
	
	cin>>n;
	
	for(int i=0;i<n;i++)
    {
		cin>>str;
		if(str.find("01")!=string::npos || str.find("OI")!=string::npos)
			res++;
	}
	
	cout<<res;
	
	return 0;
}
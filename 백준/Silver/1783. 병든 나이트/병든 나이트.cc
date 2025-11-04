#include <iostream>
#include <algorithm>
using namespace std;

int result;

int main()
{
	int N,M;
	cin >> N >> M;
	
	if (N == 1)
	{
		result = 1;
	}
	
	else if (N == 2)
	{
		result = min(4, (M-1)/2+1);
	}
	
	else
	{
		if (M >= 7)
		{
			result = M - 2;
		}
		
		else
		{
			result = min(4, M);
		}
	}
	 
	cout << result << "\n";
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int xor_operation(int a, int b)
{
	int ans = 0, i = 1;
	while (a != 0 || b != 0)
	{
		if ((a % 2 == 1 && b % 2 == 1) || (a % 2 == 0 && b % 2 == 0))
		{
			i *= 2;
			a /= 2, b /= 2;
		}
		else
		{
			ans = ans + i;
			i *= 2;
			a /= 2, b /= 2;
		}
	}
	return ans;
}
int and_operation(int a, int b)
{
	int ans = 0, i = 1;
	while (a != 0 || b != 0)
	{
		if ((a % 2 == 1 && b % 2 == 1))
		{
			ans = ans + i;
			i *= 2;
			a /= 2, b /= 2;
		}
		else
		{
			i *= 2;
			a /= 2, b /= 2;
		}
	}
	return ans;
}
int main()
{
	cout << xor_operation(1,1) << endl;
	cout << xor_operation(157,101) << endl;
	cout << xor_operation(157,2) << endl;
	
	return 0;
}
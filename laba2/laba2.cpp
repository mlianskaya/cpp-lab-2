#include <iostream>
#include <cmath>
using namespace std;
long double fact2(long double n)
{
	if (n == 0)
		return 1;
	if (n == 1)
		return 1;
	return n * fact2(n - 2);
}
long double t(long double x)
{
	long double s1 = 0;
	long double s2 = 0;
	for (int k = 0; k <= 10; k++)
	{
		s1 = s1 + pow(x, 2 * k + 1) / fact2(2 * k + 1);
	}
	for (int k = 0; k <= 10; k++)
	{
		s2 = s2 + pow(x, 2 * k) / fact2(2 * k);
	}
	return s1 / s2;
}
int main()
{
    long double res;
	long double y;
	cin >> y;
	res = (7 * t(0.25) + 2 * t(1 + y)) / (6 - t(y*y - 1));
	cout << res;
	return 0;
}

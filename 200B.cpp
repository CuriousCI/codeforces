#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	double s = 0, a;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		s += a;
	}

	cout << s / n;
}
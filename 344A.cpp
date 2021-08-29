#include <iostream>

using namespace std;

int main()
{
	int n, t = 1;
	string c, x;
	cin >> n >> c;
	while (--n)
	{
		cin >> x;
		if (c != x)
			t++;
		c = x;
	}
	cout << t;
}
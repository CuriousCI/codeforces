#include <iostream>

using namespace std;

int main()
{
	int n, o, i, t = 0, m = 0;
	cin >> n;
	while (n--)
	{
		cin >> o >> i;
		t -= o;
		t += i;
		m = max(t, m);
	}

	cout << m << endl;
}
#include <iostream>

using namespace std;

int main()
{
	int n, h, a, w = 0;
	cin >> n >> h;
	while (n--)
	{
		cin >> a;
		w += a <= h ? 1 : 2;
	}
	cout << w;
}
#include <iostream>
#include <cstdint>
#include <algorithm>

typedef long long ll;

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	ll t;
	cin >> t;
	int a, b, c, d;
	while (t--)
	{
		cin >> a >> b >> c >> d;
		if (a > b)
			swap(a, b);
		if (c > d)
			swap(c, d);
		cout << (a + c == b && b == d ? "Yes" : "No") << '\n';
	}
}
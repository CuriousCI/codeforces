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
	int a, b;
	while (t--)
	{
		cin >> a >> b;
		cout << a + b << '\n';
	}
}
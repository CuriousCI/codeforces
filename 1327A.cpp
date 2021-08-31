#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	long long t, n, k, s;
	cin >> t;

	for (long long i = 0; i < t; i++)
	{
		s = 2;
		cin >> n >> k;
		if (k == 1 && (n & 1) == 1)
			cout << "YES\n";
		else if (k == 1 && (n & 1) == 0)
			cout << "NO\n";
		else
		{
			long long su = pow(k, 2);
			if (su <= n)
				if (((n - su) & 1) == 0)
					su = n;
			cout << (su == n ? "YES" : "NO") << '\n';
		}
	}
}
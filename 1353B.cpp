#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	cin >> cases;

	while (cases--)
	{
		uint16_t n, k;
		cin >> n >> k;

		vector<uint16_t> a(n), b(n);
		for (auto &i : a)
			cin >> i;
		sort(a.begin(), a.end());
		for (auto &i : b)
			cin >> i;
		sort(b.begin(), b.end());
		reverse(b.begin(), b.end());
		for (size_t i = 0; i < k; i++)
			if (b[i] > a[i])
				a[i] = b[i];
		uint32_t sum = 0;
		for (auto i : a)
			sum += i;
		cout << sum << endl;
	}
}
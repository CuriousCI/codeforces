#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t cases;
	uint64_t number;

	cin >> cases;
	while (cases--)
	{
		cin >> number;
		while (!(number % 2))
			number /= 2;
		cout << (number == 1 ? "NO" : "YES") << endl;
	}
}
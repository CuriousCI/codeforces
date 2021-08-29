#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t cases, origin, result, modulo;
	cin >> cases;
	while (cases--)
	{
		cin >> origin >> result;
		if (origin > result)
			swap(origin, result);
		modulo = (result - origin) % 10;
		cout << (result - origin - modulo) / 10 + (modulo > 0 ? 1 : 0) << endl;
	}
}
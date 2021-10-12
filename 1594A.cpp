#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	int64_t objective;

	cin >> cases;
	while (cases--)
	{
		cin >> objective;
		cout << (objective - 1) * -1 << ' ' << objective << endl;
	}
}
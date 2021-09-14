#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	int64_t forwards, backwards, jumps;
	cin >> cases;

	while (cases--)
	{
		cin >> forwards >> backwards >> jumps;
		int16_t modulo = (jumps & 1);
		cout << (forwards - backwards) * (jumps - modulo) / 2 + (modulo ? forwards : 0) << endl;
	}
}
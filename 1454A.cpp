#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases, size;
	cin >> cases;

	while (cases--)
	{
		cin >> size;
		for (uint32_t _ = 1; _ <= size; _++)
			cout << (_) % size + 1 << ' ';
		cout << endl;
	}
}
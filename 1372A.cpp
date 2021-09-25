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
		for (uint16_t element = 0; element < size; element++)
			cout << 1 << ' ';
		cout << endl;
	}
}
#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	uint32_t length;

	cin >> cases;
	while (cases--)
	{
		cin >> length;
		cout << length << endl;
	}
}
#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases, inside, outside;

	cin >> cases;
	while (cases--)
	{
		cin >> inside >> outside;
		cout << (inside % outside ? "NO" : "YES") << endl;
	}
}
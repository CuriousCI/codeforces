#include <iostream>
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
		string equality;
		cin >> equality;
		cout << (equality.front() == equality.back() && equality != "ENE" ? "YES" : "NO") << endl;
	}
}
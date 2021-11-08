#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t hp;
	cin >> hp;
	auto modulo = hp % 4;

	if (modulo == 1)
		cout << "0 A";
	else if (modulo == 3)
		cout << "2 A";
	else if (modulo == 2)
		cout << "1 B";
	else
		cout << "1 A";
}
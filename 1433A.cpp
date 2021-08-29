#include <iostream>
#include <cstdint>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t apartments;
	string apartment;
	cin >> apartments;

	while (apartments--)
	{
		cin >> apartment;
		uint16_t digit = apartment[0] - '0';
		cout << (digit - 1) * 10 + (apartment.length() * (apartment.length() + 1) / 2) << endl;
	}
}
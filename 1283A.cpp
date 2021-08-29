#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t cases;
	cin >> cases;

	while (cases--)
	{
		uint16_t hours, minutes;
		cin >> hours >> minutes;
		cout << (24 - hours) * 60 - minutes << endl;
	}
}
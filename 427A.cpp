#include <iostream>
#include <cstdint>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	int32_t amount, officers = 0, crimes = 0, event;

	cin >> amount;
	while (amount--)
	{
		cin >> event;
		if (officers > 0 or event > 0)
			officers += event;
		else
			crimes++;
	}

	cout << crimes;
}
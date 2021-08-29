#include <iostream>
#include <cstdint>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	uint32_t max, reminder, result, output;

	cin >> cases;

	while (cases--)
	{
		cin >> reminder >> result >> max;
		output = (max - (max % reminder)) + result;
		if (output > max)
			output -= reminder;
		cout << output << endl;
	}
}
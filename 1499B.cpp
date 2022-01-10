#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t test_cases;
	cin >> test_cases;
	while (test_cases--)
	{
		string binary;
		cin >> binary;

		int64_t
			ones = binary.find("11"),
			zeros = binary.rfind("00");

		cout << (ones != string::npos && zeros != string::npos && ones < zeros ? "NO" : "YES")
			 << endl;
	}
}
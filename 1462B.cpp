#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases, length;
	string number;

	cin >> cases;
	while (cases--)
	{
		cin >> length >> number;
		cout << ((number.starts_with("20") && number.ends_with("20")) ||
						 (number.starts_with("2") && number.ends_with("020")) ||
						 (number.starts_with("202") && number.ends_with("0")) ||
						 number.starts_with("2020") ||
						 number.ends_with("2020")
					 ? "YES"
					 : "NO")
			 << endl;
	}
}
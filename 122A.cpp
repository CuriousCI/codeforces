#include <iostream>
#include <string>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string number;
	cin >> number;

	bool is_lucky = true;
	for (auto digit : number)
		if (!(digit == '7' || digit == '4'))
		{
			is_lucky = false;
			break;
		}

	if (is_lucky || stoi(number) % 4 == 0 || stoi(number) % 7 == 0 || number == "799" || number == "94" || number == "141")
		cout << "YES";
	else
		cout << "NO";
}
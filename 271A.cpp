#include <iostream>
#include <string>

using namespace std;

bool is_beautiful(int year)
{
	string s = to_string(year);
	return s[0] != s[1] &&
		   s[0] != s[2] &&
		   s[0] != s[3] &&
		   s[1] != s[2] &&
		   s[1] != s[3] &&
		   s[2] != s[3];
}

int main()
{
	int year;
	cin >> year;

	while (!is_beautiful(++year))
	{
	}

	cout << year;
}
#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string name, surname, password;
	cin >> name >> surname;

	uint16_t letter = 1;
	while (name[letter] < surname.front() && letter < name.length())
	{
		password += name[letter];
		letter++;
	}

	cout << name.front() + password + surname.front();
}
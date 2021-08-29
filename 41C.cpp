#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string email;
	cin >> email;

	size_t position = string::npos;

	bool found = false;
	while ((position = email.find("at", 1)) != string::npos && !found)
	{
		found = true;
		email.replace(position, 2, "@");
	}

	while ((position = email.find("dot", 1)) != string::npos && position != email.size() - 3)
		email.replace(position, 3, ".");

	cout << email;
}
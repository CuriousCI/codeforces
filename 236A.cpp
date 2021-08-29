#include <iostream>
#include <set>

using namespace std;

int main()
{
	string username;
	cin >> username;

	set<char> letters;

	for (auto character : username)
		letters.insert(character);

	if ((letters.size() & 1) == 1)
		cout << "IGNORE HIM!";
	else
		cout << "CHAT WITH HER!";
}
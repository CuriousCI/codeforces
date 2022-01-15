#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string name;
	cin >> name;

	bool is_mirrored = true;
	;
	for (auto letter : name)
		if (string("AHIMOTUVWXY").find(letter) == string::npos)
		{
			is_mirrored = false;
			break;
		}

	for (auto index = 0; index <= name.length() / 2 && is_mirrored; index++)
		is_mirrored = name[index] == name[name.length() - index - 1];

	cout << (is_mirrored ? "YES" : "NO");
}
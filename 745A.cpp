#include <iostream>
#include <set>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	string initial;
	cin >> initial;

	set<string> combinations;
	for (auto index = 0; index < initial.length(); index++)
	{
		string temp;
		for (auto offset = 0; offset < initial.length(); offset++)
			temp += initial[(index + offset) % initial.length()];
		combinations.insert(temp);
	}

	cout << combinations.size();
}
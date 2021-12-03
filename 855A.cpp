#include <iostream>
#include <set>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	uint16_t owners_count;
	cin >> owners_count;
	string owner;
	set<string> owners;
	while (owners_count--)
	{
		cin >> owner;
		cout << (owners.contains(owner) ? "YES" : "NO") << endl;
		owners.insert(owner);
	}
}
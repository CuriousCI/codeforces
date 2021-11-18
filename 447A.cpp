#include <iostream>
#include <set>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	int64_t buckets, hash, value, conflict = -1;
	set<int64_t> table;

	cin >> hash >> buckets;
	for (auto bucket = 1; bucket <= buckets; bucket++)
	{
		cin >> value;
		auto hashed = value % hash;
		if (table.contains(hashed) && conflict == -1)
			conflict = bucket;
		table.insert(hashed);
	}

	cout << conflict;
}
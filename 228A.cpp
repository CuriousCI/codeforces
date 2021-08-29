#include <iostream>
#include <set>

using namespace std;

int main()
{
	set<long long> t;
	long long a;
	for (int i = 0; i < 4; i++)
	{
		cin >> a;
		t.insert(a);
	}

	cout << 4 - t.size();
}
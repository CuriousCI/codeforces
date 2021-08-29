
#include <iostream>

using namespace std;

int main()
{
	int n, r = 0;
	char cur, nxt;
	cin >> n >> cur;

	while (--n)
	{
		cin >> nxt;
		if (nxt == cur)
			r++;
		cur = nxt;
	}

	cout << r;
}
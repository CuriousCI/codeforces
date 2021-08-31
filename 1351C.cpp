#include <iostream>
#include <cstdint>
#include <map>
#include <string>
#include <algorithm>

typedef long long ll;

using namespace std;

struct p
{
	int x, y;
	p(int x, int y) : x(x), y(y) {}
	string s()
	{
		return to_string(x) + " " + to_string(y);
	}
};

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	ll t;
	cin >> t;
	string s;
	cin.ignore();
	while (t--)
	{
		map<string, bool> m;
		p cp(0, 0);
		getline(cin, s);
		int time = 0;
		for (auto c : s)
		{
			p lp(cp.x, cp.y);
			if (c == 'N')
				cp.x++;
			else if (c == 'S')
				cp.x--;
			else if (c == 'W')
				cp.y--;
			else if (c == 'E')
				cp.y++;
			if (m[lp.s() + " " + cp.s()])
			{
				time += 1;
			}
			else
			{
				time += 5;
				m[lp.s() + " " + cp.s()] = 1;
				m[cp.s() + " " + lp.s()] = 1;
			}
		}
		cout << time << '\n';
	}
}
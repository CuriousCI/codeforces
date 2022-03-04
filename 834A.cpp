#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	char start, end;
	uint64_t duration;
	cin >> start >> end >> duration;

	if (duration & 1)
	{
		cout << ((start == '^' && end == '>') || (start == '>' && end == 'v') || (start == 'v' && end == '<') || (start == '<' && end == '^') ? "cw" : "ccw");
	}
	else
		cout << "undefined";
}
#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	int16_t upvotes, downvotes, uncertain;
	cin >> upvotes >> downvotes >> uncertain;

	if (upvotes == downvotes && !uncertain)
		cout << '0';
	else if (abs(upvotes - downvotes) <= uncertain)
		cout << '?';
	else
		cout << (upvotes > downvotes ? '+' : '-');
}
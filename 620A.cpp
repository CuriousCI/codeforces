#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

struct Point
{
	int32_t x, y;
};

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	Point start, end;
	cin >> start.x >> start.y >> end.x >> end.y;

	cout << max(abs(end.x - start.x), abs(end.y - start.y));
}
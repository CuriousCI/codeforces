#include <iostream>
#include <cmath>
#include <cstdint>
#include <algorithm>

using namespace std;

struct Point
{
	int64_t x, y;
};

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	Point origin, destination;
	int64_t radius;

	cin >> radius >> origin.x >> origin.y >> destination.x >> destination.y;

	auto distance = sqrt(pow(origin.x - destination.x, 2) + pow(origin.y - destination.y, 2));

	cout << (int64_t)ceil(distance / (radius * 2));
}
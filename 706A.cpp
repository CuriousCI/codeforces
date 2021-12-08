#include <iostream>
#include <cmath>
#include <vector>
#include <cstdint>
#include <algorithm>
#include <iomanip>

using namespace std;

struct Taxi
{
	double x, y, speed;
};

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	double vasiliy_x, vasiliy_y;
	uint16_t taxis_count;
	cin >> vasiliy_x >> vasiliy_y >> taxis_count;

	vector<Taxi> taxis(taxis_count);
	for (auto &taxi : taxis)
		cin >> taxi.x >> taxi.y >> taxi.speed;

	double speed = INFINITY;
	for (auto taxi : taxis)
		speed = min(sqrt(pow(taxi.x - vasiliy_x, 2) + pow(taxi.y - vasiliy_y, 2)) / taxi.speed, speed);

	cout << setprecision(10) << speed;
}
#include <iostream>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	float misha_points, misha_time, vasya_points, vasya_time;
	cin >> misha_points >> vasya_points >> misha_time >> vasya_time;

	auto points = [](auto problem, auto time)
	{
		return max({
			(problem * 3) / 10,
			problem - (problem / 250) * time,
		});
	};

	auto misha = points(misha_points, misha_time),
		 vasya = points(vasya_points, vasya_time);

	cout << (misha == vasya ? "Tie" : misha > vasya ? "Misha"
													: "Vasya");
}
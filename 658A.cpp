#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t problems_number, points_decrease;
	cin >> problems_number >> points_decrease;

	vector<int16_t>
		scores(problems_number),
		completion_times(problems_number);

	for (auto &score : scores)
		cin >> score;
	for (auto &time : completion_times)
		cin >> time;

	int32_t limak = 0, radewoosh = 0, minutes = 0;
	for (auto problem = 0; problem < problems_number; problem++)
	{
		minutes += completion_times[problem];
		limak += max((int32_t)0, scores[problem] - points_decrease * minutes);
	}

	minutes = 0;
	for (auto problem = problems_number - 1; problem >= 0; problem--)
	{
		minutes += completion_times[problem];
		radewoosh += max((int32_t)0, scores[problem] - points_decrease * minutes);
	}

	if (limak == radewoosh)
		cout << "Tie";
	else
		cout << (limak > radewoosh ? "Limak" : "Radewoosh");
}
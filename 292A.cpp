#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint32_t size;
	cin >> size;

	vector<pair<int32_t, int32_t>> tasks(size);
	for (auto &task : tasks)
		cin >> task.first >> task.second;

	int32_t queue = 0, result = 0, last_time = tasks.begin()->first, last_queue;
	for (auto task : tasks)
	{
		queue = max(queue - (task.first - last_time), (int32_t)0);
		queue += task.second;
		result = max(queue, result);
		last_queue = queue;
		last_time = task.first;
	}

	cout << last_time + last_queue << ' ' << result;
}
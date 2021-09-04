#include <iostream>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint64_t houses, size;
	cin >> houses >> size;

	vector<uint64_t> tasks(size);
	for (auto &task : tasks)
		cin >> task;

	uint64_t time = tasks.front() - 1;
	for (size_t task = 1; task < size; task++)
		if (tasks[task] >= tasks[task - 1])
			time += tasks[task] - tasks[task - 1];
		else
			time += houses - tasks[task - 1] + tasks[task];

	cout << fixed << time;
}
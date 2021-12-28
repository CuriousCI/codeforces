#include <iostream>
#include <ranges>
#include <vector>
#include <cstdint>
#include <algorithm>

using namespace std;

struct Node
{
	int64_t
		left,
		right,
		size;

	Node *front = nullptr,
		 *back = nullptr;

	bool insert(Node *node)
	{
		if (node->right == this->right)
		{
			this->back = node;
			return true;
		}
		else if (node->left == this->left)
		{
			this->front = node;
			return true;
		}
		else
		{
			if (this->front)
				if (this->front->right >= node->right)
					return this->front->insert(node);

			if (this->back)
				if (this->back->left <= node->left)
					return this->back->insert(node);
		}

		return false;
	}

	int64_t missing()
	{
		if (this->left == this->right)
			return this->left;
		if (this->front)
			return this->front->right + 1;
		if (this->back)
			return this->back->left - 1;

		return 0;
	}
};

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);

	uint16_t cases;
	cin >> cases;
	while (cases--)
	{
		uint64_t size;
		cin >> size;

		vector<Node> nodes(size);
		for (auto &node : nodes)
		{
			cin >> node.left >> node.right;
			node.size = node.right - node.left;
		}

		ranges::sort(nodes, [](Node alpha, Node beta)
					 { return alpha.size > beta.size; });

		vector<Node *> to_join;
		for (auto index = 1; index < size; index++)
			to_join.push_back(&nodes[index]);

		while (to_join.size() > 0)
		{
			vector<Node *> temp;
			for (auto node : to_join)
				if (!nodes.front().insert(node))
					temp.push_back(node);

			to_join = temp;
		}

		for (auto node : nodes)
			cout << node.left << ' ' << node.right << ' ' << node.missing() << endl;
		cout << endl;
	}
}
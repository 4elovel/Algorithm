#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int solution(vector <int> vec) {

    sort(vec.begin(),vec.end());
	if (!(vec[vec.size() - 1] == vec.size() + 1)) {
		return vec.size() + 1;
	}
	if (!(vec[0] == 1))
	{
		return 1;
	}
	for (size_t i = 0; i < vec.size(); i++)
	{
		if (!(vec[i] == vec[i + 1] - 1)) {
			return i + 2;
		}
	}
	return 0;
}

int main()
{
	vector <int> vec{2,1,4,8,6,7,5};

	cout << "Missing element is - " << solution(vec);
}

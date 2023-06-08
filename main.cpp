#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void func(int cnt) {
	if (vec.size() == M)
	{
		for (auto i:vec)
		{
			cout << i << " ";
		}
		cout << endl;
	}

	for (int i=cnt; i<=N; i++)
	{
		vec.push_back(i);
		func(i+1);
		vec.pop_back();
	}
}

int main() {
   cin >> N >> M;
   func(1);
   return 0;
}

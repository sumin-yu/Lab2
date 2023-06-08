#include <iostream>
#include <vector>

using namespace std;

int N, M;
vector<int> vec;

void func(int cnt) {
	if (vec.size() == M) {
		int able = 0;

		for (int i = 0; i < M - 1; i++) {
			if (vec[i] < vec[i + 1]) {
				able++;
			}
		}
		if (able == M - 1) {
			for (int i : vec) {
				cout << i << " ";
			}
			cout << endl;
			return;
		}
	}

	for (int i = cnt + 1; i <= N; i++) {
		vec.push_back(i);
		func(cnt + 1);
		vec.pop_back();
	}
}

int main() {
	cin >> N >> M;
	func(0);
}

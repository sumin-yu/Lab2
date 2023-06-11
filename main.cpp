#include <iostream>
#include <vector>

using namespace std;

void dfs(vector<int>& num, vector<bool>& visited, int d, int M, int prev) {
    if (d == M) {
        for (auto elem : num) {
            cout << elem << ' ';
        }
        cout << endl;
        return;
    }

    for (int i = prev + 1; i < visited.size(); i++) {
        if (!visited[i]) {
            visited[i] = true;
            num.push_back(i);
            dfs(num, visited, d + 1, M, i);
            visited[i] = false;
            num.pop_back();
        }
    }
}

int main() {
    int N, M;
    cout << "Enter N and M" << endl;
    cin >> N >> M;

    vector<int> nums;
    vector<bool> visited(N + 1, false);

    dfs(nums, visited, 0, M, 0);

    return 0;
}

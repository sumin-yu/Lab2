#include <iostream>
#include <vector>

using namespace std;

int N, M;
vector<vector<int>> vec;

void dfs(vector<int> candidate, vector<int> current) {
  if (current.size() == M - 1) {
    for (int el : candidate) {
      current.push_back(el);
      vec.push_back(current);
      current.pop_back();
    }
  } else {
    for (int el : candidate) {
      vector<int> next;
      for (int rest : candidate) {
        if (rest > el)
          next.push_back(rest);
      }
      current.push_back(el);
      dfs(next, current);
      current.pop_back();
    }
  }
}

void func(int cnt) {
  vector<int> candidate;
  for (int i = 1; i <= N; i++) {
    candidate.push_back(i);
  }
  vector<int> start;
  dfs(candidate, start);
}

int main() {
  cin >> N >> M;
  func(0);

  for (vector<int> seq : vec) {
    for (int el : seq) {
      cout << el << " ";
    }
    cout << endl;
  }
}
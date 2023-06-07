#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

#include<iostream>
#include<vector>

using namespace std;

int N, M;
vector<int> vec;

void printVec(vector<int> vec)
{
    for (auto& el : vec)
        cout << el << " ";
    cout << endl;
}
void func(int cnt) {
    int arr[8];
    for (int i = 1; i <= N; i++) {
        arr[i - 1] = i;
    }
    if (vec.size() == M) {
        printVec(vec);
        return;
    }
    for (int i = cnt+1; i < N; i++) {
        vec.push_back(arr[i]);
        func(i);
        vec.pop_back();
    }
    return;
}

int main() {
    cin >> N >> M;
    func(-1);
}

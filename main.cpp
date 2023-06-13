#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;
vector<bool> record(9, false);
int counter = 0;

void func(int cnt) {
    if (M == cnt){

        for (int i = 0; i < M; i++){
            int int_0 = vec[i];
            cout << vec[i] << ' ';
        }

        cout << '\n';
        counter++;
        //cout << counter << endl;
        return;
    }
    for (int i = 1; i <= N; i++){
        if (record[i]==true){
            continue;
        }

        record[i] = true;
        vec.push_back(i);
        func(cnt+1);

        vec.pop_back();
        record[i] = false;
    }
}

int main() {
   cin >> N >> M;
   func(0);
   return 0;
}
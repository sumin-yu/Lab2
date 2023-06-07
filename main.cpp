#include<iostream>
#include<vector>

using namespace std;

int N,M;
// int number;
vector<int> vec;

void func(int cnt) {
    if(M == 0){
        for(int i = 0; i < vec.size(); i++){
            cout << vec[i] << " ";
        }
        // number++;
        cout << endl;
        return;
    }

    int min = 0;
    if(!vec.empty())
        min = vec.back();

    for(int i = min + 1; i <= N - M + 1; i++){        // include i in vector, min is the minimum one
        vec.push_back(i);
        M--;
        func(0);

        vec.pop_back();
        M++;
    }
}

int main() {
   cin >> N >> M;
   //number = 0;

   func(0);
   // cout << number << endl;
}

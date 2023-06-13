#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void func(int cnt) {
    vector<int> vec_dup = vec;
    if(vec.size() == M)
    {
        for(auto it = vec.begin(); it!=vec.end(); it++)
        {
            cout << *it << " " ;
        }
        cout << endl;
        return;
    }
    
    if(cnt > N)
        return;
    
    for(int i = cnt + 1; i <= N; i++)
    {
        vec = vec_dup;
        vec.push_back(i);
        func(i);
    }
}

int main() {
   cin >> N >> M;
   func(0);
}



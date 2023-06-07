#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void func(int cnt) {
if(cnt == M){
for(int num : vec){
cout << num << ' ';
}
cout << endl;
return;
}

int s;
if(vec.empty())
	s = 1;
else s = vec.back() + 1;

for(int i = s; i < N + 1; i++){
vec.push_back(i);
func(cnt + 1);
vec.pop_back();
}




}

int main() {
   cin >> N >> M;
   func(0);
   return 0;
}

#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void func(int cnt) {
	if (cnt>N) return;
	if (vec.size()==M) {
		for (int i=0; i<M; i++) cout<<vec[i]<<" ";
		cout<<endl;
		return ;
	}
	vec.push_back(cnt+1);
	func(cnt+1);
	vec.pop_back();
	func(cnt+1);






}

int main() {
   cin >> N >> M;
   func(0);
}

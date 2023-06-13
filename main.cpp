#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void print(vector<int> vec){
	for(int i=0; i<vec.size(); i++){
		cout << vec[i] << ' ';
	}
	cout << endl;
}
void func(int N, int M, int cnt, vector<int> vec){
	if(cnt == M){
		print(vec);
		return;
	}
	for(int i=1; i<=N; i++){
		bool check = false;
		for(int j=0; j<cnt; j++){
			if(vec[j] == i){
				check = true;
				break;
			}
		}
		if(!check){
			if(cnt==0 || vec[cnt-1]<i){
				vec[cnt] = i;
				func(N,M,cnt+1,vec);
			}
		}
	}
}

int main() {
   cin >> N >> M;
   for(int i=0; i<M; i++){
	   vec.push_back(0);
   }
   func(N,M,0,vec);
}

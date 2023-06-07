#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;
bool chk[10] = {false, };


void func(int cnt) {
    
    if(cnt == M){
        for (int i = 0; i < M; i++)
		{
			cout << vec[i] << ' ';
		}
		cout << '\n';
		return;
    }
    else{
        for(int i=1; i<=N; i++){
            if(!chk[i]){
                chk[i] = true;
                vec[cnt] = i;
                func(cnt+1);
                chk[i] = false;
            }
        }
    }
}

int main() {
   cin >> N >> M;
   for(int i=0; i<M; i++){
       vec.push_back(0);
   }
   func(0);
}

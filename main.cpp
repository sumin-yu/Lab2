#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void func(int cnt) {
    for(int i=0;i<M;i++){
        vec.push_back(i+1);
    }
    while(1){
        for(int j=0;j<M;j++){
	    cout << vec[j] << " ";
        }
	cout << endl;
	if(vec[0]==(N-M+1)){
	    return;
	}
	for(int k=1;k<M;k++){
	    if(vec[k]==(N-(M-k-1))){
		vec[k-1]++;
		for(int a=k;a<M;a++){
		    vec[a]=vec[a-1]+1;
		}
		break;
	    }
	    if((k==(M-1))&&(vec[k] != N)){
		vec[k]++;
	    }
	}
    }
}

int main() {
   cin >> N >> M;
   func(0);
}

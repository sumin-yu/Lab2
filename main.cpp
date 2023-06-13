#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void func(int cnt) {
   if(cnt==M){
        for(int i=0;i<M;i++){
            cout<<vec[i]<<" ";
        }
        cout<<endl;
        vec.pop_back();
    }
    else{
        if(cnt==0){

            for(int j=1;j<=N-(M-cnt-1);j++){
                vec.push_back(j);
                cnt++;
                func(cnt);
                cnt--;
            }
        }
        else{
            for(int k=vec[cnt-1]+1;k<=N-(M-cnt-1);k++){
                vec.push_back(k);
                cnt++;
                func(cnt);
                cnt--;
            }
            vec.pop_back();
        }
    }
}

int main() {
   cin >> N >> M;
   func(0);
}

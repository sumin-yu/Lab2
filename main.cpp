#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void func(int cnt) {
   if(cnt==M){
        for(int j=0;j<M;j++){
            cout<<vec[j]<<" ";
        }
        cout<<endl;
        //cnt--;
        vec.pop_back();
    }
    else{
        if(cnt==0){

            for(int i=1;i<=N-(M-cnt-1);i++){
                vec.push_back(i);
                cnt++;
                func(cnt);
                cnt--;
            }
        }
        else{
            for(int i=vec[cnt-1]+1;i<=N-(M-cnt-1);i++){
                vec.push_back(i);
                cnt++;
                func(cnt);
                cnt--;
            }
            //cnt--;
            vec.pop_back();
        }
    }
}

int main() {
   cin >> N >> M;
   func(0);
}

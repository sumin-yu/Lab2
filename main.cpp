#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void func(int cnt) {
   if(vec.size() == M){
      for(int i=0 ; i<vec.size() ; i++){
         if(i == vec.size()-1) cout << vec[i] << endl;
         else cout << vec[i] << " ";
      }
      return;
   }
   for(int i=cnt+1 ;i<=N; i++){
      int numcnt = 0;
      for(int j=0; j<vec.size(); j++){
         if(vec[j]==i) numcnt++;
      }
      if(numcnt==0){
         vec.push_back(i);
         func(i);
         vec.pop_back();
      }
   }
}

int main() {
   cin >> N >> M;
   func(0);
}

#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void func(int cnt) {
   while (vec.size() < M){
      
      
      func(cnt);
   }      
   
   if(vec.size() == M)
      return

}

int main() {
   cin >> N >> M;
   func(0);
}

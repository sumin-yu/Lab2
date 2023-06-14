#include <iostream>
#include <vector>

using namespace std;

vector< vector<int> > combination(int N, int M, int i){
   vector< vector<int> > result;

   for (auto elem : combination(N, M-1, i+1)){
      elem.push_back(i);
   }
   combination(N, M, i+1);

   return result;
}


int main() {
   int N, M;
   cin >> N;
   cin >> M;

   for (auto elem : combination(N, M, 1)){
      for (int i = elem.size()-1; i>=0; i--){
         cout << elem[i] << " ";
      }
      cout << endl;
   }
   

   return 0;
}

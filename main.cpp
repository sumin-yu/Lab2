#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void func(int cnt) {

 if(vec.size()==M){
    for(int i=0; i<M; i++)
            {
                cout<<vec[i]<<" ";
            }
        cout<<endl;
        return;
        }
    for(int i=(cnt+1); i<=N; i++)
    {   
        
        vec.push_back(i);
        func(i);
        vec.pop_back();
        
    }
}



int main() {
   cin >> N >> M;
   func(0);
}

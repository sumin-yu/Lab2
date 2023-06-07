#include <iostream>
#include <vector>

using namespace std;

int N, M;
vector<int> vec;

void next(vector<int> vec, int len, int min, int max){
    if (len==0){
        for (int i=0; i<vec.size(); i++){
            cout<<vec[i]<<" ";
        }
        cout<<endl;
    }
    else{
        for (int i=min;i<=max-len+1;i++){
            vector<int> newvec=vec;
            newvec.push_back(i);
            next(newvec, len-1, i+1, max);       
        }
    }
}

int main(){
    cin>>N>>M;
    next(vec, M, 1, N);
}


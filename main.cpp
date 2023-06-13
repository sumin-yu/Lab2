#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;
bool visited[9];
void func(int cnt) {

	if (cnt == M) {
     	   	bool print = true;
        	for (int i = 0; i < vec.size()-1; i++) {
            		if ((vec[i] - vec[i + 1] > 0)) {
                		print = false;
            		}  
       		}	
        	if (print) {
            		for (int i = 0; i < vec.size(); i++)
                		cout << vec[i] << " ";
            		cout << "\n";
            		return;
        	}
    	}

    	for (int i = 1; i <= N; i++) {
        	if (visited[i])
            		continue;

        	visited[i] = true;
        	vec.push_back(i);

        	func(cnt + 1);
        	visited[i] = false;

        	vec.pop_back();
    	}
}

int main() {
   cin >> N >> M;
   func(0);
}

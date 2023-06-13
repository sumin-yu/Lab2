#include<iostream>
#include<vector>

using namespace std;

int n,m;
int arr[300] = {0,};
bool visit[300] = {0,};


void func(int num, int cnt)
{
    if(cnt == m)
    {
        for(int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }
    for(int i = num; i <= n; i++)
    {
        if(!visit[i])
        {
            visit[i] = true;
            arr[cnt] = i;
            func(i+1,cnt+1);
            visit[i] = false;
        }
    }
}

int main() {
   cin >> n >> m;
   func(1, 0);
}

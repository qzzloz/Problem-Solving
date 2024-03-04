#include<iostream>
#include<algorithm>
#include<queue>
#include<memory.h>
using namespace std;

int n, m, cnt;
int arr[101][101] = {0};
bool visited[101] = {false};

void dfs(int v){
    // printf("%d ", v);
    for(int i=1; i<=n; i++){
        if(!visited[i] && arr[v][i]==1){
            visited[i] = true;
            cnt++;
            dfs(i);
        }
    }
}

int main(){
    scanf("%d", &n);
    scanf("%d", &m);
    int tmp1=0, tmp2=0;

    for(int i=0; i<m; i++){
        scanf("%d %d", &tmp1, &tmp2);
        arr[tmp1][tmp2] = 1;
        arr[tmp2][tmp1] = 1;
    }

    visited[1] = true;
    dfs(1);
    printf("%d", cnt);

    return 0;
}
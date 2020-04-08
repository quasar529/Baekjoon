#include <iostream>
#include <vector>
#include <cstring>
#include <queue>
using namespace std;
using ii=pair<int, int>;
int cnt=0;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
int maze[101][101];
bool visited[101][101];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    memset(visited,0,sizeof(visited));
    int N,M;
    cin>>N>>M;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>maze[i][j];
            if(maze[i][j]==0)
                visited[i][j]=1;
        }
    }
    queue<ii> q;
    q.push(ii(1,1));

    while(!q.empty()){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        for(int d=0;d<4;d++) {
            int nx=x+dx[d];
            int ny=y+dy[d];
            if(0>nx || nx>=N)   continue;
            if(0>ny || ny>=M)   continue;
            if(visited[nx][ny]) continue;
            if(maze[nx][ny])    continue;
            visited[nx][ny]=true;
            q.push(ii(nx,ny));
            cnt++;
        }
    }
    cout<<cnt<<'\n';
    return 0;
}
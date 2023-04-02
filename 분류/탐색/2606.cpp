#include <iostream>
#include <algorithm>

using namespace std;

int connect[101][101] = {0}; 
int virus[101] = {0};
int ans = 0;
int N;

void dfs(int a){
  ans++;
  virus[a] =1;
  for(int i = 1; i <= N; i++){
    if(connect[a][i] && !virus[i])
    dfs(i);
  }
}

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int C;
  int A, B;

  cin >> N >> C;

  for(int i =0; i < C; i++){
      cin >> A >> B;
      connect[A][B] = connect[B][A] = 1;
  }

  dfs(1);
  cout << ans-1;



}
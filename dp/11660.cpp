#include <iostream>


using namespace std;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N, M;
  int x1, y1, x2, y2;
  int a;
  cin >> N >> M;
  int arr[N+1][N+1] = {0,};
  int dp[N+1][N+1] = {0, };
  for(int i =1; i <= N; i++){
    for(int j =1;j <= N; j++){
      cin >> arr[i][j];
      dp[i][j] = dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1] + arr[i][j];
    }
  }
  for(int i =0 ; i < M; i++){
    cin >> x1 >> y1 >> x2 >> y2;
     a =dp[x2][y2] -dp[x1-1][y2] - dp[x2][y1-1] + dp[x1-1][y1-1];
     cout << a <<"\n";
  }
  

}
  
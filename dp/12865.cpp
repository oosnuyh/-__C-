#include <bits/stdc++.h>

using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL); 
  cout.tie(NULL);

  int N, K;
  cin >> N >> K;
  int W[101] ; 
  int V[101] ;
  int dp[101][100001];
  for(int i =1; i <= N; i++){
    cin >> W[i] >> V[i];
  }
  /* dp[i][j] 에서 i는 물건 번호 j는 무게를 의미. 
  dp[i][j] = i개물건을 담은 무게 J의 최대 가치*/
  for(int i =1; i <=N; i++){
    for(int j = 1; j <=K; j++){
      if(j >= W[i] )
        dp[i][j] = max(dp[i-1][j], dp[i-1][j-W[i]]+V[i]);
      else
        dp[i][j] =dp[i-1][j];
    }
  }
  cout << dp[N][K];
}
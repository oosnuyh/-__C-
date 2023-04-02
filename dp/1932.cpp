#include <bits/stdc++.h>

using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);

  int N;

  cin >> N;
  int dp_max = 0;
  int dp[501][501] = {0, };

  for(int i =1; i <= N; i++){
    for(int j =1; j <= i; j++){
      cin >> dp[i][j];
    }
  }
  for(int i =2; i <= N; i++){
    for(int j = 1; j<=i; j++){
      if(j == 1){
        dp[i][j] = dp[i-1][j]+ dp[i][j];
      }
      else if(j == i){
        dp[i][j] = dp[i-1][j-1] + dp[i][j];
      }
      else{
        dp[i][j] = max(dp[i-1][j-1]+dp[i][j], dp[i-1][j]+ dp[i][j]);
      }
    }
  }
  for(int i = 1; i <= N; i++){
    dp_max = max(dp_max, dp[N][i]);
  }
  cout << dp_max;
}
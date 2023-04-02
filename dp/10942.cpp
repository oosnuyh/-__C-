#include <iostream>
#include <algorithm>
#include <vector>
int arr[2001] = {0, };
bool dp[2001][2001] = {false, };
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N, M, S, E;C
  cin >> N;R
  // 자기자신만 있는건 true
  for(int i =1; i<=N; i++){
    cin >> arr[i];
    dp[i][i] = true;
  }
  // 원소 2개있는거에 대한 dp값
  for(int i =1; i < N; i++){ 
    if(arr[i] == arr[i+1])
      dp[i][i+1] = true;
  }
  for(int i = 2; i <N; i++){
    for(int j = 1; i+j <=N; j++){
      if((arr[j] == arr[i+j])&&(dp[j+1][i+j-1] == true))
        dp[j][i+j] = true;
    }
  }
  
  cin >> M;
  for(int i =0; i<M; i++){
    cin >> S >> E;
    cout << dp[S][E] << "\n";
  }

}


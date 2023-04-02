#include <bits/stdc++.h>

using namespace std;

int main(){

  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N;
  cin >> N;
  int line[500] = {0,};
  int a, b;
  for(int i =0; i < N; i++){
    cin >> a >> b;
    line[a] = b;
  }
  int arr[N] ={0, };
  int dp[N+1] ={0,};
  for(int i = 0; i < N; i++){
    for(int j=0; j< 500; j++){
      if(line[j] !=0){
        arr[i] = line[j];
        line[j] =0;
        break;
      }

    }
  }

 /* dp[0] =1;
  for(int i =0; i < N; i++){
    dp[i] = 1;
    for(int j = 0; j < i; j++){
      if(arr[j] < arr[i]){
        dp[i] =max(dp[i] , dp[j]+1);
      }
    }
  
  }*/
  dp[0] =1;
  for(int i =1; i<N; i++){
    int val =0;
    for(int j= 0; j<i; j++){
      if(arr[j] < arr[i]){
        if(val <dp[j]){
          val = dp[j];
        }
      }
    }
    dp[i] = val+1;
  }
  int ans =0;
  for(int i =0; i < N; i++){
    if(ans < dp[i]){
      ans = dp[i];
    }
  }
  cout << N -ans;
}
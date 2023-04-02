#include <bits/stdc++.h>
#define MAX 1000000007
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int  N, M, K;
  cin >> N >> M;
  int arr1[101][101];
  for(int i =0; i < N; i++){
    for(int j =0; j < M; j++){
      cin >> arr1[i][j];
    }
  }
  cin >> M >> K;
  int arr2[101][101];
  for(int i =0; i < M; i++){
    for(int j =0; j < K; j++){
      cin >> arr2[i][j];
    }
  }

  int arr3[101][101];
  for(int i =0; i < N; i++){
    for(int j=0; j < K; j++){
      for(int k =0; k < M; k++){
        arr3[i][j] += arr1[i][k] * arr2[k][j];
      }
      cout << arr3[i][j] << " ";
    }
    cout <<"\n";
  }
}
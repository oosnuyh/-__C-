#include <bits/stdc++.h>

using namespace std;

int white, blue =0;
int arr[128][128];
int N;

void Sol(int x, int y, int N){
  int sum=0;
  int cnt=0;
  for(int i =x; i< x+N; i++){
    for(int j = y; j <y+ N; j++){
     sum += arr[i][j];
     cnt++;
    }
  }
  if(cnt == sum){
    blue++;
    return;
  }
  else if(sum == 0){
    white++;
    return;
  }
  else{
    Sol(x, y, N/2);
    Sol(x, y+N/2, N/2);
    Sol(x+N/2, y, N/2);
    Sol(x+N/2, y+ N/2, N/2);
  }
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> N;
  for(int i = 0; i< N; i++){
    for(int j = 0; j < N; j++){
     cin >> arr[i][j];
    }
  }
  Sol(0,0,N);

  cout << white << "\n" << blue ;
}
 
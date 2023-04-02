#include <bits/stdc++.h>

using namespace std;

string arr[64];
int N;

void Sol(int x, int y, int N){
  for(int i =x; i< x+N; i++){
    for(int j = y; j <y+ N; j++){
     if(arr[i][j] != arr[x][y]){
      cout << "(" ;
      Sol(x, y, N/2);
      Sol(x, y+N/2, N/2);
      Sol(x+N/2, y, N/2);
      Sol(x+N/2, y+ N/2, N/2);
      cout << ")";
      return ;
     }
    }
  }
  cout << arr[x][y];
  
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> N;
  for(int i = 0; i< N; i++){
   cin >> arr[i];
 }
  
  Sol(0,0,N);
}
 
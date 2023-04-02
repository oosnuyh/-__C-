#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio;
  cin.tie(NULL);
  cout.tie(NULL);

  int N,a;
  cin >> N;
  double sum=0;
  int arr[N];
  int avg;
  for(int i =0; i<N; i++){
    cin >> arr[i];
  }
  for(int i =0; i<N; i++){
    sum += arr[i];
  }
  avg = round(sum /N);
  sort(arr, arr+N);

  int max_N = arr[0];
  int min_N = arr[0];
  for(int j =1 ; j < N; j++){
    max_N = max(max_N, arr[j]);
    min_N = min(min_N, arr[j]);
  }

  int t[8001] = {};
  int t_a;
  for(int i =0; i<N; i++){
    t_a = arr[i] +4000;
    t[t_a] += 1;
  }
  int t_max = t[0];
  for(int i =1; i< 8001; i++){
    t_max = max(t_max, t[i]);
  }
  int cnt = 0;
  for(int i =0; i < 8001; i++){
    if(t[i] == t_max){
      cnt++;
    }
  }
  if(cnt >= 2){
    for(int i =0; i < 8001; i++){
    if(t[i] == t_max){
      t[i] = 0;
      break;
      }

    }
  }
  for(int i =0; i < 8001; i++){
   if(t[i] == t_max){
     a = i-4000;
     break;
   }
 } 
  cout << avg << "\n";
  cout << arr[N/2] << "\n";
  cout << a << "\n";
  cout << max_N - min_N ;
}
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);

  int N, C;
  cin >> N >> C;
  int home[200000];
  for(int i =0; i< N; i++){
    cin >> home[i];
  }
  sort(home, home+N);
  int start = 0;
  int end = home[N-1];
  int mid;

   while(end >= start){
    int cnt =1;
    int index =0;
    mid = (start + end)/2;
    for(int i =1; i < N; i++){
      if(home[i] - home[index] >= mid){
         index = i;
         cnt++;
       }
     }
    if(cnt >= C)
      start = mid +1;
    else
      end = mid -1;
  }
  cout << end;
}
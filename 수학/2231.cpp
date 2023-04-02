#include <iostream>


using namespace std;

int main(){
  ios_base::sync_with_stdio;
  cin.tie(NULL);
  cout.tie(NULL);
  int sum;
  int N;
  int j;
  int a = 0;
  cin >> N;
  

  for(int i =1; i < N; i++){
    sum =0;
    j = i;
    while(j != 0){
      sum += (j%10);
      j /= 10;
    }
    if((i+sum) == N){
      a = i;
      break;
    }
  }
  cout << a;

}


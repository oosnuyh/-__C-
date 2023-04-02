#include <iostream>

using namespace std;

int main(){
  int N;
  cin >> N;
  int a = N/5;
  int b = N%5;
  int c;
  while(1){
    if((b%3) == 0){
      c = b /3;
      cout << (a + c);
      break;
    }
    else{
      b += 5;
      a -= 1;
    }
    if(b > N){
      cout << -1;
      break;
    }

  }
}
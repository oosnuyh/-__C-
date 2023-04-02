#include <iostream>
#include <cmath>

using namespace std;

int main(){
  int n, cnt, count = 0;
  while(1){
    cin >> n;
    if(n == 0)
      break;
    for(int i = n+1; i <=n*2; i++){
      cnt = sqrt(i);
      if(cnt == 1 && i != 1){
        count++;
        continue;
      }
      if(i%2){
        for(int j =2;  j <=cnt; j++){
          if (!(i%j))
						break;
					if (j == cnt) {
						count++;
					}
        }
      }
    }
    cout << count << endl;
    count = 0;

  }
}
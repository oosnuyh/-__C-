#include <iostream>
#include <vector>

using namespace std;

vector<int> dp(1000001, 0);
int main()
{
    int N;
    cin >> N;

    dp[2] = 1;
    dp[3] = 1;
    dp[4] = 2;

    for (int i = 5; i <= N; i++) {
        if (i % 2 != 0 && i % 3 != 0)    // 2의 배수도 아니고 3의 배수도 아닌경우에는 선택지가 3번밖에 존재하지 않는다.
            dp[i] = dp[i - 1] + 1;
        else if (i % 2 == 0 && i % 3 == 0)   // 2의 배수이면서 3의 배수일 경우에는 2를 나눈값과 3을 나눈값중에 더 적게 드는 경우의수로 나아간다
            dp[i] = min(dp[i / 2] + 1, dp[i / 3] + 1);
        else if (i % 2 == 0)                // 2의 배수인 경우 2번과 3번 중 더 작은 경우의 수로 나아간다.
            dp[i] = min(dp[i / 2] + 1, dp[i - 1] + 1);
        else if (i % 3 == 0)                // 3의 배수인 경우 1번과 3번 중 더 작은 경우의 수로 나아간다.
            dp[i] = min(dp[i / 3] + 1, dp[i - 1] + 1);
    }
    cout << dp[N];

    return 0;
}
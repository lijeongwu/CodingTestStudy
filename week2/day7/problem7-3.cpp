// 7-3 양꼬치
#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    int answer = 0;
    int service = 0;
    service = n/10; // n을 10을 10으로 나눈 몫 만큼 음료수 서비스가 주어진다

    answer = (n*12000) + ((k-service)*2000);
    return answer;
}
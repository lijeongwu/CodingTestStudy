// 12-4 소인수분해
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    int a = 2;

    while (n != 1)
    {
        if (n % a == 0) // n을 나머지 없이 나누는 a값을 발견한다면
        {
            if(find(answer.begin(),answer.end(),a) == answer.end()) // a값을 찾지 못했다면
            {
                answer.push_back(a); //a를 answer에 입력
            }
            n /= a;     //n값을 a로 나누고 다시 while문 진입
        }
        else
        {
            a++; // 못 찾았다면 a값을 증가시킨다
        }
    }
    return answer;
}
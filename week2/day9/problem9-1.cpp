// 개미 군단
#include <string>
#include <vector>

using namespace std;

int solution(int hp) {
    int answer = 0;
    int general = 0;
    int soldier = 0;
    int work = 0; // 각 계급 개미별 변수를 설정

    general = (hp / 5); // 5로 나눈 몫 만큼의 장군개미
    soldier = ((hp%5)/3); // 5로 나눈 나머지를 3으로 나눈 몫 만큼의 병정개미
    work = ((hp%5)%3); // 5로 나눈 나머지를 3으로 나눈 나머지 만큼의 일개미

    answer = general + soldier + work;

    return answer;
}
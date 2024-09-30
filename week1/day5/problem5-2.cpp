// day5 2.아이스 아메리카노
#include <string>
#include <vector>

using namespace std;

// 잔 수인 cup과 잔돈인 change 변수를 만들어 값을 넣어준다
vector<int> solution(int money) {
    vector<int> answer;
    int cup = money / 5500;     // 몫은 cup
    int change = money % 5500;  // 나머지는 change
    answer.push_back(cup);
    answer.push_back(change);
    return answer;
}
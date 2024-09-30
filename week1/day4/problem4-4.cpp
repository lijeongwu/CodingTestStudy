// day4 4. 배열의 평균값
#include <string>
#include <vector>

using namespace std;

// numbers 배열의 크기만큼 반복하는 반복문을 만들어서 answer에 총 합을 저장한다
double solution(vector<int> numbers) {
    double answer = 0;
    for(int i=0; i<numbers.size(); i++)
    {
        answer += numbers[i];
    }
    answer = answer / numbers.size(); // 총 합을 배열의 크기로 나누어서 평균을 구한 뒤 answer에 입력한다.
    return answer;
}
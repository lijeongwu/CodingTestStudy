//day3 2. 중앙값 구하기
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    sort(array.begin(),array.end()); // array 벡터의 시작주소와 끝주소 전달 후 sort
    int answer = array[(array.size()/2)]; // array의 중앙 값을 찾아 answer에 입력
    return answer;
}
// Day6 4. 문자 반복 출력하기
#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    for (int i=0; i<my_string.size(); i++){
        for (int j=0; j<n; j++){ 
            answer += my_string[i]; //n번 string[i]를 반복해서 answer에 입력
        }     
    }
    return answer;
}
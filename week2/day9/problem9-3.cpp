// 9-3 가위 바위 보
#include <string>
#include <vector>

using namespace std;
// 각 가위바위보를 이길 경우를 계산해 answer 문자열에 입력
string solution(string rsp) {
    string answer = "";

    for(int i=0; i< rsp.size(); i++){
        if(rsp[i] == '2'){
            answer.push_back('0');
        }
        else if(rsp[i] == '0'){
            answer.push_back('5');
        }
        else{
            answer.push_back('2');
        }
    }
    return answer;
}
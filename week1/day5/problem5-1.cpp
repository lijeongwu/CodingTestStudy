// day5 1. 옷가게 할인 받기
#include <string>
#include <vector>

using namespace std;

// 가격대별로 할인가를 빼서 answer에 할당하는 if문 작성
int solution(int price) {
    int answer = 0;
    if(price>=500000)
    {
        answer = price - (price*0.2);
    }
    else if(price>=300000)
    {
        answer = price - (price*0.1);
    }
    else if(price>=100000)
    {
        answer = price - (price*0.05);
    }
    else
    {
        answer = price;
    }

    return answer;
}
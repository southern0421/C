#include <iostream>
using namespace std;
int main()
{
    char name[30];
    cout << "이름을 입력하세요\n";
    //cin >> name;
    cin.getline(name, sizeof(name));
    cout << "구매금액 : \n";
    int caltot, calpoint;
    cin >> caltot;
    calpoint = caltot*0.01;
    cout << name << "님 포인트 적립 : " << calpoint << "점 입니다.\n";
}
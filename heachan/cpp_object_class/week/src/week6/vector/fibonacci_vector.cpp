#include <vector> // 벡터 헤더파일 추가
#include <iostream>
using namespace std;
int main(void)
{ // 초기값 나열
vector<int> fibonacci { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };
for (auto& number : fibonacci) // for(int i=0; i<fibonacci.size();i++)
cout << number << ' ';
cout << endl;
return 0;
}
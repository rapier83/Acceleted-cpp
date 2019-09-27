// Acceleted-cpp.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{

	cout << "Plese Enter some text...";
	string sometext;
	cin >> sometext;

	// output message
	const string greeting = "Hello " + sometext + "!";

	const int pad = 1;

	const int rows = pad * 2 + 3;
	const string::size_type cols = greeting.size() + pad * 2 + 3;

	cout << endl;



	for (int r = 0; r != rows; ++r)
	{
		string::size_type c = 0;

		while (c != cols)
		{
			if (r == pad + 1 && c == pad + 1)
			{
				cout << greeting;
				c += greeting.size(); // greetign 만큼 칼럼 루프 건너뛰기
			}
			else
			{
				if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1) // 맨 가장자리
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
				++c; // 처리가 끝나면 c 를 추가해서 다음 루프로 이어지게 햄
			}
		}
		cout << endl; // while 이 끝날때 마다 - 한 cols가 다 돌 떄 마다 줄바꿈

	}
	
	return 0;

}
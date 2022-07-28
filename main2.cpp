#include <iostream>

void Move(char from, char to)
{
	std::cout << from << " 에서 " << to << "로 옮깁니다." << std::endl;
}

void Hanoi(int n, char from, char temp, char to)
{
	// from = 1번기둥(시작), temp = 2번기둥(임시), to = 3번기둥(끝)

	// base case
	if (n == 1)
	{
		Move(from, to);
		return;
	}

	//recursive case
	Hanoi(n - 1, from, to, temp); // A에서 C를 거쳐 B로
	Move(from, to);				  // A에서 C로
	Hanoi(n - 1, temp, from, to); // B에서 A를 거쳐 C로
}

int main()
{
	Hanoi(5, 'A', 'B', 'C');
}
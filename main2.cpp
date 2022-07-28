#include <iostream>

void Move(char from, char to)
{
	std::cout << from << " ���� " << to << "�� �ű�ϴ�." << std::endl;
}

void Hanoi(int n, char from, char temp, char to)
{
	// from = 1�����(����), temp = 2�����(�ӽ�), to = 3�����(��)

	// base case
	if (n == 1)
	{
		Move(from, to);
		return;
	}

	//recursive case
	Hanoi(n - 1, from, to, temp); // A���� C�� ���� B��
	Move(from, to);				  // A���� C��
	Hanoi(n - 1, temp, from, to); // B���� A�� ���� C��
}

int main()
{
	Hanoi(5, 'A', 'B', 'C');
}
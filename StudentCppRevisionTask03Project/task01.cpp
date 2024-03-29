#include "tasks.h"

/*	Task 01. The sum of the digits of a four-digit number [����� ���� �������������� �����]
*
*	���� ����� ������������� �����. ������� ����� ��� ����.
*
*	����������
*	1) ����� ����� ���� ��� �������������, ��� � �������������.
*	2) ���� ����� ��������� �������������, �� ����� ���������� ���� (���������� ������������� "������ �� ������")
*
*	������ ������� ������ [input]
*	������� ��������� �� ���� ����� ����� ����� � ��������� ���� int.
*
*	������ �������� ������ [output]
*	������� ������ ���������� ���� ����� ����� - ����� �� ������ ��� ���� - � ������ �������� ������
*
*	[ input 1]: 1234
*	[output 1]: 10
*
*	[ input 2]: -9999
*	[output 2]: 36
*
*	[ input 3]: 0
*	[output 3]: 0
*
* 	[ input 4]: 12345
*	[output 4]: 0
*
* 	[ input 5]: -12345
*	[output 5]: 0
*
* 	[ input 6]: -123
*	[output 6]: 6
*
* 	[ input 7]: 12
*	[output 7]: 3
*/

int task01(int number) {
	number = number < 0 ? -number : number;

	if (number > 9999) {
		return 0;
	}

	int sum = 0;

	while (number > 0) {
		sum += number % 10;
		number /= 10;
	}

	return sum;
}
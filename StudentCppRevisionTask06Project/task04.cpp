#include "tasks.h"

/*	Task 04. Chess & Rook [��������� �����]
*
*	��������� ����� (chess rook) ����� ������ �� ����������� ��� ���������.
*	���� ��� ��������� ������ ��������� �����, ����������,
*	����� �� ����� ������� � ������ ������ �� ������ ����� �����.
*
*	����������
*	1) ����� ������� ������� � ����������� ��������, ��������� ���� ��������� �����
*	� ��������� � ������� ��������������� ���������� x � y.
*	2) �� �������� ��� "������ �� ������". ���� ������������ ����� �������� ���������� ������,
*	�� ������� ������ ���������� ��������� �������� false.
*	3) ��� ������� ���������� ���������� � ���� �������������� ��������, �������� ���������,
*	���������� �������� � �������� �������� (?:).
*
*	������ ������� ������ [input]
*	������� ��������� �� ���� ������ ����� �� 1 �� 8 ������,
*	�������� ����� ������� � ����� ������ ������� ��� ������ ������ (x1, y1),
*	� ����� ��� ������ ������ (x2, y2).
*
*	������ �������� ������ [output]
*	������� ������ ���������� ��������� �������� - ��������� �������.
*
*	[ input 1]: 4 4 5 5
*	[output 1]: false
*
*	[ input 2]: 4 4 4 8
*	[output 2]: true
*
*	[ input 3]: -4 4 4 8
*	[output 3]: false
*
*	[ input 4]: 4 4 4 10
*	[output 4]: false
*/

bool task04(int x1, int y1, int x2, int y2) {
	cout << x1 << " - " << y1 << " - " << x2 << " - " << y2 << endl;

	if (x1 < 1 || x1 > 8 || y1 < 1 || y1 > 8
		|| x2 < 1 || x2 > 8 || y2 < 1 || y2 > 8) {
		return false;
	}

	return x1 == x2 && y1 != y2 || x1 != x2 && y1 == y2;
}
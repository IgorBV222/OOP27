#pragma once
class A;  //forward declaration - �� ����� ��������


class B
{
	int _val;
	A* a; //�� ��������� ���� ����� ������ � ��������� �� ����������� 8����, ��� ��������� �� ��������� �.�. ������ ������ � ����������
public:
	B(int val);
};


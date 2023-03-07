#pragma once
class A;  //forward declaration - за ранее объявили


class B
{
	int _val;
	A* a; //по указателю чтоб знать размер у указателя он стандартный 8байт, без указателя не сработает т.к. размер класса А неизвестен
public:
	B(int val);
};


#pragma once
#include <iostream>

using namespace std;

struct Elem {
	int ownerPoints; // ���� �������
	int oppPoints; // ���� ���������
	char Match[10]; // ����
	char Name[20]; // �������
	char Opponent[20]; // ��������

	Elem* left, * right, * parent;
};

class Tree
{
	Elem* root; // ������ ������
public:
	Tree();
	~Tree();
	void Print(Elem*); // ����������� �� ���������� ����
	Elem* Search(Elem*, char*); // ����� ���������� ����
	Elem* Min(Elem*); // ������� �� ���������� ����
	Elem* Max(Elem*); // �������� �� ���������� ����
	Elem* Next(Elem*); // ��������� ����
	Elem* Previous(Elem*); // ���������� ����
	void Insert(Elem*); // ������� ����
	void Del(Elem* = 0); // �������� ���� (0 - �������� ����� ������)
	Elem* GetRoot(); //��������� ����� ������
};


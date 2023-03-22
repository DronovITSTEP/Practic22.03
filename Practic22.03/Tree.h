#pragma once
#include <iostream>

using namespace std;

struct Elem {
	int ownerPoints; // очки хозяина
	int oppPoints; // очки соперника
	char Match[10]; // счет
	char Name[20]; // команда
	char Opponent[20]; // соперник

	Elem* left, * right, * parent;
};

class Tree
{
	Elem* root; // корень дерева
public:
	Tree();
	~Tree();
	void Print(Elem*); // отображение от указанного узла
	Elem* Search(Elem*, char*); // поиск указанного узла
	Elem* Min(Elem*); // минимум от указанного узла
	Elem* Max(Elem*); // максимум от указанного узла
	Elem* Next(Elem*); // следующий узел
	Elem* Previous(Elem*); // предыдущий узел
	void Insert(Elem*); // вставка узла
	void Del(Elem* = 0); // удаление узла (0 - удаление всего дерева)
	Elem* GetRoot(); //получение корня дерева
};


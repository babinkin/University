#pragma once
struct BNode // описывает узел
{
	int data; // элемент данных
	BNode *left, *right; // указатели на сыновей
	BNode(int d, BNode *l = nullptr, BNode *r = nullptr);
};
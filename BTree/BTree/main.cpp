#include "BNode.h"
#include "BTree.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	BNode * p6 = new BNode(6),
		*p5 = new BNode(5),
		*p4 = new BNode(-4),
		*p3 = new BNode(3, p6),
		*p2 = new BNode(2, p4, p5),
		*p1 = new BNode(1, p2, p3);
	BTree t(p1);
	t.print();

	cout << "Число узлов дерева: ";
	cout << t.count() << endl;

	cout << "Умножим данные всех узлов на 3 :";
	t.scale(3);
	cout << endl;
	t.print();

	cout << "Сумма данных всех узлов = ";
	cout << t.sum() << endl;

	cout << "Число узлов с отрицательными данными = ";
	cout << t.count_neg() << endl;

	cout << "Высота дерева = ";
	cout << t.height() << endl;

	cout << "Зеркальное отображение дерева :";
	t.reflect();
	cout << endl;
	t.print();

	cout << "Произведение узлов с двумя сыновьями = ";
	cout << t.mult() << endl;

	cout << "Минимальное значение = ";
	cout << t.min() << endl;

	cout << "Удалим дерево ";
	t.~BTree();
	cout << endl;
	t.print();
	cout << endl;

	cout << "Новое дерево:" << endl;
	BNode * q6 = new BNode(6),
		*q5 = new BNode(0),
		*q4 = new BNode(4),
		*q3 = new BNode(0, q6),
		*q2 = new BNode(2, q4, q5),
		*q1 = new BNode(1, q2, q3);
	BTree g(q1);
	g.print();

	cout << "Удалим все поддеревья узлов равных 0  ";
	cout << endl;
	g.del0();
	g.print();

	return EXIT_SUCCESS;
}
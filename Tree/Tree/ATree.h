#pragma once
#include "ANode.h"

template<class T>
class ATree
{
 private:
	ANode <T> * root; // ������ ������
	void f_print(ANode<T> *p, int d = 0);
 public:
	ATree(ANode<T>*p);
	void print();  // �������� ������
};


#pragma once
#include "ANode.h"

template<class T>
class ATree
{
 private:
	ANode <T> * root; // корень дерева
	void f_print(ANode<T> *p, int d = 0);
 public:
	ATree(ANode<T>*p);
	void print();  // печатает дерево
	ANode<T> * getRoot();
};


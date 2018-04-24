#pragma once
#include "BNode.h"

struct BTree
{
	BNode * root;

	BTree(BNode *p);
	~BTree();

	void print();

	int count();
	void scale(int k);
	int sum();
	int  count_neg();
	int height();
	void reflect();
	int mult();
	int min();
	void del0();

	
private:
	void f_print(BNode *r, int d = 0);
	int f_count(BNode *p);
	void f_scale(BNode *p, int k);
	int f_sum(BNode *p);
	int f_count_neg(BNode *p);
	int f_height(BNode *p);
	void f_reflect(BNode *p);
	int f_mult(BNode *p);
	int f_min(BNode *p);
	void f_del(BNode * & p);
	void f_del0(BNode * &  p);


};

#include "BTree.h"
#include <iostream>
#include <limits>

#define MIN(a,b) ((a) < (b) ? (a) : (b))
#define MAX(a,b) ((a) > (b) ? (a) : (b))

using namespace std;

BTree::BTree(BNode *p) : root(p) {}

void BTree::print() // метод печати
{
	f_print(root); // вызывает рекурсивную функцию
}

int BTree::count() // вычисляет число узлов дерева
{
	return f_count(root);
}

void BTree::scale(int k)
{
	f_scale(root, k);
}
int BTree::sum()
{
	return f_sum(root);
}
int BTree::count_neg()
{
	return f_count_neg(root);
}
int BTree::height()
{
	return f_height(root);
}


void BTree::reflect()
{
	f_reflect(root);
}
int BTree::mult()
{
	return f_mult(root);
}
int BTree::min()
{
	return f_min(root);
}


BTree::~BTree()
{
	f_del(root);
}
void BTree::del0()
{
	f_del0(root);
}


void BTree::f_print(BNode *r, int d)
{
	if (r == nullptr) return;
	f_print(r->right, d + 3);
	for (int i = 0; i<d; i++)
		cout << ' ';
	cout << r->data << endl;
	f_print(r->left, d + 3);
}

int BTree::f_count(BNode *p)
{
	if (p == nullptr)
		return 0;
	return 1 + f_count(p->left) + f_count(p->right);
}

void BTree::f_scale(BNode *p, int k)
{
	if (p == nullptr)
		return;
	p->data *= k;
	f_scale(p->right, k);
	f_scale(p->left, k);
}

int BTree::f_sum(BNode *p)
{
	if (p == nullptr)
		return 0;
	int sum = p->data + f_sum(p->right) + f_sum(p->left);
	return sum;
}

int BTree::f_count_neg(BNode *p)
{
	if (p == nullptr)
		return 0;

	int u = p->data < 0 ? 1 : 0;
	u += f_count_neg(p->right) + f_count_neg(p->left);

	return u;
}
int BTree::f_height(BNode *p)
{
	if (p == nullptr)
		return 0;

	int h = 1 + MAX(f_height(p->right), f_height(p->left));

	return h;
}
void BTree::f_reflect(BNode *p)
{
	BNode *r = 0;
	if (p == nullptr) return;
	if (p != 0)
	{
		r = p->right;
		p->right = p->left;
		p->left = r;

		f_reflect(p->right);
		f_reflect(p->left);
	}
}
int BTree::f_mult(BNode *p)
{
	if (p == nullptr)
		return 0;
	int m;
	if (p->right == nullptr || p->left == nullptr) {
		m = 1;
	}
	else {
		m = p->data * f_mult(p->left) * f_mult(p->right);
	}

	return m;
}
int BTree::f_min(BNode *p)
{
	if (p == nullptr)
		return INT_MAX;
	int min = MIN(f_min(p->left), f_min(p->right));
	min = MIN(p->data, min);
	return min;
}

void BTree::f_del(BNode * & p) {
	if (p == nullptr)
		return;
	f_del(p->left);
	f_del(p->right);
	delete p;
	p = nullptr;
}

void BTree::f_del0(BNode * &  p)
{
	if (p == nullptr)
		return;

	if (p->data == 0)
	{
		f_del(p);
	}
	else
	{
		f_del0(p->right);
		f_del0(p->left);
	}


}


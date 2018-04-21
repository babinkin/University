#include "ANode.h"

template<class T>
ANode<T>::ANode(T dd, ANode<T> *d = nullptr, ANode<T> *r = nullptr) {
	data = dd;
	right = r;
	down = d;
}

template <class T>
int ANode<T>::sonsCount()
{
	ANode<T> *p = this;
	int c = 0;
	if (p == nullptr) return c;
	p = p->down;
	while (p != nullptr)
	{
		c++;
		p = p->right;
	}
	return c;
}
template <class T>
int ANode<T>::grandsonsCount()
{
	ANode<T> *p = this;
	int c = 0;
	if (p == nullptr) return c;
	p = p->down;
	while (p != nullptr)
	{
		c += p->sonsCount();
		p = p->right;
	}
	return c;
}
template ANode<int>;

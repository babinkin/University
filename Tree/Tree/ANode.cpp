#include "ANode.h"

template<class T>
ANode<T>::ANode(T dd, ANode<T> *d = nullptr, ANode<T> *r = nullptr) {
	data = dd;
	right = r;
	down = d;
}

template ANode<int>;
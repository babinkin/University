#include "ATree.h"

template<class T>
ATree<T>::ATree(ANode<T>*p)
{
	root = p;
}

template<class T>
void ATree<T>::print()
{
	f_print(root); // �������� ������

}

template <class T>
void ATree<T>::f_print(ANode<T> *p, int d = 0) // d - ��������
{
	if (p == nullptr) return;
	for (int i = 0; i < d; i++)
		cout << ' ';
	cout << p->data << endl;
	f_print(p->down, d + 3);
	f_print(p->right, d);
}


template ATree<int>;

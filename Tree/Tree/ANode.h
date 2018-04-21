#pragma once
#include <iostream>
#include <cstdlib>
using namespace std;

template<class T>
struct ANode
{
	T data;
	ANode<T> *down, *right;


	ANode(T dd, ANode<T> *d = nullptr, ANode<T> *r = nullptr);
};
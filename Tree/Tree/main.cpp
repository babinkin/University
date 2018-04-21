#include <iostream>
#include <cstdlib>
#include "ANode.h"
#include "ATree.h"
using namespace std;


int main()
{

	ANode <int> *p10 = new ANode <int>(10),
	*p9 = new ANode <int>(9, nullptr, p10),
	*p8 = new ANode <int>(8, nullptr, p9),
	*p7 = new ANode <int>(7),
	*p6 = new ANode <int>(6, nullptr, p7),
	*p5 = new ANode <int>(5),
	*p4 = new ANode <int>(4, p8),
	*p3 = new ANode <int>(3, p6, p4),
	*p2 = new ANode <int>(2, p5, p3),
	*p1 = new ANode <int>(1, p2);

	ATree <int> groot(p1);
	groot.print();

}

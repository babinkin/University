#pragma once
struct BNode // ��������� ����
{
	int data; // ������� ������
	BNode *left, *right; // ��������� �� �������
	BNode(int d, BNode *l = nullptr, BNode *r = nullptr);
};
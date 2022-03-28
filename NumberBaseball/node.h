#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#define length 4
#define range 10           //1~���� n������ ������ ����=range
using namespace std;
class node
{
private:
	vector<int*>possible; //��������
	vector<vector<int>>indicator;//�ƿ���ǥ
	int *indicatorindex;     //�ƿ���ǥ �ε���
	int *answer;  //��������
	int *outrange; //���������
	int inrange_size;  //������Ұ���
	int combination_count(int n, int r);   // ���� ���� ���ϱ�
	int permutation_count(int n, int r);   // ���� ���� ���ϱ�
	int floating_count(int n, int r);      // Ư������
	int totalpossible();
	node(int* answer, int* outrange, int inrange_size, int stage);    //�ʱ�ȭ (�Ѹ����)
public:
	void printer();
	void arrmaker(node &object, int strike, int ball, int out);      //�������ջ����Լ�  (Ž�� �Ϸ��� �������)
	void arrmaker(int strike, int ball, int out);  //�������ջ����Լ�      (���ӽ���)
	void treemaker();                      // Ʈ�� ������
	node(int *answer, int *outrange, int inrange_size);    //�ʱ�ȭ 
	~node();

};

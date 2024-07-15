#include <iostream>
#include <vector>
#include <algorithm>
#include "BPT.h"

int main() {
	BPlusTree<int> tree(5);
	vector<int> nums1 = { 1,4,3,2,7,8,6,10,9,13,12,16,15,18,19,11,20,17,5,14 };
	for (int i = 0; i < nums1.size(); i++) {
		tree.insert(nums1[i]);
		cout << "����" << nums1[i] << endl;
		tree.printTree();
	}
	int m;
	cout << "���������������ֵ" << endl;
	cin >> m;
	tree.insert(m);
	tree.printTree();
	cout << "����������ɾ����ֵ" << endl;
	int x = 0;
	cin >> x;
	tree.myDelete(x);
	tree.printTree();
	int u = 0;
	cout << "������������ҵ�ֵ" << endl;
	cin >> u;
	tree.findh(u);
	return 0;
}

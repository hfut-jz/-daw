#include <iostream>
#include <vector>
#include <algorithm>
#include "BPT.h"

int main() {
	BPlusTree<int> tree(5);
	vector<int> nums1 = { 1,4,3,2,7,8,6,10,9,13,12,16,15,18,19,11,20,17,5,14 };
	for (int i = 0; i < nums1.size(); i++) {
		tree.insert(nums1[i]);
		cout << "插入" << nums1[i] << endl;
		tree.printTree();
	}
	int m;
	cout << "请输入您想输入的值" << endl;
	cin >> m;
	tree.insert(m);
	tree.printTree();
	cout << "请输入你想删除的值" << endl;
	int x = 0;
	cin >> x;
	tree.myDelete(x);
	tree.printTree();
	int u = 0;
	cout << "请输入你想查找的值" << endl;
	cin >> u;
	tree.findh(u);
	return 0;
}

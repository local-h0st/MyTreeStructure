#ifndef MYTREECLASS_H
#define MYTREECLASS_H
#include<string>
using namespace std;

class MyTreeNode {
public:
	MyTreeNode(int varintt, string varstrr);
	bool bindOrigin(MyTreeNode* pOri);//Ӧ����˫��󶨣�Ҳ���ǵ�һ��ָ���Լ���pOrigin���ڶ�����OriginNode��ָ���ýڵ�ΪpLeft����pRight,Ĭ��ָ��Ϊ��
	bool setOrigin(MyTreeNode* pOri);
	bool setKidNode(MyTreeNode* pKid);
	MyTreeNode* getOrigin();
	MyTreeNode* getLeft();
	MyTreeNode* getRight();
	void setLeftNull();
	void setRightNull();
	int getVarint();
	string getVarstr();
private:
	int varint;
	string varstr;
	MyTreeNode* pOrigin;
	MyTreeNode* pLeft;
	MyTreeNode* pRight;
};

#endif

#ifndef HANDLER_H
#define HANDLER_H
#include "MyTreeClass.h"
class Handler {
public:
	Handler(MyTreeNode* root);
	void movTop();	//success
	void movLeft();	//success
	void movRight();//success
	bool giveMeANewNode(int varintt, string varstrr);	//success
	int getDepth();	//success
	void getMe();	//success
	void backToRoot();//success
	void deleteFromThisNode();
	void deleteAllExceptForRoot();
	bool checkIfTheKidNodesAreBothNULL();
	bool deleteCurrentNode();	//��Ҫ����ʹ�ã�������currentPos����ĩһ����ߵ����ڶ�������ã�������ֻ��Ϊ�˸���deleteAll������������
	void moveToOneBottomNode();	//WRONG!!!!!!!!!!Ҳ��Ϊ��������
	void printTreeInAnUglyForm();
private:
	int depth;
	MyTreeNode* rootPos;
	MyTreeNode* currentPos;
	MyTreeNode* previousPos;
};

#endif
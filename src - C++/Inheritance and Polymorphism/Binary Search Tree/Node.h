#ifndef NODE_H
#define NODE_H

class Node {
public:
	Node()
		: _left(NULL), _right(NULL) {}
	Node(int val);
	Node(int val, Node l, Node r);
	~Node();
	
	int getValue();
	Node* getLeft();
	Node* getRight();
private:
	Node* _left;
	Node* _right;
	int _value;
};

#endif // NODE_H
#include "node.h"

node* insert(node* p_tree, int key);
node* search(node* p_tree, int key);
void destroyTree(node* p_tree);
node* remove(node* p_tree, int key);
node* findMax(node* p_tree);
node* removeMaxNode(node* p_tree, node* max_node);
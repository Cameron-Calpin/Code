#include <iostream>
#include <stdlib.h> 
 
using namespace std;
 
struct node {
    int value;
    node* next;
};
 
int main(int argc, char** argv) {
    node* head = new node;
    node* scan = head;
    for(int i = 0; i < 20; i++) {
        scan->value = rand() % 100;
        scan->next = new node;
        scan = scan->next;
    }
    
    scan = head;
    while((scan = scan->next) != NULL) {
        cout << scan->value << endl;
    }
	return 0;
}
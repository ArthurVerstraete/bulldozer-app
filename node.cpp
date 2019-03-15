#include "node.h"

Node::Node(int data) {
    this->data = data;
}

void Node::set_next(Node *node) {
    this->next = node;
}

Node * Node::get_next(void) {
    return next;
}

int Node::get_data(void) {
    return data;
}
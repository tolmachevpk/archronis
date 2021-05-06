#include "../Headers/node.h"

Node::Node(const int &offset, const int &length, const char &next) {
    this->offset = offset;
    this->length = length;
    this->next = next;
    this->next_node = nullptr;
}
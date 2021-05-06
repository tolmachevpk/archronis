#ifndef ARCHRONIS_NODE_H
#define ARCHRONIS_NODE_H

struct Node {
    Node(const int &offset, const int &length, const char &next);
    int offset;
    int length;
    char next;
    Node *next_node;
};

#endif //ARCHRONIS_NODE_H

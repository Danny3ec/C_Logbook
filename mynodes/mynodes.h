// Example of macros for a llinked list
#define DECLARE_NODE_TYPE(type) \
    struct type##_Node {
        type data;
        struct type##_Node* next;
    }

DECLARE_NODE_TYPE(int);

//Usage in a C program
#incude <stdio.h>

int main() {
    struct int_Node my Node;
    myNode.data = 42;
    myNode.next = NULL;

    printf("Data: %d\n" , myNode.data);
    return 0;
}

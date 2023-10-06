Problem Link: https://www.hackerrank.com/challenges/insert-a-node-at-the-head-of-a-linked-list/problem?isFullScreen=true

//----------------------------------------------------------SOlution-------------------------------------------------------------//

SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    // Create a new node
    SinglyLinkedListNode * newNode = new SinglyLinkedListNode(data);
        newNode->data = data;
        newNode->next = llist;
        llist=newNode;
    return llist;
}
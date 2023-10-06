Problem Link: https://www.hackerrank.com/challenges/insert-a-node-at-the-tail-of-a-linked-list/problem?isFullScreen=true

//------------------------------------------------------Solution-----------------------------------------------------------------//

SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    // Create a new node
	SinglyLinkedListNode * newNode = new SinglyLinkedListNode(data);
    // If the Linked List is empty, make the new node as the
    // head and return
    if(!head){
        head = newNode;
    }
    // Else traverse till the last node
    else{
        // Store the head reference in a temporary variable
        SinglyLinkedListNode * current = head;
        while(current->next){
            current=current->next;
        }
        // Change the next pointer of the last node to point to
        // the new node
        current->next=newNode;
    }
    return head;
}
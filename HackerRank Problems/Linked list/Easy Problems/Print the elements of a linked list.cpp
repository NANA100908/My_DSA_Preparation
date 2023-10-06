Problem Link: https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list/problem?isFullScreen=true

//---------------------------------------------------------Solution-------------------------------------------------------------//
void printLinkedList(SinglyLinkedListNode* head) {
    SinglyLinkedListNode * temp = head;
    while(temp != nullptr){
        cout << temp->data << endl;
        temp = temp->next;
    }
}
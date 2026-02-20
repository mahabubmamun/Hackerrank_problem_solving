DoublyLinkedListNode* reverse(DoublyLinkedListNode* llist) {
    auto curr = llist;
    // DoublyLinkedListNode *newNode = new DoublyLinkedListNode(0);
    stack<int>st;
    // int count = 0;
    while(curr != NULL)
    {
        st.push(curr->data);
        // count++;
        curr = curr->next;
    }
    DoublyLinkedListNode *new_head = new DoublyLinkedListNode(st.top());
    st.pop();
    DoublyLinkedListNode *newCurr = new_head;
    while(!st.empty())
    {
        DoublyLinkedListNode *newNode = new DoublyLinkedListNode(st.top());
        st.pop();
        newCurr->next = newNode;
        newCurr->prev = newCurr;
        newCurr = newNode;
    }
    return new_head;
}

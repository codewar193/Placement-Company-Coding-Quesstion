 ListNode<int>* solution(ListNode<int>* l1, ListNode<int>* l2) {
    ListNode<int> dummy(0); // Create a dummy node to simplify the merging logic
    ListNode<int>* current = &dummy; // Initialize a pointer to the dummy node

    while (l1 && l2) {
        if (l1->value < l2->value) {
            current->next = l1;
            l1 = l1->next;
        } else {
            current->next = l2;
            l2 = l2->next;
        }
        current = current->next;
    }

    // Append any remaining elements from l1 or l2
    if (l1) {
        current->next = l1;
    }
    if (l2) {
        current->next = l2;
    }

    return dummy.next; // Return the merged list starting from the next of the dummy node
}

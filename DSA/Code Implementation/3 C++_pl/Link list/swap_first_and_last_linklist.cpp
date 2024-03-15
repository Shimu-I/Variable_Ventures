

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};




//this one is much easier

Node* exchange(Node* last) {
    if (last == nullptr || last->next == last) {
        return last;
    }

   Node* head = last->next;
    last->next = head->next;
    head->next = last;

    return head;
}

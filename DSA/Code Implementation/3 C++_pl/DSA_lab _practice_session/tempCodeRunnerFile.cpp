int insertAtanyPosition(Node* &head, Node* &tail, int data, int pos){
        if( pos  == 1){
            insertFirst( head, tail, data);
            return 0;
        }

        Node* newNode = new Node(data) ;
        Node* temp = head;
        Node* preee;
        int count = 1;

        while( count < pos-1){
           
           temp = temp -> next;
            count++;
        }
            newNode -> next = temp -> next ;
            temp -> next -> pre = newNode -> next;
            temp -> next = newNode -> pre;
            newNode -> pre  = temp ;


    if( temp -> next == NULL ){
            insertLast(head, tail, data);
            return 0;
    }


}
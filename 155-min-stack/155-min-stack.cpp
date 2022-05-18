class MinStack {
    struct Node{
        int data;
        int Min;
        Node *next;
    };
    
    Node *head;
public:
    MinStack() {
        head=NULL;
    }
    
    void push(int val) {
        Node *ptr=new Node;
        ptr->data=val;
        ptr->next=NULL;
    
        
        if(head==NULL)
        { 
            head = ptr;
            ptr->Min=val;
        }
        else
        {
            if(head->Min>val)
                ptr->Min=val;
            else 
                ptr->Min=head->Min;
            
            ptr->next=head;
            head=ptr;
        }
    }
    
    void pop() {
        head=head->next;
    }
    
    int top() {
        return head->data;
    }
    
    int getMin() {
        return head->Min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
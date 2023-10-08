class Solution
{
public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node *head, int data)
    {
        // Code here
        Node *p = new Node(data);
        // created new node

        Node *x = head;

        if (data < x->data)
        { // for first node
            p->next = head;
            return p;
        }
        Node *temp = x;
        x = x->next;
        while (x)
        { // for nodes except last
            if (data <= x->data)
            {
                temp->next = p;
                p->next = x;
                return head;
            }
            x = x->next;
            temp = temp->next;
        }
        temp->next = p; // for last node
        return head;
    }
};
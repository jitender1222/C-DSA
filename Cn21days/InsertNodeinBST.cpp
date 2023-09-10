Node *insert(Node *node, int data)
{

    if (node == NULL)
    {
        Node *newnode = new Node(data);
        return newnode;
    }

    if (node->data > data)
        node->left = insert(node->left, data);

    else if (node->data < data)
        node->right = insert(node->right, data);

    return node;
}

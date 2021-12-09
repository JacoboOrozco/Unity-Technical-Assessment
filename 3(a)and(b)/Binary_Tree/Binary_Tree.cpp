// Binary_Tree.cpp : Author Jacobo Orozco Ardila
//On this ocation I shall create a Binary Tree, using similar methods to the previous point, in which I created a doubly-linked list
//Though I shall provide some code variation as to show not to be a one trick pony.

#include <iostream>

//Binary tree node is a structure with three fields
struct Binary_Tree_Node
{
    //The first field is a char type variable which will contain the data that will be saved on each separate node of the tree
    char data;
    //The second field is a pointer to the left child of any given node, if any, if the node has no left child the pointer shall point to NULL
    Binary_Tree_Node* left_child;
    //The third field is a pointer to the right child of any given node, if any, if the nod ehas no right child the pointer shall point to NULL
    Binary_Tree_Node* right_child;
};

//This function will allocate the node into dynamic memory so it's not lost after function execution
Binary_Tree_Node* Get_New_Node(char data)
{
    //In order to create the new node in heap we shall use NEW instead of malloc. The result is the same, we are using dynamic memory
    //as to not loose the information after the function execution
    Binary_Tree_Node* new_node_pointer = new Binary_Tree_Node();
    //Inserting the data into the new node
    (*new_node_pointer).data = data;
    //Since the organization of the left and right child node pointers shall be constructed on the 
    //Insert function, we shall point them both to NULL for the moment.
    (*new_node_pointer).left_child = NULL;
    (*new_node_pointer).right_child = NULL;
    //Return the new node address
    return new_node_pointer;

}

//This function will insert the data into a new node
Binary_Tree_Node* Insert(Binary_Tree_Node* root, char data)
{
    //Fist scenario is that the tree is empty
    if (root == NULL)
    {
        root = Get_New_Node(data);
        
    }
    //The second scenario is the tree is not empty
    //In order to decide which child will be left or right we simply state that if the data is smaller or equal to the root data
    //then it will be the left child
    else if (data <= root->data)
    {
        //Here we assing the data and create the link between the root and the left child
        root->left_child = Insert(root->left_child, data);

    }
    else
    {
        //Here we assing the data and create the link between the root and the right child
        root->right_child = Insert(root->right_child, data);
    }
    return root;
}

//This function will confirm is char is located in the tree
bool Search(Binary_Tree_Node* root, char data)
{
    //If the tree is empty evidently the char will not exists in the tree
    if (root == NULL) return false;
    //If the data is located on the root node then we return true since it has been found
    else if (root->data == data) return true;
    //If the data is not on the root node, we start recursively searching on the left side of the tree
    else if (data <= root->data) return Search(root->left_child, data);
    //If the data is not on the root and not on the left side of the tree, we search on the right side of the tree
    else return Search(root->right_child, data);
}

int main()
{
    //Creatingan empty tree
    Binary_Tree_Node* root = NULL;
    root = Insert(root, 'U');
    root = Insert(root, 'N');
    root = Insert(root, 'I');
    root = Insert(root, 'T');
    root = Insert(root, 'Y');

    if (Search(root, 'T') == true) printf("Found\n");
    else printf("Not found\n");
}



// Doubly-Linked List.cpp :Author Jacobo Orozco Ardila.
// A doubly linked list consists of a list of nodes, since the items of a list are not necessarily stored in a contiguous way in memory
// it is necessary to create set nodes, which basically contain three elements, a pointer to the previous node, the data stored in that
// position on the list, and a pointer to the next node. This way we always have the data in the correct position, and we know who came before 
// and who comes after.

#include <iostream>


//Node is a structure with three fields
struct Node
{
    //The first field is a char type variable which will contain the data that will be saved on each node
    char data;
    //The second field is a pointer to the next node, if the node is the last node it will be a pointer to 0 or null
    struct Node* next_node_pointer;
    //The third field is a pointer to the previous node, if the node is the first node it will be a pointer to 0 or null
    struct Node* prev_node_pointer;
};


//Global variable - pointer to head node (beggining of list).
struct Node* head;


struct Node* Get_New_Node(char info)
{
    //In order to avoid creating the node as a local variable so that it's not in stack memory and therefore lost after the 
    //function execution I made use of malloc, so that it's created on the heap section of memory
    struct Node* new_node_pointer = (struct Node*)malloc(sizeof(struct Node));
    //Inserting the data into the new node
    new_node_pointer->data = info;
    //Since the organization of the previous and next node pointers shall be constructed on the 
    //Insert_At_Head function, we shall point them both to NULL for the moment.
    new_node_pointer->prev_node_pointer = NULL;
    new_node_pointer->next_node_pointer = NULL;
    //Return the new node address
    return new_node_pointer;
}


void Insert_At_Head(char info)
{
    struct Node* new_node_pointer = Get_New_Node(info);
    //There are basically 2 options
    //Either the list is empty, in which case the head will be pointing to NULL
    if (head == NULL)
    {
        //As the list is empty I simply point the head at the new node
        head = new_node_pointer;
        return;
    }
    //Here I take the existing head node and place the new node's address in the prevoius node pointer of the head node
    head->prev_node_pointer = new_node_pointer;
    //Here I take the new node I just created and insert the head node's address in the next node pointer of the new node I just created
    new_node_pointer->next_node_pointer = head;
    //Finally after the previous and next node's are referenced I make the new node I just created the head of the list
    head = new_node_pointer;
}

//In order to confirm that everything is working
//We must see the list to note if the next node pointer of each node is correct and corresponds to the actual list positioning
void Print_List()
{
    struct Node* temp = head;
    printf("Forward: ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next_node_pointer;
    }
    printf("\n");
}

//In order to confirm that everything is working
//We must see the list in reverse to note if the previous node pointer of each node is correct and corresponds to the actual list positioning
void Reverse_Print_List()
{
    struct Node* temp = head;
    //If the list is empty
    if (temp == NULL) return;
    //Going to the last node
    while (temp->next_node_pointer != NULL)
    {
        temp = temp->next_node_pointer;
    }
    //Traversing backward using previous pointer
    printf("Reverse: ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->prev_node_pointer;
    }
    printf("\n");
}

int main()
{
    //Empty list
    head = NULL;
    Insert_At_Head('U'); Print_List(); Reverse_Print_List();
    Insert_At_Head('N'); Print_List(); Reverse_Print_List();
    Insert_At_Head('I'); Print_List(); Reverse_Print_List();
    Insert_At_Head('T'); Print_List(); Reverse_Print_List();
    Insert_At_Head('Y'); Print_List(); Reverse_Print_List();
}

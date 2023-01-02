
struct s_Node
{
    int data;
    struct s_Node *next;
};
typedef struct s_Node Node;


void print_list(Node* head);

Node* insert_head(Node* head, int new_node_data);

Node* remove_kth_node(Node* head, int index);
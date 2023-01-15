#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))

struct Node {
  int data;
  struct Node* left;
  struct Node* right;
};


struct Node* get_new_node(int data){
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  new_node->data = data;

  new_node->left = new_node->right = NULL;

  return new_node;
}

struct Node* insert(struct Node* root, int data){
  if(root == NULL){ // empty tree
    root = get_new_node(data);
  } else if(data <= root->data){
    root->left = insert(root->left, data);
  } else root->right = insert(root->right, data);

  return root;
}

int search(struct Node* root, int data){
  if(root == NULL) return 0;
  else if(root->data == data) return 1;
  else if(data <= root->data) return search(root->left, data);
  else return search(root->right, data);
}

struct Node* find_min_iterative(struct Node* root){
  if(root == NULL){
    puts("Error: The tree is empty");
    return NULL;
  }

  while(root->left != NULL)
    root = root->left;

  return root;
}

int find_min_recursive(struct Node* root){
  if(root == NULL){
    puts("Error: The tree is empty");
    return -1;
  } else if(root->left == NULL) return root->data;
  else return find_min_recursive(root->left);
}

int find_max_iterative(struct Node* root){
  if(root == NULL){
    puts("Error: The tree is empty");
    return -1;
  }

  while(root->right != NULL) root = root->right;

  return root->data;
}

int find_max_recursive(struct Node* root){
  if(root == NULL){
    puts("Error: The tree is empty");
    return -1;
  } else if(root->right == NULL) return root->data;
  else return find_max_recursive(root->right);
}

int find_height(struct Node* root){
  if(root == NULL) return -1;

  return MAX(find_height(root->right), find_height(root->left))+1;
}

void preorder(struct Node* root){
  if(root == NULL) return;
  
  printf("%d ", root->data);
  preorder(root->left);
  preorder(root->right);
}

void inorder(struct Node* root){
  if(root == NULL) return;

  inorder(root->left);
  printf("%d ", root->data);
  inorder(root->right);
}

void postorder(struct Node* root){
  if(root == NULL) return;

  postorder(root->left);
  postorder(root->right);
  printf("%d ", root->data);
}

void show_orders(struct Node* root){
  puts("Preorder");
  preorder(root);
  printf("\n");
  printf("\n");

  puts("Inorder");
  inorder(root);
  printf("\n");
  printf("\n");
  
  puts("Postorder");
  postorder(root);
  printf("\n");
  printf("\n");
}

int is_bst_util(struct Node* root, int min, int max){
  if(root == NULL) return 1;
  if(root->data > min && root->data < max &&
      is_bst_util(root->left, min, root->data) && is_bst_util(root->right, root->data, max)) return 1;
  else return 0;
}

int is_bst(struct Node* root){
  return is_bst_util(root, INT_MIN, INT_MAX);
}

struct Node* find_min(struct Node* root){
  if(root == NULL) return NULL;

  while(root->left != NULL) root = root->left;
  return root;
}

struct Node* delete(struct Node* root, int data){
  if(root == NULL) return NULL;
  else if (data < root->data) root->left = delete(root->left, data);
  else if (data > root->data) root->right = delete(root->right, data);
  else {
    // Case 1: No child
    if(root->left == NULL && root->right == NULL){
      free(root);
      root = NULL;
    }

    // Case 2: One child
    else if(root->left == NULL){
      struct Node* tmp = root;
      root = root->right;
      free(tmp);
    } else if(root->right == NULL){
      struct Node* tmp = root;
      root = root->left;
      free(tmp);
    }
    
    // Case 3: Two children
    else {
      struct Node* tmp = find_min_iterative(root->right);
      root->data = tmp->data;
      root->right = delete(root->right, tmp->data);
    }

  }

  return root;
}

struct Node* find(struct Node* root, int data){
  if(root == NULL) return NULL;

  if(root->data == data) return root;
  else if(data <= root->data) return find(root->left, data);
  else return find(root->right, data);
}


struct Node* get_successor(struct Node* root, int data){
  struct Node* current = find(root, data);
  if(current == NULL) return NULL;

  // Case 1: Node has a right subtree
  if(current->right != NULL) return find_min(current->right);

  // Case 2: No right subtree
  else {
    struct Node* successor = NULL;
    struct Node* ancestor = root;
    while(ancestor != current){
      if(current->data < ancestor->data){
        successor = ancestor;
        ancestor = ancestor->left;
      } else ancestor = ancestor->right;
    }

    return successor;
  }
}

int main(void){
  struct Node* root;
  root = NULL;

  root = insert(root, 15);
  insert(root, 10);
  insert(root, 20);
  insert(root, 25);
  insert(root, 8);
  insert(root, 12);

  /*
  int n = 0;
  printf("Type a number to be searched: ");
  scanf("%d", &n);

  if(search(root, n)) puts("Found");
  else puts("Not found");
  */

  printf("Min value: %d\n", find_min_recursive(root));
  printf("Max value: %d\n", find_max_recursive(root));
  printf("Height: %d\n", find_height(root));
  printf("Is a BST: %d\n", is_bst(root));

  printf("\n");
  puts("DELETION");
  delete(root, 25);
  delete(root, 8);
  inorder(root);
  printf("\n");


  struct Node* s;
  s = get_successor(root, 10);
  if(s != NULL)
    printf("Successor of 10: %d\n", s->data);

  return 0;
}

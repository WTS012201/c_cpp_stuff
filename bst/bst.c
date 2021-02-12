#include <stdlib.h>
#include <stdio.h>

struct Node{
	int val;
	struct Node* left;
	struct Node* right;
};
typedef struct Node node_type;

node_type* initRoot(int val){
	node_type* root = malloc(sizeof(node_type));
	root -> val = val;
	root -> right = NULL;
	root -> left = NULL;
	return root;
}

void printRoot(node_type* root){
	printf("root val: %d\n", root->val);
}

void addNode(node_type* root, int val){
	node_type* temp = malloc(sizeof(node_type));
	temp -> val = val;
	temp -> right = NULL;
	temp -> left = NULL;
	node_type* prev  = root;
	node_type* curr;
	while(curr != NULL){
		prev = curr;
		if(curr -> val > val){
			curr = curr -> left;
		}
		else{
			curr = curr -> right;
		}
	}
	if(prev -> val > val){
		prev -> left = temp;
	}
	else{
		prev -> right = temp;
	}
}
int main(){
	node_type* root = initRoot(0);
	int i;
	for(i = 0; i < 5; i++){
		addNode(root, i);
	}
	return 0;
}

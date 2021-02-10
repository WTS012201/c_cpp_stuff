#include <stdio.h>
#include <stdlib.h>

struct Node{
	int val;
	struct Node *next;
};
typedef struct Node node_type;

void addNodeToHead(node_type **head, int val){
	node_type* temp = malloc(sizeof(node_type));
	temp->val = val;
	temp->next = *head;
	*head = temp;
}

void printList(node_type *head){
	node_type *temp = head;
	int i = 0;
	while(temp!=NULL){
		printf("node: %d val: %d\n", i, temp->val);
		temp = temp->next;
		i++;
	}
}
void addNodeToTail(node_type *head, int val){
	node_type *newNode = malloc(sizeof(node_type));
	newNode->val = val;
	newNode->next = NULL;
	node_type *temp = head;
	while(temp->next!=NULL){
		temp = temp->next;
	}
	temp->next = newNode;
}
void rmNode(node_type **head, int node){
	node_type *prev = *head;
	node_type *curr = prev->next;
	if(curr == NULL || node == 0){
		*head = NULL;
		return;
	}
	while(node > 1 && curr->next != NULL){
		prev = curr;
		curr = curr->next;
		node--;
	}
	prev->next = curr->next;
	return;

}
int main(){
	node_type *list = malloc(sizeof(node_type));
	list->val = 0;
	list->next = NULL;
	int i;
	for(i=1; i<=10; i++){
		addNodeToTail(list, i);
	}
	printList(list);
	printf("Delete node: ");
	int x;
	scanf("%d", &x);
	rmNode(&list, x);
	printf("After Deletion\n");
	printList(list);
	return 0;
}

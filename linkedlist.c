#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *link;
	
};
struct node *head,*newnode,*temp;

int main(){
	int i,n;
	
	head =0;
	printf("enter number of nodes :");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("enter data :");
		scanf("%d",&newnode->data);
		newnode->link=0;
		
		if(head ==0){
			
		head =temp=newnode;
		}
		else{
			temp->link=newnode;
			temp=newnode;
		}
		
	
	}
	temp=head;
	while(temp!=0){
		
		printf("\t%d->",temp->data);
		temp=temp->link;
	}
	   int ch;
    
    
        printf("\nOperations on singly linked list\n");
        
        printf("\n1.Insert node at first");
        printf("\n2.Insert node at last");
        printf("\n3.Insert node at position");
        printf("\n4.Delete Node from any Position");
        printf("\n5.Display List in Reverse");
        printf("\n6.Exit\n");
        
 
    while (ch!=6)
    {
        
        printf("\nEnter your choice");
        scanf("%d", &ch);
 
        switch (ch)
        {
        case 1: 
            printf("...Inserting node at first\n");
            insbegin();temp=head;
	printf("\n list   :");
	disp();
            break;
        case 2: 
            printf("...Inserting node at last\n");
            insend();temp=head;
	printf("\n list   :");
	disp();
            break;
        case 3: 
            printf("...Inserting node at position\n");
            inspos();temp=head;
	printf("\n list   :");
	disp();
            break;
        case 4: 
            printf("...Deleting Node from any Position\n");
            del();temp=head;
	printf("\n list   :");
	disp();
            break;
        case 5: 
            printf("Displaying List in Reverse\n");
            rev();temp=head;
	printf("\n list   :");
	disp();
            break;
        case 6: 
            printf("Exiting\n");
            return 0;
            break;
        default: 
            printf("...Invalid Choice...\n");
            break;
        }
      
    }
	
	
}
void disp()

	{
		while(temp!=0){
		
		printf("\t%d->",temp->data);
		temp=temp->link;
	}
	}
	
	
void insbegin(){
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("enter data to be inserted:");
		scanf("%d",&newnode->data);
		newnode->link=0;
		temp=head;
		if(head ==0){
			
		head =temp=newnode;
		}
		else{
			
			newnode->link=temp->link;
			head=newnode;
		}
	
}
void insend(){
	newnode=(struct node *)malloc(sizeof(struct node));
		printf("\nenter data to be inserted at end:");
		scanf("%d",&newnode->data);
		newnode->link=0;
		temp=head;
	while(temp->link!=0){
		temp=temp->link;
	}
	temp->link=newnode;
	temp=newnode;
	
}
void inspos(){
	int i,c;
	printf("\nenter the position at which node is to be inserted :");
	scanf("%d",&c);
	newnode=(struct node *)malloc(sizeof(struct node));
		printf("\nenter data to be inserted :");
		scanf("%d",&newnode->data);
		
		temp=head;
	for(i=1;i<c-1;i++){
	
		temp=temp->link;
		
}
newnode->link=temp->link;
	temp->link=newnode;
	
	
	
	
}	
	

void delbegin(){
	temp = head;
	head = head->link;
	free(temp);
	
	
	
}






void dellast(){
	struct node *prev;
	temp =head ;
	while(temp->link!=0){
		prev=temp;
		
		temp=temp->link;
	}
	prev->link=0;
	free(temp);
}







void del(){
	int c,i=1 ;
	struct node *prev;
	printf("\nenter the node you want to delete :");
	scanf("%d",&c);
	
	temp=head;
	while(i<c){
			prev=temp;
		temp=temp->link;
		
	i++;}
	
	prev->link=temp->link;
	free(temp);
}



void rev(){
	struct node *nextnode,*current,*prev;
	prev=0;
	current=nextnode=head;
	while(nextnode!=0){
		nextnode=nextnode->link;
		current->link=prev;
		prev=current;
		current = nextnode;
		
	}
	head =prev;
	
}


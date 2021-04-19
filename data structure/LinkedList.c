#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *next __attribute__((packed));	//To research
}Variable_Attributes_packed_0;

typedef struct node NODE;

NODE* new_node(int);
void display(NODE*);
void insert(NODE*);

int main()
{
	int i;
	NODE *start, *cn;
	start = new_node(0);		//1st node
	cn = start;
	for(i=1; i<5; i++)
	{
		cn->next = new_node(i);
		cn = cn->next;
	}
	
	display(start);
	insert(start);
	
	return 0;
}

NODE* new_node(int i)
{
	NODE* t = (NODE*)malloc(sizeof(NODE));
	t->info = i;
	t->next = NULL;
	return t;
}

void display(NODE* s)
{
	NODE* cn = s;
	int i;
	do
	{
		printf("%d\n",cn->info);
		cn = cn->next;
	}
	while(cn->next != NULL);
	printf("%d\n",cn->info);
}
void insert(NODE* u)  
{  
    int i,no;   
    NODE* cn=u,*temp;  
    NODE* v = (NODE*) malloc (sizeof(NODE));  
    if(u == NULL)  
    {  
        printf("\nEmpty");  
    }  
    else  
    {  
        printf("\nEnter value :");  
        scanf("%d",&no);  
        u->info = no;  
       
        for(i=0; i<5; i++)  
        {  
            temp = temp->next;  
            if(temp == NULL)  
            {  
                printf("\nNot  insert\n");   
            }  
          
        }  
        u ->next = temp ->next;   
        temp ->next = u;   
        printf("\nNode insert");  
    }  
}  

#include<stdio.h>  
#include<stdlib.h>  
struct node   
{  
    int info;  
    struct node *next;   
};  
typedef struct node NODE;

NODE* new_node(int);
void display(NODE*);
void Insert (NODE*);   
void Delete(NODE*);  
void Search(NODE*);  


int main ()  
{  
	NODE* v;
	NODE* w;
	NODE* u;
	NODE* s;
	int i , choice =0; 
	NODE *start, *cn;
	start = new_node(0);		//1st node
	cn = start;
/*	for(i=1; i<5; i++)
	{
		cn->next = new_node(i);
		cn = cn->next;
	}
	
	display(start);
	Delete(start);
//	return 0; */
	 
    while(choice != 9)   
    {          
        printf("\nChoose one option in list \n"); 
        printf("\n1.Insert:");
        printf("\n2.Delete\n:");
		printf("\n3.Search :");
		printf("\n4.Show");
		printf("\n5.Exit\n");  
        printf("\nEnter your choice?\n");         
        scanf("\n%d",&choice);  
        switch(choice)  
        {  
            case 1:  
           		Insert(u);      
            	break;  
            case 2:  
            	Delete( v);         
            	break;  
            case 3:  
            	Search( w);       
            	break;  
            case 4:  
            	display( s);       
            	break;  
            case 5:  
            	exit(0);  
            	break;  
            default:  
            printf("Please enter valid choice..");  
        }  
    }  
    for(i=1; i<5; i++)
	{
		cn->next = new_node(i);
		cn = cn->next;
	}
	return;
}  
NODE* new_node(int i)
{
	NODE* t = (NODE*)malloc(sizeof(NODE));
	t->info = i;
	t->next = NULL;
	return t;
}

void Insert(NODE* u)  
{  
    NODE* cn =u;  
    int no;  
    NODE* v = (NODE*) malloc(sizeof(NODE*));  
    if(u == NULL)  
    {  
        printf("\nEmpty");  
    }  
    else  
    {  
        printf("\nEnter number\n");    
        scanf("%d",&no);    
        cn->info = no;  
       
        printf("\nNode inserted");  
    }  
      
}  


void Delete(NODE* v)  
{  
    NODE* cn =v;    
    if(cn == NULL)  
    {  
        printf("List is empty\n");  
    }  
    else   
    {  
        v = cn;  
        cn = v->next;  
         
        printf("\nNode delete\n");  
    }  
}  

void Search(NODE* w)  
{  
    NODE* cn =w; 
    int no,i=0;  
    w = cn;   
    if(cn == NULL)  
    {  
        printf("Empty List\n");  
    }  
    else  
    {   
        printf("search number\n");   
        scanf("%d",&no);  
        while (cn!=NULL)  
        {  
            //if(cn->next == no)  
            {  
                printf("item find %d ",i+1);  
                
            }   
            //else  
            	i++;  
            	cn = w -> next;  
        }  
       
    }     
          
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
  


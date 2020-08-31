#include<stdio.h>
struct node
{
	int info;
	struct node *link;
};
typedef struct node* NODE;
NODE create_node(int info,NODE link)
{
	
}
int main()
{
	int n,i,data;
	NODE first=NULL;
	printf("Enter no of nodes to create :");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		printf("Enter Data %d",i+1);
		scanf("%d",&data);
		create_node(data,first);
	}
}

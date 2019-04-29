#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
	char name[20];
	char brand[20];
	float price;
	float quantity;
}item;

void view(void) {
	char c;
	FILE *fp;
	fp=fopen("grocery.txt","r+");
	if(fp==NULL)
		printf("Error in creating file");
	while((c=fgetc(fp))!=EOF)
		printf("%c",c);
	fclose(fp);
	getchar();
}
void add(void)
{
	item it;
	int i;
	FILE *fp;
	fp=fopen("grocery.txt","a+");
	if(fp==NULL)
		printf("Error in creating file");

	printf("Enter the item to be added\n");
	scanf("%s",it.name);
	fprintf(fp,"%s\n",it.name);
	fclose(fp);
	getchar();
}
void delete(void)
{
	item it;
	char *ch,c[100];
	int i,len;
	FILE *fp1,*fp2;
	fp1=fopen("grocery.txt","r");
	fp2=fopen("new.txt","w");
	if(fp1||fp2==NULL)
		printf("Error in creating file");

	printf("Enter the items to be removed/changed from list\n");
	scanf("%s",it.name);
	while(fgets(c,100,fp1)!=NULL)
	{
		if((strstr(c,it.name))==0)
		{
			fputs(c,fp2);
		}
	}
	fclose(fp1);
	remove("grocery.txt");
	rename("new.txt","grocery.txt");
	fclose(fp2);
}
void transaction(void){};

int main()
{
	int i;
	char ch,c[50];
	system("clear");
	printf("WELCOME TO GROCERY SHOP\n");

	printf("\n What you wanna do now??\n 1.View items\n 2. Add items to our stock\n 3. Item purchased from our store\n 4.. Total Transaction today\n");
	scanf("%d",&i);
CHECK:
	switch(i)
	{
		case 1:view();
			break;
		case 2:add();
			break;
		case 3:delete();
			break;
		case 4:transaction();
			break;
		default:printf("You entered an invalid option.Choose from the above options\n ");
			scanf("%d",&i);
			goto CHECK;
	}
/*	fflush(stdin);
	printf("Do you want to continue? Y/N\n");
	if((ch=fgetc(stdin))=='Y'||'y')
		main();*/
	return 0;
}

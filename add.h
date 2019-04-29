

void add(void)
{
	char item[100];
	int i;
	FILE *fp;
	if(fp==NULL)
		printf("Error in creating file");
	fp=fopen("grocery.txt","a+");

	printf("Enter the item to be added\n");
	scanf("%s",item);
	fprintf(fp,"%s\n",item);
		
	fclose(fp);
}

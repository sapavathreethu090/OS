#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<dirent.h>
int main(){
	char d[100];
	int c,op;
	DIR*e;
	struct dirent *sd;
	printf("**Menu**\n");
	printf("1.create directory\n");
	printf("2.Remove directory\n");
	printf("3.read directory\n");
	printf("enter your choice");
	scanf("%d",&op);
	switch(op){
	
	case 1:
		printf("enter  directory name:");
		scanf("%s",d);
		c=mkdir(d,0777);
		if(c==-1)
			printf("Directory not created");
		else
			printf("Directory created\n");
		break;
	case 2:
		printf("enter directory name:");
		scanf("%s",d);
		c=rmdir(d);
		if(c==-1)
			printf("Directory not removed\n");
		else
			printf("Directory removed\n");
		break;
	
	case 3:
		printf("enter  directory name to oppen");
		scanf("%s",d);
		e=opendir(d);
		if(e==NULL)
			printf("Directory removed:\n");
		else
		{
			printf("Directory contents:\n");
			while((sd=readdir(e))!=NULL)
				printf("%s\t",sd->d_name);
			closedir(e);
		}
		break;
		
		default:
			printf("invalid choice\n");
	}
	return 0;
}

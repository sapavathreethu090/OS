#include<sys/stat.h>
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main(){
	int i=0;
	int f1,f2;
	char c,strin[100];
	/*open file for writing*/
	f1=open("data _REETHU",O_CREAT|O_TRUNC,0644);
	/*read input from keyboard*/
	while((c=getchar())!='\n'){
		strin[i++]=c;
	}
	/*write data into file*/
	write(f1,strin,i);
	close(f1);
	/*open file for reading*/
	f2=open("data_REETHU",O_RDONLY);
	/*read data from the file*/
	read(f2,strin,i);
		strin[i]='\0';
		/*display file content*/
		printf("\n data read from file:\n%s\n",strin);
		close(f2);
		return 0;
}

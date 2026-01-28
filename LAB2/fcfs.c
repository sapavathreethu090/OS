#include<stdio.h>
int main(){
	int bt[10],wt[10],tat[10],twt,ttat,n,i;
	char p[10][5];
	float awt,atat;
	printf("\n enter no of process required to excuation");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n enter process name");
		scanf("%d",&p[i]);
		printf("\n enter bt");
		scanf("%d",&bt[i]);
	
	}
	wt[0]=0;
	twt=0;
	tat[0]=bt[0];
	ttat=bt[0];
	for(i=1;i<n;i++)
	{
		wt[i]= wt[i-1]+bt[i-1];
		tat[i]=wt[i]+bt[i];
		twt=twt+wt[i];
		ttat=ttat+tat[i];
	}
	awt=(float)twt/n;
	atat=(float)ttat/n;
	printf("\n process name burst time waiting time turn around time");
	for(i=0;i<n;i++)
	{
		printf("\n %s\t	%d\t	%d\t	%d\t",p[i],bt[i],wt[i],tat[i]);
	}
	printf("\n average wt=%f",awt);
		printf("\n average tat=%f",atat);
}

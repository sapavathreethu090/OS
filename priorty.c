#include<stdio.h>
int main(){
int bt[4],wt[4],tat[4],twt,ttat,n,i,j,p[4],temp,pri[5];
float awt,atat;
printf("\n enter the total number of process: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n Enter number of process:");
scanf("%d",&p[i]);
printf("\n Enter bt: ");
scanf("%d",&bt[i]);
printf("enter the priority of process");
scanf("%d",&pri[i]);		
}
for(i<0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(pri[i]<pri[j]){
			temp=pri[i];
			pri[i]=pri[j];
			pri[j]=temp;
			temp=p[i];
			p[i]=p[j];
			p[j]=temp;
			temp=bt[i];
			bt[i]=bt[j];
			bt[j]=temp;
		
		}

	}
}
wt[0]=0,tat[0]=bt[0];
twt=0,ttat=bt[0];
for(i=1;i<n;i++){
wt[i]=wt[i-1]+bt[i-1];
tat[i]=wt[i]+bt[i];
twt=twt+wt[i];
ttat=ttat+wt[i];
}
awt=twt/n;
atat=ttat/n;
printf("\n processor  burst time priority waiting time turn around time");
for(i=0;i<n;i++){
printf("\n%d\t 	%d\t 	%d\t	%d\t	%d\t",p[i],bt[i],pri[i],wt[i],tat[i]);
}
printf("\nAverage waiting time=%f",awt);
printf("\n average turn around time = %\n",atat);
return 0;
}
























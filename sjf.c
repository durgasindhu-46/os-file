#include<stdio.h>
int main()
{
int n,p[20],bt[20],tat[20],wt[20],i,j,temp,t;
float avg1,avg2,sum1=0,sum2=0;
printf("Enter the no.of processes : ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the burst times for process %d: ",i+1);
scanf("%d",&bt[i]);
p[i]=i+1;
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(bt[i]>bt[j])
{
temp=bt[i];
bt[i]=bt[j];
bt[j]=temp;
t=p[i];
p[i]=p[j];
p[j]=t;
}
}
}
for(i=0;i<n;i++)
{
if(i==0)
{
    wt[i]=0;
tat[i]=bt[i]+wt[i];
}
else
{
wt[i]=wt[i-1]+bt[i-1];
tat[i]=bt[i]+wt[i];
}
sum1=sum1+tat[i];
sum2=sum2+wt[i];
}
avg1=sum1/n;
avg2=sum2/n;
printf("\nP.id\tBT\tWT\tTAT\n");
for(i=0;i<n;i++)
{
printf("%d\t%d\t%d\t%d\n",p[i],bt[i],wt[i],tat[i]);
}
printf("Average TAT : %f",avg1);
printf("\nAverage WT : %f",avg2);
return 0;
}

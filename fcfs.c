#include<stdio.h>
int main()
{
int i,n,wt[20],bt[20],tat[20];
float avg,a,s=0,sum=0;
printf("enter number of process:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    printf("enter the burst times of process %d:",i);
scanf("%d",&bt[i]);
}
printf("pid\t burst time\t waitingtime\t turn around time\n");
for(i=1;i<=n;i++)
{
printf("\n\n");
printf("%d\t",i);
printf("\t");
printf("%d\t",bt[i]);
printf("\t");
wt[1]=0;
    wt[i+1]=wt[i]+bt[i];
    printf("%d\t",wt[i]);
    printf("\t");
     tat[i]=wt[i]+bt[i];
     printf("%d\t",tat[i]);
    printf("\t");
    sum=sum+wt[i];
    s=s+tat[i];
}
printf("\n");
avg=sum/n;
a=s/n;
printf("avg wt is %f\n",avg);
printf("avg tat is %f",a);
return 0;

}

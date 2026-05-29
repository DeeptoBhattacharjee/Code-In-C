#include <stdio.h>

int main()
{
    int n,i,avg_wt=0,avg_tat=0;
    printf("Enter the number of processes:");
    scanf("%d",&n);
    int bt[n],wt[n],tat[n];
    printf("Enter the burst time of processes:\n");
    for(i=0;i<=n-1;i++)
    {
        printf("Process %d:",i+1);
        scanf("%d",&bt[i]);
    }
    wt[0]=0;
    for(i=1;i<=n-1;i++)
    {
        wt[i]=wt[i-1]+bt[i-1];
        tat[i]=wt[i]+bt[i];
    }
    printf("Process\tBurst Time\tWaiting Time\tTurn-Around time\n");
    for(i=0;i<n;i++)
    {
        printf("P[%d]\t%d\t\t%d\t\t%d\n",i+1,bt[i],wt[i],tat[i]);
    }

    for(i=0;i<n;i++)
    {
        avg_wt+=wt[i];
        avg_tat+=tat[i];
    }
    
    avg_wt/=n;
    avg_tat/=n;
    printf("Average Waiting Time:%d\n",avg_wt);
    printf("Average Turn-Around Time:%d\n",avg_tat);

    return 0;
}
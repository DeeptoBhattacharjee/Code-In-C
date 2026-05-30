#include <stdio.h>

int main()
{
    int n,i,j;
    printf("Enter the number of processes:");
    scanf("%d",&n);
    int pid[n],at[n],bt[n],ct[n],tat[n],wt[n];
    for(i=0;i<n;i++)
    {
        pid[i]=i+1;
        printf("Enter the arrival time of process %d:",i+1);
        scanf("%d",&at[i]);
    }
    for(i=0;i<n;i++)
    {
        pid[i]=i+1;
        printf("Enter the burst time of process %d:",i+1);
        scanf("%d",&bt[i]);
    }
    //Sorting processes by arrival time
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(at[j]>at[j+1])
            {
                int temp;

                temp=at[j];
                at[j]=at[j+1];
                at[j+1]=temp;

                temp=bt[j];
                bt[j]=bt[j+1];
                bt[j+1]=temp;

                temp=pid[j];
                pid[j]=pid[j+1];
                pid[j+1]=temp;
                
            }
        }
    }
    //Calculating completion time
    ct[0]=at[0]+bt[0];
    for(i=1;i<n;i++)
    {
        if(ct[i-1]<at[i])
            ct[i]=at[i]+bt[i];
        else
            ct[i]=ct[i-1]+bt[i];
    }
    //Calculating turnaround time and waiting time
    for(i=0;i<n;i++)
    {
        tat[i]=ct[i]-at[i];
        wt[i]=tat[i]-bt[i];
    }

    float avg_wt=0,avg_tat=0;

    //Displaying the results
    printf("Process\tArrival Time\tBurst Time\tCompletion Time\tTurnaround Time\tWaiting Time\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n",pid[i],at[i],bt[i],ct[i],tat[i],wt[i]);
        avg_wt+=wt[i];
        avg_tat+=tat[i];
    }
    avg_wt/=n;
    avg_tat/=n;
    printf("Average Waiting Time: %.2f\n",avg_wt);
    printf("Average Turnaround Time: %.2f\n",avg_tat);

    return 0;
}
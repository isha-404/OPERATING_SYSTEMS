#include <stdio.h>

int main()
{
int n;
int bt[10],wt[10],tat[10];
float avg_wt = 0, avg_tat = 0;

printf("Enter number of Processes: ");
scanf("%d",&n);

printf("Enter Burst time for each process\n");
for(int i = 0; i<n; i++){
printf("Process %d:", i+1);
scanf("%d",&bt[i]);
}

wt[0] = 0;

for(int i =0; i<n;i++){
wt[i] = wt[i-1]+bt[i-1];
}
for (int i =0; i<n;i++){
tat[i] = wt[i] + bt[i];
avg_wt += wt[i];
avg_tat += tat[i];
}
avg_wt = avg_wt/n;
avg_tat = avg_tat /n;
printf("\n");
printf("\nProcess\t\tBurst Time\tWaiting Time\tTurnAround Time\n");
for(int i =0; i<n;i++){
printf("Process %d\t\t%d\t\t%d\t\t%d\n", i+1, bt[i],wt[i], tat[i]);
}
printf("\nAverage Waiting Time = %.1f",avg_wt);
printf("\nAverage TurnAround Time = %.1f\n",avg_tat);

return 0;
}

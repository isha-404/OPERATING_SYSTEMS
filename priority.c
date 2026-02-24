#include<stdio.h>

int main() {
    int n, i, j;
    int bt[10], wt[10], tat[10], priority[10];
    float avg_wt = 0, avg_tat = 0;
    int temp;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    printf("\nEnter burst time and priority of each process:\n");
    for(i = 0; i < n; i++) {
        printf("\nProcess %d\n", i + 1);

        printf("Burst Time: ");
        scanf("%d", &bt[i]);

        printf("Priority (Lower number = Higher priority): ");
        scanf("%d", &priority[i]);
    }

    // Sorting according to priority
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(priority[i] > priority[j]) {

                // Swap burst time
                temp = bt[i];
                bt[i] = bt[j];
                bt[j] = temp;

                // Swap priority
                temp = priority[i];
                priority[i] = priority[j];
                priority[j] = temp;
            }
        }
    }

    // Calculate waiting time
    wt[0] = 0;
    for(i = 1; i < n; i++) {
        wt[i] = wt[i-1] + bt[i-1];
    }

    // Calculate turnaround time
    for(i = 0; i < n; i++) {
        tat[i] = wt[i] + bt[i];
        avg_wt += wt[i];
        avg_tat += tat[i];
    }

    avg_wt /= n;
    avg_tat /= n;

    printf("\nProcess\tBurst Time\tPriority\tWaiting Time\tTurnaround Time\n");
    for(i = 0; i < n; i++) {
        printf("P%d\t\t%d\t\t%d\t\t%d\t\t%d\n",
               i + 1, bt[i], priority[i], wt[i], tat[i]);
    }

    printf("\nAverage Waiting Time = %.2f", avg_wt);
    printf("\nAverage Turnaround Time = %.2f\n", avg_tat);

    return 0;
}

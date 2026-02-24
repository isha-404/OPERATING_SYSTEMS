#include<stdio.h>

int main() {
    int n, i, j;
    int bt[10], wt[10], tat[10], priority[10], at[10];
    int completed[10] = {0};
    int ct[10];   // Completion time
    float avg_wt = 0, avg_tat = 0;
    int time = 0, count = 0;
    int highest, index;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    // Taking input
    for(i = 0; i < n; i++) {
        printf("\nProcess %d\n", i + 1);

        printf("Arrival Time: ");
        scanf("%d", &at[i]);

        printf("Burst Time: ");
        scanf("%d", &bt[i]);

        printf("Priority (Higher number = Higher priority): ");
        scanf("%d", &priority[i]);
    }

    // Scheduling
    while(count < n) {
        highest = -1;
        index = -1;

        for(i = 0; i < n; i++) {
            if(at[i] <= time && completed[i] == 0) {
                if(priority[i] > highest) {
                    highest = priority[i];
                    index = i;
                }
            }
        }

        if(index != -1) {
            time += bt[index];
            ct[index] = time;
            tat[index] = ct[index] - at[index];
            wt[index] = tat[index] - bt[index];

            avg_wt += wt[index];
            avg_tat += tat[index];

            completed[index] = 1;
            count++;
        }
        else {
            time++;   // If no process has arrived, increase time
        }
    }

    avg_wt /= n;
    avg_tat /= n;

    // Output
    printf("\nProcess\tAT\tBT\tPriority\tWT\tTAT\n");
    for(i = 0; i < n; i++) {
        printf("P%d\t%d\t%d\t%d\t\t%d\t%d\n",
               i + 1, at[i], bt[i], priority[i], wt[i], tat[i]);
    }

    printf("\nAverage Waiting Time = %.2f", avg_wt);
    printf("\nAverage Turnaround Time = %.2f\n", avg_tat);

    return 0;
}

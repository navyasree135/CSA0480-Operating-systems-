#include <stdio.h>
int main() {
    int n, i, bt[10], wt[10] = {0}, tat[10];
    float total_wt = 0, total_tat = 0;
    printf("Enter number of processes: ");
    scanf("%d", &n);
    printf("Enter burst times:\n");
    for (i = 0; i < n; i++) scanf("%d", &bt[i]);
    for (i = 1; i < n; i++) wt[i] = wt[i - 1] + bt[i - 1];
    for (i = 0; i < n; i++) tat[i] = wt[i] + bt[i];
    for (i = 0; i < n; i++) {
        total_wt += wt[i];
        total_tat += tat[i];
    }
    printf("P\tBT\tWT\tTAT\n");
    for (i = 0; i < n; i++) printf("%d\t%d\t%d\t%d\n", i + 1, bt[i], wt[i], tat[i]);
    printf("Average WT: %.2f\n", total_wt);
    printf("Average TAT: %.2f\n", total_tat);
    return 0;
}

#include <stdio.h>

void swap(int *a , int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
		int n,p[10],bt[10],tat[10],wt[10],i,j;
		float avg_tat=0,avg_wt=0;
		
		printf("Enter no of processes: ");
		scanf("%d",&n);
		
		printf("Enter burst time of each processes: ");
		
		for(i=0;i<n;i++){
			scanf("%d",&bt[i]);
			p[i] = i+1;
		}
		for(i=0;i<n;i++){
			for(j=0;j<n-i-1;j++){
				if(bt[j]>bt[j+1]){
					swap(&bt[j],&bt[j+1]);
					swap(&p[j],&p[j+1]);
				}
			}
		}
		for(i=0;i<n;i++){
			if(i==0)
				tat[i] = bt[i];
			else
				tat[i] = tat[i-1] + bt[i];
			wt[i] = tat[i] - bt[i];
			avg_tat += tat[i];
			avg_wt += wt[i];
		}
		
		avg_tat=((float)avg_tat)/((float)n);
		avg_wt=((float)avg_wt)/((float)n);
		
		printf("Process\tBurst Time\tTurn Around Time\tWaiting Time\n");
		
		for(i=0;i<n;i++){
			printf("%d\t\t%d\t\t%d\t\t%d\n",p[i],bt[i],tat[i],wt[i]);
		}
		
		printf("\nAvg TAT: %f",avg_tat);
		printf("\nAvg WT: %f",avg_wt);
}
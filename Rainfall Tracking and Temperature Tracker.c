Rainfall Tracking:
//Rainfall Tracking OR Temperature Tracker
#include <stdio.h>
int main(){
		float rainfall[3][4];
		float total[3];
		float avg[3];
		for(int c=0;c<3;c++)
		{	printf("Enter Data for %d city\n",c+1);
			for(int m=0;m<4;m++)
			{
				printf("Enter rainfall for %d month:",m+1);
				scanf("%f",&rainfall[c][m]);
			};
		};
		for(int i=0;i<3;i++)
		{
			total[i]=rainfall[i][0]+rainfall[i][1]+rainfall[i][2]+rainfall[i][3];
			avg[i]=(total[i])/4;
		};
		printf("\t\t\tRainfall Tracking\n");
		printf("----------------------------------------------------------------------------------\n");
		printf("\tSR. No\tCity\tMonth 1\tMonth 2\tMonth 3\tMonth 4\taverage\t\n");
		printf("----------------------------------------------------------------------------------\n");
		for(int j=0;j<3;j++)
		{
			printf("\t%d\tCity %d\t%0.2f\t%0.2f\t%0.2f\t%0.2f \t%0.2f\t\n",j+1,j+1,rainfall[j][0],rainfall[j][1],rainfall[j][2],rainfall[j][3],avg[j]);
			printf("----------------------------------------------------------------------------------\n");
		};
		return 0;
	}

//Temperature Tracker
#include <stdio.h>
int main(){
		float temperature[3][7];
		float total[3];
		float avg[3];
		float avgd[7];
		for(int c=0;c<3;c++)
		{	printf("Enter Data for %d city\n",c+1);
			for(int d=0;d<7;d++)
			{
				printf("Enter temerature for %d day:",d+1);
				scanf("%f",&temperature[c][d]);
			};
		};
		for(int i=0;i<3;i++)
		{
			for(int k=0;k<7;k++)
			{
			    total[i]=total[i]+temperature[i][k];
			}
			avg[i]=(total[i])/7;
		};
		for(int m=0;m<7;m++)
		{
			for(int p=0;p<3;p++)
			{
			    avgd[m]=avgd[m]+temperature[p][m];
			}
			avgd[m]=avgd[m]/3;
		};
		printf("\t\t\tTemerature Tracking\n");
		printf("----------------------------------------------------------------------------------\n");
		printf("\tSR. No\tCity\tDay 1\tDay 2\tDay 3\tDay 4\tDay 5\tDay 6\tDay 7\taverage\t\n");
		printf("----------------------------------------------------------------------------------\n");
		for(int j=0;j<3;j++)
		{
			printf("\t%d\tCity %d",j+1,j+1);
			for (int l=0;l<7;l++)
			{
			    printf("\t%0.2f",temperature[j][l]);
			}
			printf("\t%0.2f\t\n",avg[j]);
			printf("----------------------------------------------------------------------------------\n");
		};
		printf("\t%d\tAVG/DAY",4);
			for (int n=0;n<7;n++)
			{
			    printf("\t%0.2f",avgd[n]);
			}
			printf("\n----------------------------------------------------------------------------------\n");
		return 0;
	}


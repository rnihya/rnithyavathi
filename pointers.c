#include<stdio.h>
#include<math.h>
int main()
{
int i,n;
float a[10],mean,sd,sum,var;
float(*p);
printf("\n enter number of elements");
scanf("%d",&n);
printf("\n enter the elemnts:");
p=a;
for(i=0;i<n;i++)
{
scanf("%f",*p);
p++;
}
p=a;
printf("\n input elements are :\n");
for(i=0;i<n;i++)
{
printf("%f",*p);
p++;
}
p=a;
sum=sd=mean=var=0;
for(i=0;i<n;i++)
{
sum=sum+(*P);
p++;
}
mean=sum/n;
p=a;
for(i=0;i<n;i++)
{
var=var+pow((*p-mean),2);
p++;
}
var=var/n;
sd=sqrt(var);
printf("\n\n mean=%f\nsum=%f\nvar=%f\nmean,sum,sd,var");
return 0;
}

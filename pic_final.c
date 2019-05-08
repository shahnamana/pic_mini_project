#include <stdio.h>
#include <stdlib.h> //welcome to our movie ticket booking system

void theatre(int);
void timing(int , int);
void movieeng();
void print();
void seat(int , int ,int );

void main()
{
printf("\n");
printf(" After high time for exams lets watch a movie!!\n ");
movieeng();
}
// choice for movie selection
void movieeng()
{
int c;
printf("\n Press <1> for Avengers: Endgame ");
printf("\n Press <2> for Shazam ");
printf("\n Press <3> for Captain Marvel ");
printf("\n Enter your choice :- ");
scanf("%d",&c);
theatre(c);
}
//to choose cinemas
void theatre(int c)
{
int d;
printf("\n Select among world class cinemas which you want..!! \n\n");
printf("Ticket cost for PVR CINEMAS is 300rs\n");
printf("Ticket cost for INOX CINEMAS is 400rs\n");
printf("Ticket cost for CINEPOLIS CINEMAS is 200rs\n\n");
printf("Press <1> for PVR CINEMAS\n");
printf("Press <2> for INOX CINEMAS\n");
printf("Press <3> for CINEPOLIS CINEMAS\n");
printf("Enter your choice :- ");
scanf("%d",&d);
timing(c,d);
}
// to display the show timings
void timing(int c,int d)
{
int e;
printf("\nSelect the time when you which to enjoy movie...!!\n");
printf("\n Press <1> for early timing 10:00 ");
printf("\n Press <2> for afternoon 1:30 ");
printf("\n Press <3> for evening 5:00 ");
printf("\n Press <4> for late night 11:00 \n ");
printf("Enter your choice :- ");
scanf("%d",&e);
seat(c,d,e);
}

void seat(int c,int d,int e)
{
int i,h=1,j,k,a[80];
label1:
printf("\n Enter number of seats u want :-");
scanf("%d",&k);
// as the maximum seats in the cinema screen is 80
// we hve to confirm thet the person does not give
// number of seats more then that available
if(k<=80)
{
printf("\n\n");
printf("---------------------------------\n");
printf(" Screen this side \n");
printf("---------------------------------\n");

for(i=1;i<=10;i++)
{
for(j=1;j<=8;j++)
{
printf("%d\t",h);
++h;
}
printf("\n");
}
for(i=1;i<=k;i++)
{
printf("\n Enter the %d seat number you want :- ",i);
scanf("%d",&a[i]);
}
print(c,d,e,k,a);
}
else {
  printf("limit is 80 seats");
  goto label1;
}
}

// to print the final booked ticket
void print(int c,int d,int e,int k,int a[])
{
char n[50];
double f;
int sum=0,m;

printf("\n Enter your name :- ");
scanf("%s",n);
printf("\n");
printf("\n Enter mobile number :- ");
scanf("%lf",&f);

printf("\n\n Your booked ticket is :- \n\n");
//prints booked ticket in some format

printf("_________________________________________________\n\n");
printf(" Name:- ");
puts(n);
printf("\n");
printf(" Mobile number:- %10.0lf\n",f);
printf("\n");
printf(" Movie:- ");
if(c==1)
printf("Avengers: Endgame");
if(c==2)
printf("Shazam");
if(c==3)
printf("BAZAAR");
printf("\n\n");
printf(" Theatre:-");
if(d==1)
{
sum=300*k;
printf("PVR CINEMAS");
}
if(d==2)
{
sum=400*k;
printf("INOX CINEMAS");
}
if(d==3)
{
printf("CINEPOLIS CINEMAS");
sum=200*k;
}
printf("\n");
printf("\n Total cost = %d",sum);
printf("\n");
printf("\n Seat number :- ");
for(m=1;m<=k;m++)
printf(" %d ",a[m]);
printf("\n\n");
printf(" Timing:- ");
if(e==1)
printf("10:00 am");
if(e==2)
printf("01:30 pm");
if(e==3)
printf("05:00 pm");
if(e==4)
printf("11:00 pm");
printf("\n");
printf("_________________________________________________\n");
}

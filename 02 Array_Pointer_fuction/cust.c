////////////////////////////////////////////////////////
///
///    Customer Details Structured Assignment..
///
////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef int bool;

#define true 1
#define false 0


struct Insurance
{
    int ins_No;
    char ins_exp_date[20];
};

struct Cars_Details
{
    int Car_No;
    char Fuel_type;
    char status;
    struct Insurance *cins;
};

struct cust
{
 int id;
 char Nm[20];
 char City[8];
 long int Mob_No;
 int No_Of_Cars;
 struct Cars_Details *ncar;
};

int main()
{
  int cnt = 0;

  struct cust *sptr=NULL;

  sptr=(struct cust*)malloc(cnt*sizeof(struct cust));
  //sptr2=(struct No_cars*)malloc(C_N*sizeof(struct No_Cars));
  //sptr3=(struct insurence*)malloc(1*sizeof(struct insurence));

  printf("Enter the Intake Capacity of Customer");
  scanf("%d",&cnt);

  Cust_Details(cnt,sptr);
  getch();
  return 0;
}

int Cust_Details(int cnt,struct cust *sptr)
{
    bool ins = false;
    int i=0,j=0,k=0;

    for(i=0;i<cnt;i++)
    {
        printf("\n Enter Customer id ");
        scanf("%d",&sptr[i].id);

        printf("\n Enter Customer Name");
        scanf("%s",&sptr[i].Nm);

        printf("\n Enter customer City ");
        scanf("%s",&sptr[i].City);

        printf("\n Enter Mobile No");
        scanf("%ld",&sptr[i].Mob_No);

        printf("\n Enter Number of Cars");
        scanf("%d",&sptr[i].No_Of_Cars);


        sptr[i].ncar =(struct Cars_Details*)malloc(sptr[i].No_Of_Cars*sizeof(struct Cars_Details));

        for(j=0;j<sptr[i].No_Of_Cars;j++)
        {
            printf("Enter Car Number");
            scanf("%d",&sptr[i].ncar[j].Car_No);

            printf("Enter Fuel Type");
            scanf("%s",&sptr[i].ncar[j].Fuel_type);

            printf("Insurance Available [Yes/No]");
            sptr[i].ncar[j].status = getchar();

            if(sptr[i].ncar[j].status == 'y' || sptr[i].ncar[j].status == 'Y')
            {
                sptr[i].ncar[j].cins =(struct Insurance*)malloc(sizeof(struct Insurance));

                printf("Enter Insurance Number");
                scanf("%d",&sptr[i].ncar[j].cins->ins_No);

                printf("Enter insurance expiry Date");
                scanf("%s",&sptr[i].ncar[j].cins->ins_exp_date);
            }
        }
    }
}


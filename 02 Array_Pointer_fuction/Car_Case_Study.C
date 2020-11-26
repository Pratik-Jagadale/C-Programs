////////////////////////////////////////////////////////
///
///    Customer Details Structured Assignment..
///
////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Insurance
{
    int ins_No;
    char ins_exp_date[20];
};

struct Cars_Details
{
    int Car_No;
    char Fuel_type[12];
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

void Accept_Cust_Details(int cnt,struct cust *sptr)
{
    int i=0, j=0;

    for(i=0;i<cnt;i++)
    {
        printf("\n Enter Customer id = ");
        scanf("%d",&sptr[i].id);

        printf("\n Enter Customer Name = ");
        scanf("%s",&sptr[i].Nm);

        printf("\n Enter customer City = ");
        scanf("%s",&sptr[i].City);

        printf("\n Enter Mobile No = ");
        scanf("%ld",&sptr[i].Mob_No);

        printf("\n Enter Number of Cars = ");
        scanf("%d",&sptr[i].No_Of_Cars);

        sptr[i].ncar =(struct Cars_Details*)malloc(sptr[i].No_Of_Cars*sizeof(struct Cars_Details));

        for(j=0;j<sptr[i].No_Of_Cars;j++)
        {
            printf("\n Enter Car Number = ");
            scanf("%d",&sptr[i].ncar[j].Car_No);

            printf("\n Enter Fuel Type = ");
            scanf("%s",&sptr[i].ncar[j].Fuel_type);

            printf("\n Insurance Available [Y/N] = ");
            sptr[i].ncar[j].status = getche();

            if(sptr[i].ncar[j].status == 'y' || sptr[i].ncar[j].status == 'Y')
            {
                sptr[i].ncar[j].cins =(struct Insurance*)malloc(sizeof(struct Insurance));

                printf("\n Enter Insurance Number = ");
                scanf("%d",&sptr[i].ncar[j].cins->ins_No);

                printf("\n Enter Insurance Expiry Date = ");
                scanf("%s",&sptr[i].ncar[j].cins->ins_exp_date);
            }
        }
    }
}


void Display_Cust_Details(int cnt,struct cust *sptr)
{
    int i=0, j=0;

	printf("\n\n Customer Details Are => \n");

    for(i=0;i<cnt;i++)
    {
        printf("\n Customer id = %d.",sptr[i].id);

        printf("\n Customer Name = %s.",sptr[i].Nm);

        printf("\n Customer City = %s.",sptr[i].City);

        printf("\n Mobile No = %ld.",sptr[i].Mob_No);

        printf("\n Number of Cars = %d.",sptr[i].No_Of_Cars);

		printf("\n\t\t Cars Details Are = ");

        for(j=0;j<sptr[i].No_Of_Cars;j++)
        {
            printf("\n\t\t Car Number = %d.",sptr[i].ncar[j].Car_No);

            printf("\n\t\t Fuel Type = %s.",sptr[i].ncar[j].Fuel_type);
 
            if(sptr[i].ncar[j].status == 'y' || sptr[i].ncar[j].status == 'Y')
            {
				printf("\n\t\t Insurance Available = YES... \n\t\t Insurance Details As Follows...");

                printf("\n\t\t\t Enter Insurance Number = %d.",sptr[i].ncar[j].cins->ins_No);

                printf("\n\t\t\t Enter Insurance Expiry Date = %s.",sptr[i].ncar[j].cins->ins_exp_date);
            }
			else
			{
				printf("\n\t\t Insurance Available = NO...");
			}
        }
    }
}


int main()
{
  int cnt = 0;

  struct cust *sptr=NULL;

  printf("\n Enter the Intake Capacity of Customer = ");
  scanf("%d",&cnt);

  sptr=(struct cust*)malloc(cnt*sizeof(struct cust));

  Accept_Cust_Details(cnt,sptr);
  Display_Cust_Details(cnt,sptr);

  printf("\n\nThanks...");

  getch();
  return 0;
}
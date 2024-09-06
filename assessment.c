#include<stdio.h>
main()
{
	int price,pcs,choose,ch,p,amount,total=0;
	char pizza,burger,dosa,idli;



	do
	{	printf("\n\n\n\t 1. pizza 180Rs/pcs");
		printf("\n\n\t 2. burger 100Rs/pcs");
		printf("\n\n\t 3. dosa 120Rs/pcs");
		printf("\n\n\t 4. idli 50Rs/pcs");
		printf("\n\n\t 5. Exit");



		printf("\n\n\n\t Enter your choice of food : ");
		scanf("%d",&ch);




		switch(ch)
		{
			case 1 :
					printf("\n\n\t You have Chosen Pizza");
					printf("\n\n\t Enter the number of pieces :  ");
					scanf("%d",&p);
					amount=p*180;
					printf("\n\n\tamount =%d",amount);
					total=total+amount;
					printf("\n\n\t total amount =%d",total);
				 	break;
				 	
            case 2 :
					printf("\n\n\t You have Chosen burger");
					printf("\n\n\t Enter the number of pieces :  ");
					scanf("%d",&p);
					amount=p*100;
					printf("\n\n\tamount =%d",amount);
					total=total+amount;
					printf("\n\n\t total amount =%d",total);
				 	break;
				 	
            case 3 :
					printf("\n\n\t You have Chosen dosa");
					printf("\n\n\t Enter the number of pieces :  ");
					scanf("%d",&p);
					amount=p*120;
					printf("\n\n\tamount =%d",amount);
					total=total+amount;
					printf("\n\n\t total amount =%d",total);
				 	break;
				 	
            case 4 :
					printf("\n\n\t You have Chosen idli");
					printf("\n\n\t Enter the number of pieces :  ");
					scanf("%d",&p);
					amount=p*50;
					printf("\n\n\tamount =%d",amount);
					total=total+amount;
					printf("\n\n\t total amount =%d",total);
				 	break;



			case 5: exit(0);

			default : printf("\n\n\t Invalid choice!!!");
				break;
		}






	}	while(ch>=1);

}

//WAP to create/simulate telecom call service conversation scenario using nested switch case.


#include<stdio.h>

main()

{
	
int a,b;

printf("Welocme to our telecome service : \n\n") ;

printf("For Gujarati press 1 \n")	;
printf("For Hindi press 2 \n")	;
printf("For English press 3 \n\n")	;	
printf("Enter a value : ")	;	
scanf("%d",&a);

switch(a)

	{    
	case 1 :    printf("\nGujarati select karva maate tamaro aabhar\n\n"); 
	
				printf("Simcard nu balance check karva maate 1 press karo  \n")	;
                printf("Portability maate 2 press karo \n")	;
                printf("Card band karva maate 3 press karo \n")	;
				printf("line per raheva mate 4 press karo \n\n")	;
				printf("Enter a value : ")	;	
				scanf("%d",&b);   
				
				switch(b)

				{    
				case 1 :    printf("Tamara balance ni details tamne sms par send karvama avse "); break ;
				case 2 :    printf("Portability maate amara employee saathe vaat karo "); break ;
				case 3 :    printf("Tamaru card jaldi bandh thay jase "); break ;
				default:    printf("line par banya raho");	 
				}	
					
				break ;
				
	case 2 :    printf("\nHindi select karne ke liye apka dhanyavaad\n\n"); 
	
				printf("Simcard ka balance check karne ke liye 1 press kare \n")	;
                printf("Portability ke liye 2 press kare \n")	;
                printf("Card band karne ke liye 3 press kare \n")	;
				printf("line par bane rahne ke liye 4 press kare\n\n")	;
				printf("Enter a value : ")	;	
				scanf("%d",&b);   
				
				switch(b)

				{    
				case 1 :    printf("Apke balance ki details apko sms kari jayegi "); break ;
				case 2 :    printf("Portability ke liye hamare employee ke saathe baat kare "); break ;
				case 3 :    printf("Apka simcard jaldi bandh ho jayega "); break ;
				default:    printf("line par bane rahe");	 
				}
				
				break ;
				
	case 3 :    printf("\nThank you for choosing English\n\n"); 
	
				printf("To check your simcard balance please press 1 \n")	;
                printf("For portability please press 2 \n")	;
                printf("To close the card please press 3 \n")	;
				printf("To stay on the line please press 4 \n\n")	;
				printf("Enter a value : ")	;	
				scanf("%d",&b);   
				
				switch(b)

				{    
				case 1 :    printf("You will receive a sms about your balance details"); break ;
				case 2 :    printf("For portability you have to talk to our employee, please stay on line"); break ;
				case 3 :    printf("Your card will be closed soon"); break ;
				default:    printf("Please, stay on the line");	 
				}
				
				break ;
				
	default:    printf("You have not choosen the number between 1 to 3, please repeat the process!");	 
	}	
	
}















#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void special(int number)
	{
		int count=0;
		char special[100];
		if(isPrime(number)==0)
			{
				strcat(special," prime;");
			}

			if(isEven(number)==0)
				{
					strcat(special," even;");
				}
			else
				{
					strcat(special," odd;");
				}

				if(isArm(number)==0)
					{
						strcat(special," armstrong no.;");
					}

				if(isPallin(number)==0)
							{
								strcat(special," palindrome;");
							}
				if(isPSquare(number)==0)
							{
									strcat(special," perfect square;");
							}



		printf("Number %d is-%s \n",number,special);

	}


int isPrime(int number)
	{
		if (number<=1)
		{
			return 1;
    }

		int flag = 0;

    for (int j=2;j<=number/2;j++)
			{
				if ((number%j)==0)
				{
					flag = 1;
					break;
				}

			}

    if(flag==0)
			{
				return 0;
			}
		}

 int isEven(int number)
 	{
		if(number%2==0)
		 return 0;
		else
		return 1;
	}


	int isArm(int number)
	 {
		 int originalNumber,remainder,result=0;
		 originalNumber=number;

    while(originalNumber!=0)
    {
        remainder=originalNumber%10;
        result+=remainder*remainder*remainder;
        originalNumber/= 10;
    }

    if(result == number)
        return 0;
    else
        return 1;

	 }

	 int isRam(int number)
	  {
	 	 return 0;
	  }

		int isPallin(int number)
		 {

			 int originalInteger=number;
			 int reversedInteger;

    while(number!=0)
    {
        int remainder=number%10;

        reversedInteger=reversedInteger*10+remainder;
        number/=10;
    }


    if (originalInteger==reversedInteger)
        return 0;
    else
        return 1;


		 }

		 int isPSquare(int number)
		  {
				for(int a=0;a<=number;a++)
     		{
         if(number==a*a)
         {
             return 0;
         }
			  }

		  }


char feedback(char a[]){

}

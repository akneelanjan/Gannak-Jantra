#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
	char reply;	
	int choice, i, a, b, c, count=1, var = 1;
	float x, y, result, check, store=-32768;

	do {
	printf("\nSelect your operation:\n");	//START OF OPERATION MENU 
	printf("1. Addition\t");
	printf("2. Subtraction\t");
	printf("3. Multiplication\t");
	printf("4. Division\n");
	printf("5. X ^ 2\t");
	printf("6. X ^ 3\t");
	printf("7. Square root\t \t");
	printf("8. X ^ (1 / 3)\n");
	printf("9. X ^ Y\t");
	printf("10. 1 / X\t");
	printf("11. e ^ X\t \t");
	printf("12. 10 ^ X\n");
	printf("13. X!\t \t");
	printf("14. Percentage \t");
	printf("15. log10(x)\t \t");
	printf("16. Modulus\n");
	printf("17. Sin(X)\t");
	printf("18. Cos(X)\t");
	printf("19. Tan(X)\t \t");
	printf("20. Cosec(X)\n");
	printf("21. Cot(X)\t");
	printf("22. Sec(X)\n");
	printf("Choice: ");						//END OF OPERATION MENU
	scanf("%d", &choice);
	switch(choice) 
	{
		case 1:								// ADDITION
		if(store == -32768)
		{
			printf("Enter X: ");
			scanf("%f", &x);
		}
		else x = store;
		printf("\nEnter Y: ");
		scanf("%f", &y);
		result = x + y;
		printf("\nResult: %f", result);
		break;
		
		case 2:								// SUBTRACTION
		if(store == -32768)
		{
			printf("Enter X: ");
			scanf("%f", &x);
		}
		else x = store;
		printf("\nEnter Y: ");
		scanf("%f", &y);
		result = x - y;
		printf("\nResult: %f", result);
		break;
		
		case 3:								//MULTIPLICATION
		if(store == -32768)
		{
			printf("Enter X: ");
			scanf("%f", &x);
		}
		else x = store;
		printf("\nEnter Y: ");
		scanf("%f", &y);
		result = x * y;
		printf("\nResult: %f", result);
		break;
		
		case 4:								//DIVISION
		if(store == -32768)
		{
			printf("Enter X: ");
			scanf("%f", &x);
		}
		else x = store;
		printf("\nEnter Y: ");
		scanf("%f", &y);
		result = x / y;
		printf("\nResult: %f", result);
		break;
		
		case 5:								//SQUARE
		if(store == -32768)
		{
			printf("Enter X: ");
			scanf("%f", &x);
		}
		else x = store;
		result = pow(x, 2);
		printf("\nResult: %f", result);
		break;
		
		case 6:								//CUBE
		if(store == -32768)
		{
			printf("Enter X: ");
			scanf("%f", &x);
		}
		else x = store;
		result = pow(x, 3);
		printf("\nResult: %f", result);
		break;
		
		case 7:								//SQUARE ROOT
		if(store == -32768)
		{
			printf("Enter X: ");
			scanf("%f", &x);
		}
		else x = store;
		result = sqrt(x);
		printf("\nResult: %f", result);
		break;
		
		case 8:								//CUBE ROOT
		if(store == -32768)
		{
			printf("Enter X: ");
			scanf("%f", &x);
		}
		else x = store;
		y = 3;
		result = pow(x, (1/y));
		printf("\nResult: %f", result);
		break;
		
		case 9:								//POWER with random index
		if(store == -32768)
		{
			printf("Enter X: ");
			scanf("%f", &x);
		}
		else x = store;
		printf("Enter Y: ");
		scanf("%f", &y);
		result = pow(x, y);
		printf("\nResult: %f", result);
		break;
		
		case 10:							//INVERSE 
		if(store == -32768)
		{
			printf("Enter X: ");
			scanf("%f", &x);
		}
		else x = store;
		result = 1/x ;
		printf("\nResult: %f", result);
		break;
		
		case 11:							//EXPONENTIAL
		if(store == -32768)
		{
			printf("Enter X: ");
			scanf("%f", &x);
		}
		else x = store;
		y=1; result = 0;
		do
		{
		result = result + y;
		y = y * x/count;
		count++;
		if (y>0) check = y;
		else check = -y;
		}while(check >= 0.0000001);
		printf("\nResult: %f", result);
		break;

		case 12:							//POWER OF 10
		if(store == -32768)
		{
			printf("Enter X: ");
			scanf("%f", &x);
		}
		else x = store;
		result = pow(10, x);
		printf("\nResult: %f", result);
		break;

		case 13:							//FACTORIAL
		if(store == -32768)
		{
			printf("Enter X: ");
			scanf("%f", &x);
		}
		else x = store;
		result = 1;
		for(i = 1; i <= x; i++) {
		result = result * i;
		}
		printf("\nResult: %f", result);
		break;

		case 14:							//PERCENTAGE
		if(store == -32768)
		{
			printf("Enter X: ");
			scanf("%f", &x);
		}
		else x = store;
		printf("\nEnter Y: ");
		scanf("%f", &y);
		result = (x/y) * 100;
		printf("\nResult: %f", result);
		break;

		case 15:							//LOGARITHM WITH BASE 10
		if(store == -32768)
		{
			printf("Enter X: ");
			scanf("%f", &x);
		}
		else x = store;
		result = log10(x);
		printf("\nResult: %f", result);
		break;

		case 16:							//MODULUS (REMAINDER)
		if(store == -32768)
		{
			printf("Enter X: ");
			scanf("%d", &a);
		}
		else a = store;
		printf("\nEnter Y: ");
		scanf("%d", &b);
		c = a%b ; 
		printf("\nResult: %d", c);
		result = c;
		break;
											//NOW TRIGO FUNCTIONS

		case 17:							//SINE (sin)
		if(store == -32768)
		{
			printf("Enter X: ");
			scanf("%f", &x);
		}
		else x = store;
		result = sin(x * 3.14159 / 180);
		printf("\nResult: %f", result);
		break;

		case 18:							//COSINE (cos)
		if(store == -32768)
		{
			printf("Enter X: ");
			scanf("%f", &x);
		}
		else x = store;
		result = cos(x * 3.14159 / 180);
		printf("\nResult: %f", result);
		break;

		case 19:							//TANGENT (tan)
		if(store == -32768)
		{
			printf("Enter X: ");
			scanf("%f", &x);
		}
		else x = store;
		result = tan(x * 3.14159 / 180);
		printf("\nResult: %f", result);
		break;

		case 20:							//COSECANT (cosec)
		if(store == -32768)
		{
			printf("Enter X: ");
			scanf("%f", &x);
		}
		else x = store;
		result = 1 / (sin(x * 3.14159 / 180));
		printf("\nResult: %.2f", result);
		break;

		case 21:							//COTANGENT (cot)
		if(store == -32768)
		{
			printf("Enter X: ");
			scanf("%f", &x);
		}
		else x = store;
		result = 1 / tan(x * 3.14159 / 180);
		printf("\nResult: %.2f", result);
		break;

		case 22:							//SECANT (sec)
		if(store == -32768)
		{
			printf("Enter X: ");
			scanf("%f", &x);
		}
		else x = store;
		result = 1 / cos(x * 3.14159 / 180);
		printf("\nResult: %.2f", result);
		break;

		default:
		printf("\nInvalid Choice!");
	}
			//MENU FOR RECALCULATION USING PREVOUS VALUE
	printf("\nTo continue with previous result press 2.");			
	printf("\nTo continue without previous result press 1.");
	printf("\nTo discontinue press 0.");
	do
	{
	printf("  Press: ");
	scanf("%d", &var);
		if(var == 2) store = result;
		else if(var == 1) store = -32768;
		else if(var != 2 && var != 1 && var!= 0) 
		{	
			printf("Invalid, re-enter!");
		}
	} while(var != 2 && var != 1 && var!= 0);
	
	} while(var);


return 0;
}
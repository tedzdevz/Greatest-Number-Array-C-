#include <stdio.h>
//Array Greatest Number 
int main()
{
 	do{
 		//User input how many number's want to find
        int array[20], i, largest, sizes; 
        
		printf("\nHow many array(s)?: ");
		scanf("%d", &sizes);
		
		//How many numbers inputed	
		printf("\nEnter %d number(s): \n", sizes);
	    
		//Getting the value for the array
		for (i = 0; i < sizes; i++){
    		printf("%d:",(i+1));
			scanf("%d", &array[i]);
		}
		//Executing the arrays if one of them are greatest
		for (i = 1; i < sizes; i++){
			if(largest < array[i])
			{
				largest = array[i];
			}else{	
			}
		}
 		//Output for the highest number given by the arrays
	    printf("\nThe Largest of given array is : %d\n", largest);
	        
	}while(3<4);
	
    return 0;
}

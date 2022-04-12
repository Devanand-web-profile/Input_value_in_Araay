#include <stdio.h>

void main()
{
    int i, arr[50];
    int Number, value, position;

    printf("\n\t\tPlease Enter the Number Of Elements :- ");
    scanf("%d", &Number);

    printf("\n\t\tPLease Enter the %d NUmber OF Elements : - \t", Number);

    for ( i = 0; i <Number; i++)
    {
       scanf("%d",&arr[i]);
    }
    
    printf("\n\t\tPlease Enter the Poitioin of elements Where you Want to insert the new data :-" );
    scanf("%d", &position); 

    printf("\n\t\tPlease Enter the Value Of Insert Element :-");
    scanf("%d" ,&value);

    for ( i = Number - 1; i >= position - 1; i--)       
                                                       
        arr[ i + 1] = arr[i];                  
    
        arr[ position -1] = value;
     
    for ( i = 0; i <= Number ; i++)
  
        printf(" %d \t\t" ,arr[i]);
    
    
}
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

void OneDimentional()
{
    int size = 0 , i = 0;
    int *arr = NULL;
    printf("entre the size\n");
    scanf("%d",&size);

    arr = (int *)malloc(size * sizeof(int)); //Allocation

    printf("Entre Elements \n");
    for(i = 0;i<size;i++)        //Input accept
    {
        scanf("%d",&arr[i]);
    }
    printf("Entred elemnts are: \n");
    for(i = 0;i<size;i++)      //Display data
    {
        printf("%d\n",arr[i]);
    }
    free(arr);   // Free the memory
}

void TwoDimentional()
{
    int **arr = NULL;
    int row = 0,col = 0 , i =0 , j=0;

    printf("Entre Number of Rwws\n");
    scanf("%d",&row);

    printf("Entre NUmber of Columns\n");
    scanf("%d",&col);

    arr = (int **)malloc(row * sizeof(int *));

    for(i = 0 ;i<row;i++)
    {
        arr[i]=(int *)malloc(col *sizeof(int));
    }

    printf("Entre elements : \n");
    for(i = 0; i<row; i++)
    {
        for(j = 0; j<col; j++)
        {
            scanf("%d",&arr[i][j]);
        }

    }
     printf("Entred elements are : \n");
     for(i = 0; i<row; i++)
    {
        for(j = 0; j<col; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");

    }
    for(i = 0 ;i< row; i++)  //Memory Deallocaation for Rows
    {
        free(arr[i]);
    }
    free(arr);  // Memory Deaaloction for Columns

}

void ThreeDimentional()
{
    int ***arr = NULL;
    int i = 0 , j = 0 ,first = 0 , second = 0 , third = 0, k = 0;

    printf("ENtre the Values of three Dimentional \n");
    
    scanf("%d%d%d",&first,&second,&third);

    arr = (int***)malloc(first * sizeof(int**));

    for(i = 0; i<first; i++)
    {
        arr[i] = (int **)malloc(second * sizeof(int *));
    }
    for(i = 0 ; i<first ; i++)
    {
        for(j = 0; j<second ; j++)
        {
            arr[i][j] =(int *)malloc(third * sizeof(int));
        }
    }

    printf("Accept the value : \n");

    for(i=0 ; i<first ; i++)
    {
        for(j = 0 ; j<second ; j++)
        {
            for(k = 0; k<third ; k++)
            {
                scanf("%d",&arr[i][j][k]);
            }
        }
    }

    printf("ENtred Element is : \n");

    for(i=0 ; i<first ; i++)
    {
        for(j = 0 ; j<second ; j++)
        {
            for(k = 0; k<third ; k++)
            {
                printf("%d\t",arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

         for(i = 0 ; i<first ; i++)
        {
             for(j = 0; j<second ; j++)
          {
            free(arr[i][j]);
          }
      }

    
    for(i = 0; i<first; i++)
    {
        free(arr[i]);
    }


     free(arr);

}


int main()
{
   
   int choise = 0;
   printf("Entre your Choise\n");
   printf("1:One Dimentional \n 2: Two Dimentional\n 3: Three Dimentional Array\n "); 

   scanf("%d",&choise);
   switch (choise)
   {
        case 1:
          OneDimentional();
             break;
        
        case 2:
            TwoDimentional();
             break;

       case 3:
            ThreeDimentional();
             break;
   
       default:
            printf("Wrong Choise\n");
             break;
   }
    
    return 0;
}
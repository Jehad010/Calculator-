  #include<stdio.h>
int main()
{
  int row1,col1,row2,col2,sum=0,row,col;
  

  printf("Enter the row of matrixA :");
  scanf("%d", &row1);

   printf("Enter the col of matrixA :");
  scanf("%d", &col1);

   printf("Enter the row of matrixB :");
  scanf("%d", &row2);

   printf("Enter the col of matrixB :");
  scanf("%d", &col2);

  while(col1!=row2)
  {
    printf("Error!!\n");

    printf("Enter the row of matrixA :");
  scanf("%d", &row1);

   printf("Enter the col of matrixA :");
  scanf("%d", &col1);

   printf("Enter the row of matrixB :");
  scanf("%d", &row2);

   printf("Enter the col of matrixB :");
  scanf("%d", &col2);
  }
  int matrixA[row1][col1],matrixB[row2][col2];

  //input the matrixA
  printf("Enter the matrixA:\n");

  for(row=0;row1>row;row++)
  {
    for(col=0;col1>col;col++)
    {
        printf("Enter the matrixA[%d][%d]= ",row+1,col+1);
        scanf("%d", &matrixA[row][col]);
    }
    printf("\n");
  }

  //input the matrixB
  printf("Enter the matrixB:\n");

  for(row=0;row2>row;row++)
  {
    for(col=0;col2>col;col++)
    {
        printf("Enter the matrixB[%d][%d]= ",row+1,col+1);
        scanf("%d", &matrixB[row][col]);
    }
    printf("\n");
  }

  //printing the matrixA
  printf("matrixA:\n");

  for(row=0;row1>row;row++)
  {
    for(col=0;col1>col;col++)
    {
        printf("%d ",matrixA[row][col]);
    }
    printf("\n");
  }

  //printing matrixB
  printf("matrixB:\n");

  for(row=0;row2>row;row++)
  {
    for(col=0;col2>col;col++)
    {
        printf("%d ",matrixB[row][col]);
    }
    printf("\n");
  }
   int result[row][col];
  //calculating the result

  for(row=0;row1>row;row++)
  {
    for(col=0;col2>col;col++)
    {
      for(int k=0;col1>k;k++)
      {
        sum=sum+matrixA[row][k]*matrixB[k][col];
      }
      result[row][col]=sum;
      sum=0;
    }
    printf("\n");
  }
   //printing the result 

   printf("Result is:\n");

  for(row=0;row1>row;row++)
  {
    for(col=0;col2>col;col++)
    {
        printf("%d ",result[row][col]);
    }
    printf("\n");
  }

  return 0;
}
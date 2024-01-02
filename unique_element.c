 #include<stdio.h>
 
 int main()
 {
     int n;
     printf("enter the size of array\n");
     scanf("%d",&n);
     int arr[n];
     int i,j,min,temp;
     printf("enter the elements of the array\n");
     for(i=0;i<n;i++)
     {
         scanf("%d",&arr[i]);
     }
     //sorting
     
     for(i=0;i<n;i++)
     {
         min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
        } 
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
     }
     
     //logic
     
      i=0;
      int count;
     while(i<n){
         count=0;
         for(j=0;j<n;j++)
         {
             if(arr[i]==arr[j])
             {
                 count++;
             }
         }
         if(count==1)
         {
             printf("The unique element is %d",arr[i]);
             break;
         }
         i+=count;
     }
     return 0;
 }
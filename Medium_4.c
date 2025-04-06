#include <stdio.h>

//Swap function
void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

//Munchiko filter which gives output mean
int muchiko(int a, int b , int c,int size)
{
    return (a+b+c)/size;
}

//sanchiko filter which gives output median after sorting 
int sanchiko(int a, int b,int c , int size )
{
        if(a>b)
        {
            if(b>c)
            {
                swap(&a,&c);
            }
            else if(c>b && a>c)
            {
                swap(&a,&c);
                swap(&a,&b);
            }
            else
            {
                swap(&a,&b);
            }
        }
        else
        {
            if(b>c && c>a)
            {
                swap(&b,&c);
                
            }
            else if(c<a)
            {
                swap(&a,&c);
                swap(&b,&c);
            }
        }
        
        
    return b;    
}

//main funntion
int main() 
{
  
    int arr[100]; 
    int n = 0;
    char ch;

    printf("Enter space-separated numbers (press Enter to finish): ");
    
    //taking input with spaces    
    while (scanf("%d%c", &arr[n], &ch) == 2)
    {
        n++;
        if (ch == '\n') break; 
    }

    //Printing the given data
    printf("Data:[ ");
    for (int i = 0; i < n; i++) {
        printf("%d,", arr[i]);
    }
    printf("]\n");
    
    int size=3;
    printf("Window size:3\n");
    
    
    int k=n/size;
    int output1[k],output2[k];
    
    for(int j=0;j<n-2;j++)
    {
        output1[j]=muchiko(arr[j],arr[j+1],arr[j+2],size);
        output2[j]=sanchiko(arr[j],arr[j+1],arr[j+2],size);
    }

    //printing the output from Munchio filter 
    printf("Muchiko Output :");
    for(int j=0;j<n-2;j++)
    {
        printf("%d ",output1[j]);
    }
    //printing the outpu from Sanchiko filter
    printf("\nSanchiko Output:");
    
    for(int j=0;j<n-2 ;j++)
    {
        printf("%d ",output2[j]);
    }
    

    return 0;
}

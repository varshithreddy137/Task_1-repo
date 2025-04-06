#include <stdio.h>


//main function
void main()
{
    //taking the input(filename) from the user
    char filename[100];
    printf("Enter the file name:");
    scanf("%s",&filename);

    //opening the file 
    FILE *file =fopen(filename,"r");


    if(file==NULL)
    {
        printf("File is empty!");
        
    }

    int value,i=0;

    //scaning the file 
    while(fscanf(file,"%d",&value)==1)
    {
        i++;

    }

    int k=i/4;

    //storing the values in array
    int arr[k][4];
   
        for(int a=0;a<k;a++)
        {
            for (int  i = 0; i < 4; i++)
            {
                fscanf(file,"%d",arr[a][i]);
            }
            
        }
        
    fclose(file);    


    //finding max and creating the map with 0 and 1
    int max=0;

    for(int i=0;i<k;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(arr[i][j]>max)
            {
                max=arr[i][j];
            }
        }
    }
    
    int arr_1[max][max];
    for(int i=0;i<max;i++)
    {
        for(int j=0;j<max;j++)
        {
            arr_1[i][j]=0;
        }
    }

    //creating the map 
    int p,q;
    for(int i=0;i<k;i++)
    {
        p=arr[i][0]-arr[i][2];
        q=arr[i][1]-arr[i][3];
        if(p>=0 && q>=0)
        {
            arr_1[p][q]=1;
        }
    }

    //printing the MAP
    printf("Map:\n");
    
    for(int i=0;i<max;i++)
    {
        for(int j=0;j<max;j++)
        {
            printf("%d",arr[i][j]);
        }
    }
    
    


}

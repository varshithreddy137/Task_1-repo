#include <stdio.h>
#include <math.h>

//transform function 
void transform(int x , int y,int z, int offset ,float *x_final, float *y_final,float *z_final)
{
    *x_final=x;
    *y_final=y;
    *z_final=z+offset;
}

//distance calucating function 
float distance(int x, int y , int z , float x_final,float y_final,float z_final)
{
    return sqrt(pow(x_final-x,2)+pow(y_final-y,2)+pow(z_final-z,2));
}

//main function 
int main()
{
    //intaking the co ordinates 
    int x,y,z;
    
    printf("Enter the Detection Co-Ordinates:");
    scanf("%d %d %d",&x,&y,&z);
    
    int offset=55;
    
    float x_final,y_final,z_final;
    
    transform(x,y,z,offset,&x_final,&y_final,&z_final);
    
    float dis=distance(x,y,z,x_final,y_final,z_final);

   //printing the output
    printf("Distance from the final Co-Ordinates:%f \n",dis);
    
    printf("The rover reached and completed a 360 rotation");
    
 
    

    return 0;
}

#include <stdio.h>
#include <math.h>

//converting the given angle into radians
float Deg_to_Rad(float x)
{
    return ((x) *M_PI / 180.0);

}
//main function
int main()
{

    float ang1,ang2,ang3;

    //input of angles 
    printf("Enter the Eluers angles(3 number system):");
    scanf("%f %f %f",&ang1,&ang2,&ang3);
    
    float ang_1=Deg_to_Rad(ang1);
    float ang_2=Deg_to_Rad(ang2);
    float ang_3=Deg_to_Rad(ang3);

    //taking half of every angle
    float a1=(ang_1)/2;
    float a2=(ang_2)/2;
    float a3=(ang_3)/2;

    float w,x,y,z;

    //converting the elluers angles to the four number system
    w=cos(a3)*cos(a1)*cos(a2)+sin(a3)*sin(a1)*sin(a2);
    x=cos(a3)*cos(a1)*sin(a2)+sin(a3)*sin(a1)*cos(a2);
    y=cos(a3)*sin(a1)*cos(a2)+sin(a3)*cos(a1)*sin(a2);
    z=sin(a3)*cos(a1)*cos(a2)+cos(a3)*sin(a1)*sin(a2);

    //printing the output 
    printf("The four number system for given angles :%.2f+%.2fi+%.2fj+%.2fk",w,x,y,z);

    return 0;
}

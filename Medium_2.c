#include <stdio.h>
#include <string.h>

#define MAX_INPUT 1000

//defining the Morse codes 
char *Morse_code[36]={ ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---",
    ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..",  // A-Z
    "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----."   
};

//defining the Letters     
char Letters[36]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','0','1','2','3','4','5','6','7','8','9'};


//Decode funtion which takes a character and gives you the position in the morse code array
char Decode(char *k )
{
    
    for(int i=0;i<=36;i++)
    {
      //strcmp is the comand use to compare to strings 
        if(strcmp(k,Morse_code[i])==0)
        {
            return Letters[i];
        }
    }
    
    return -1;
}

//main function
int main()
{
    //defining two character arrays
    char input[MAX_INPUT]={0};
    char output[MAX_INPUT]={0};
    
    printf("Enter the Morse_code (Use 1 space bettween letters): ");

    //fgets takes the input from user 
    fgets(input, MAX_INPUT, stdin);

    //compares every input one by one 
    int k=0;
    while(input[k]!=NULL)
    {
        output[k]=Decode(input[k]);
        k++;
    }
    
    printf("Decoded :");

    //printing the final output 
    while(output[k]!=NULL)
    {
        printf("%c",output[k]);
        k++;
    }
    
    return 0;
}

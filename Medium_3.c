#include <stdio.h>
#include <string.h>

//Decoding the message taking the input in array
void decodeMessage(char input[])
{
    //Gives the length of the string 
    int len = strlen(input);
    char decoded[100]; 

    
    for (int i = 0; i < len; i++)
    {
        char ch = input[i];
        //Converting the lowercase letters to uppercase 
        if (ch >= 'a' && ch <= 'z') 
        {
            ch = ch - ('a' - 'A'); 
        }
          
        int shift = i + 1;

        //updating the character (input)
        ch = ((ch - 'A' - shift + 26) % 26) + 'A';

        decoded[i] = ch;
    }
    //printing the decoded output
    decoded[len] = '\0'; 
    printf("Decoded Message: %s\n", decoded);
}

int main()
{
    //Taking input from user
    char input[100];
    printf("Enter encoded message: ");
    scanf("%s", input);
    
    decodeMessage(input);

    return 0;
}

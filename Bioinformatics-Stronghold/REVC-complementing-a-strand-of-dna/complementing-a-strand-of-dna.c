#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *dna_into_rna_transcriber();
void reverse_string();

int main(){
    char string[65536];
    printf("Enter The DNA string: ");
	fgets(string, 65536, stdin);

    reverse_string(string);

    dna_into_rna_transcriber(string);
    printf("%s\n", string);
    return 0;
}

char *dna_into_rna_transcriber(char input_str[]){
    for (int i = 0; i <= strlen(input_str); i++){
        //printf("%d\n", input_str[i]);
        if (input_str[i] == 65){
            input_str[i] = 84;
        }
        else if (input_str[i] == 84){
            input_str[i] = 65;
        }
        else if (input_str[i] == 67){
            input_str[i] = 71;
        }
        else if (input_str[i] == 71){
            input_str[i] = 67;
        }
    }
    return 0;   
}

void reverse_string(char *str1)  
{  
    // declare static variable  
    static int i, len, temp;  
    len = strlen(str1); // use strlen() to get the length of str string  

    if (i < len/2){  
        // temp variable use to temporary hold the string  
        temp = str1[i];  
        str1[i] = str1[len - i - 1];  
        str1[len - i - 1] = temp;  
        i++;  
        reverse_string(str1); // recusively calls the revstr() function  
    }  
} 

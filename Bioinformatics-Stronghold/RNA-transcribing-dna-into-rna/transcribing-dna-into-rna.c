#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *dna_into_rna_transcriber();

int main(){
    char string[65536];
    printf("Enter The DNA string: ");
	fgets(string, 65536, stdin);
    dna_into_rna_transcriber(string);
    printf("%s\n", string);
    return 0;
}

char *dna_into_rna_transcriber(char input_str[]){
    for (int i = 0; i <= strlen(input_str); i++){
        if (input_str[i] == 84){
            input_str[i] = 85;
            }
    }
    return 0;   
}
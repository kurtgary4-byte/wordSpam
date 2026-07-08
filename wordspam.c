#include <stdio.h>
#include <string.h>
#include <strings.h>

  int main(){
     char word[80] = "";
     char response = '\0';
     char choice[10] = "";

     printf("Enter word: ");
     fgets(word, sizeof word, stdin);
     word[strlen(word) - 1] = '\0';

     printf("What color do you want(type the name of the color lowercased): \n");
       printf("[1] GREEN\n");
       printf("[2] RED\n");
       printf("[3] YELLOW\n");
       printf("[4] BLUE\n");
       printf("[5] MAGENTA\n");
       printf("[6] CYAN\n");
    printf("Enter choice here: \n");
    fgets(choice, sizeof choice, stdin);
     choice[strlen(choice) - 1] = '\0';

    if(strstr(choice, "green") != NULL) {

            while(1 == 1) {
                printf("\033[0;32m%s\033[0m", word);
            }
        }
    if(strstr(choice, "red") != NULL){
            //green
            while(1 == 1) {
                printf("\033[0;31m%s\033[0m", word);
            }
        }
        if(strstr(choice, "yellow") != NULL){
            // yellow
            while(1 == 1) {
                printf("\033[0;33m%s\033[0m", word);
            } //closes while function
        }
         if(strstr(choice, "blue") != NULL){
            // blue
            while(1 == 1) {
                printf("\033[0;34m%s\033[0m", word);
            } //closes while function   
        }
         if(strstr(choice, "magenta") != NULL){
            // magenta
            while(1 == 1) {
                printf("\033[0;35m%s\033[0m", word);
            } //closes while function  
        }
         if(strstr(choice, "cyan") != NULL){
            // cyan
            while(1 == 1) {
                printf("\033[0;36m%s\033[0m", word);
            } //closes while function  
         }else{
            printf("Unknown color please restart the program and type the colors listed\n");
         }
    return 0;
  }

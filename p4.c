#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void northFunct (char *choices);
void southFunct (char choices[]);
void eastFunct (char choices[]);
void westFunct (char *choices);
void printResults(char str[]);

int main() {
    char choice[50];
    char choices[200] = "";
    printf("north, south, east, or west:\n");
    
    while (1){
        scanf("%s", choice);
        if (strcmp(choice, "north") == 0) {       
            northFunct (choices);
            printResults (choices);
            break;
        }

        else if (strcmp(choice, "south") == 0) {
            southFunct (choices);
            printResults (choices);
            break;
        }

        else if (strcmp(choice, "east") == 0) {
            eastFunct (choices);
            printResults (choices);
            break;
        }

        else if (strcmp(choice, "west") == 0) {
            westFunct (choices);
            printResults (choices);
            break;
        }
        else {
            printf("%s is an invalid entry. Enter valid option:\n", choice);            
        }
    }
    return 0;
}

//DO NOT MODIFY ANYTHING ABOVE THIS LINE

void northFunct (char *choices) {
    char temp[50];
    int temp1;
    char temp2[5];

    strcat(choices, "north ");

    printf("enter a positive integer:\n");
    scanf ("%d", &temp1);

    if(temp1 < 0) {
        while(1) {
            printf("%d is an invalid entry. Enter valid option:\n", temp1);
            scanf("%d", &temp1);
            if(temp1 >= 0) {
                break;
            }
        }
    }
    sprintf(temp2, "%d", temp1);

    strcat(choices, temp2);
    strcat(choices, " ");

    if((temp1 % 2) == 0) {
        printf("yes or no:\n");
        scanf("%s", &temp2);
        
        if(strcmp(temp2, "yes") == 0) {
            strcat(choices, "yes lake");
        }

        else if(strcmp(temp2, "no") == 0) {
            strcat(choices, "no pool");
        }
    }

    else if(temp1 % 2 != 0) {
        strcat(choices, "beach");
    }
}

void southFunct (char choices[]) {
    char temp[10];
    
    strcat(choices, "south ");
    printf("left or right:\n");
    scanf("%s", temp);

    if((strcmp(temp, "right") != 0) && (strcmp(temp, "left") != 0)) {
        while(1) {
            printf("%s is an invalid entry. Enter valid option:\n", temp);
            scanf("%s", temp);

            if(strcmp(temp, "left") == 0 || strcmp(temp, "right") == 0) {
                break;
            }
        }
    }

    if(strcmp(temp, "left") == 0) {
        strcat(choices, "left ");
        strcat(choices, "jog");
    }

    else if(strcmp(temp, "right") == 0) {
        strcat(choices, "right ");
        printf("fast or slow:\n");
        scanf("%s", temp);

        if((strcmp(temp, "fast") != 0) && (strcmp(temp, "slow") != 0)) {
        while(1) {
            printf("%s is an invalid entry. Enter valid option:\n", temp);
            scanf("%s", temp);

            if(strcmp(temp, "fast") == 0 || strcmp(temp, "slow") == 0) {
                break;
            }
        }
    }

        if(strcmp(temp, "fast") == 0) {
            strcat(choices, "fast ");
            strcat(choices, "bike");
        }

        else if (strcmp(temp, "slow") == 0) {
            strcat(choices, "slow ");

            printf("big or small:\n");
            scanf("%s", temp);

            if((strcmp(temp, "big") != 0) && (strcmp(temp, "small") != 0)) {
                while(1) {
                    printf("%s is an invalid entry. Enter valid option:\n", temp);
                    scanf("%s", temp);

                    if(strcmp(temp, "big") == 0 || strcmp(temp, "small") == 0) {
                        break;
                    }
                }
            }

            if(strcmp(temp, "big") == 0) {
                strcat(choices, "big run");
            }

            else if(strcmp(temp, "small") == 0) {
                strcat(choices, "small walk");
            }
        }
    }
}

void eastFunct (char choices[]) {
    char temp[10];
    strcat(choices, "east ");

    printf("left, center, or right:\n");
    scanf("%s", temp);

    if((strcmp(temp, "left") != 0) && (strcmp(temp, "center") != 0) && (strcmp(temp, "right") != 0)) {
        while(1) {
            printf("%s is an invalid entry. Enter valid option:\n", temp);
            scanf("%s", temp);

            if(strcmp(temp, "left") == 0 || strcmp(temp, "center") == 0 || strcmp(temp, "right") == 0) {
                break;
            }
        }
    }

    if(strcmp(temp, "left") == 0) {
        strcat(choices, "left ");
        printf("build or destroy:\n");
        scanf("%s", temp);

        if(strcmp(temp, "build") == 0) {
            strcat(choices, "build hike");
        }

        else if (strcmp(temp, "destroy") == 0) {
            strcat(choices, "destroy spelunk");
        }
    }

    else if(strcmp(temp, "center") == 0) {
        strcat(choices, "center ");

        printf("open or closed:\n");
        scanf("%s", temp);

        if((strcmp(temp, "open") != 0) && (strcmp(temp, "closed") != 0)) {
            while(1) {
                printf("%s is an invalid entry. Enter valid option:\n", temp);
                scanf("%s", temp);

                if(strcmp(temp, "open") == 0 || strcmp(temp, "closed") == 0) {
                    break;
                }
            }
        }

        if(strcmp(temp, "open") == 0) {
            strcat(choices, "open zoo");
        }

        else if (strcmp(temp, "closed") == 0) {
            strcat(choices, "closed aquarium");
        }
    }

    else if(strcmp(temp, "right") == 0) {
        strcat(choices, "right museum");
    }
}
void westFunct (char *choices) {
    char temp[10];
    int user;
    char userc[10];
    char sign;

    strcat(choices, "west ");

    printf("enter an integer:\n");
    scanf("%d", &user);

    sprintf(userc, "%d", user);

    if(user >= 0) {
        strcat(choices, userc);
        strcat(choices, " ");
        strcat(choices, "frisbee");
    }

    else if(user < 0) {
        strcat(choices, userc);
        strcat(choices, " ");
        printf("sunny or cloudy:\n");
        scanf("%s", temp);

        if((strcmp(temp, "sunny") != 0) && (strcmp(temp, "cloudy") != 0)) {
            while(1) {
                printf("%s is an invalid entry. Enter valid option:\n", temp);
                scanf("%s", temp);

                if(strcmp(temp, "sunny") == 0 || strcmp(temp, "cloudy") == 0) {
                    break;
                }
            }
        }

        if(strcmp(temp, "sunny") == 0) {
            strcat(choices, "sunny tennis");
        }

        else if(strcmp(temp, "cloudy") == 0) {
            strcat(choices, "cloudy racquetball");
        }
    }
}

void printResults(char str[]) {
    printf("Your results: %s", str);
    printf("\n");
}


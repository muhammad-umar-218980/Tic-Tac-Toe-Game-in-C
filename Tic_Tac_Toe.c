#include <stdio.h>
#include <string.h>
#include <windows.h>

// <----------------------------------- TIC TAC TOE GAME BOARD ----------------------------------------->

char game_board[3][3];

// <------------------------------------ FUNCTION DECLARATION ------------------------------------------>

void initialize_board();
void display_board();
void animation();

// <------------------------------------ Main Function ------------------------------------------>
int main() {
    animation();
    printf("\n\n");
    initialize_board();
    display_board();
    return 0;
}

// <------------------------------------ ANIMATION ------------------------------------------>

void animation() {
    char welcome_text[] = " WELCOME TO TIC TAC TOE GAME !!";
    int text_length = strlen(welcome_text);

    printf("          ");
    for (int i = 0; i < text_length + 30; i++) {
        printf("-");
    }
    printf("\n\n");

    printf("\t\t\t");
    for (int i = 0; welcome_text[i] != '\0'; i++) {
        printf("%c", welcome_text[i]);
        Sleep(100);
    }

    printf("\n\n");

    printf("          ");
    for (int i = 0; i < text_length + 30; i++) {
        printf("-");
    }
    printf("\n");
}

// <----------------------------- initialize_board() function ----------------------------------->

void initialize_board() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            game_board[i][j] = ' '; // ye sab 9 boxes ko empty fill karay ga
        }
    }
}

// <----------------------------- display_board() function ----------------------------------->

//void display_board() {
//    for (int i = 0; i < 3; i++) {
//    	printf("\t");
//        for (int j = 0; j < 3; j++) {
//            printf(" %c ", game_board[i][j]);
//            if (j < 2) printf("|");
//        }
//        printf("\n");
//        if (i < 2) printf("\t---+---+---\n");
//    }
//}

/*

		   |   |
		---+---+---
		   |   |
		---+---+---
		   |   |

*/



void display_board() {
    for (int i = 0; i < 3; i++) {
        for (int line = 0; line < 2; line++) { 
    		printf("\t");
            for (int j = 0; j < 3; j++) {
                printf("       "); 
                if (j < 2) printf("|"); 
            }
            printf("\n");
        }
        if (i < 2) {
            printf("\t-------+-------+-------\n"); 
        }
    }
}


/*


               |       |
               |       |
        -------+-------+-------
               |       |
               |       |
        -------+-------+-------
               |       |
               |       |



*/
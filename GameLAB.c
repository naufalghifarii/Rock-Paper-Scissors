#include <stdio.h>

struct playerName{
	char name1[50];
	char name2[50];
};
struct playerName py;
int dashboard(){
	while(1){
		printf("Rock Paper Scissors Game\n");
		printf("1. Play the Game with computer\n");
		printf("2. Play the Game with other player\n");
		printf("3. Exit\n");
		int a;
		scanf("%d", &a);
		system("cls");
		if(a==1){
			game();
		}else if(a==2){
			pvp();
		}
		else if(a==3){
			return 0;
		}else{
			printf("Wrong Number!");
		}
	}
}

int pvp(){
	printf("Input Player 1 Name : ");
	scanf("%s", py.name1);
	printf("Input Player 2 Name : ");
	scanf("%s", py.name2);
	int player1Score = 0, player2Score = 0;
	while(player1Score<3 && player2Score < 3){
		printf("%s, Choose your weapon:\n", py.name1);
	    printf("1. Rock\n");
	    printf("2. Paper\n");
	    printf("3. Scissors\n");
	    int player1Choice;
	    scanf("%d", &player1Choice);
		system("cls");
	    
	    printf("%s, Choose your weapon:\n", py.name2);
	    printf("1. Rock\n");
	    printf("2. Paper\n");
	    printf("3. Scissors\n");
	    int player2Choice;
	    scanf("%d", &player2Choice);
		system("cls");
		
		printf("%s choice: ", py.name1);
	    switch (player1Choice) {
	      case 1:
	        printf("Rock\n");
	        break;
	      case 2:
	        printf("Paper\n");
	        break;
	      case 3:
	        printf("Scissors\n");
	        break;
	      default:
	        printf("Invalid choice!\n");
	        continue; // Skip round on invalid input
	    }
	    printf("%s choice: ", py.name2);
	    switch (player2Choice) {
	      case 1:
	        printf("Rock\n");
	        break;
	      case 2:
	        printf("Paper\n");
	        break;
	      case 3:
	        printf("Scissors\n");
	        break;
	      default:
	        printf("Invalid choice!\n");
	        continue; // Skip round on invalid input
	    }
	    if (player1Choice == player2Choice) {
	      printf("It's a tie!\n");
	    } else if ((player1Choice == 1 && player2Choice == 3) ||
	               (player1Choice == 2 && player2Choice == 1) ||
	               (player1Choice == 3 && player2Choice == 2)) {
	      printf("%s win!\n", py.name1);
	      player1Score++;
	    } else {
	      printf("%s win!\n", py.name2);
	      player2Score++;
	    }
	    printf("=================================================================\n");
	    printf("|\t%s Score\t\t|\t%s Score\t\t|\n", py.name1, py.name2);
	    printf("|\t\t\t\t|\t\t\t\t|\n");
	    printf("|\t\t%d\t\t|\t\t%d\t\t|\n", player1Score, player2Score);
	    printf("|\t\t\t\t|\t\t\t\t|\n");
	    printf("|\t\t\t\t|\t\t\t\t|\n");
	    printf("=================================================================\n");
	}
	if (player1Score == 3) {
		printf("Congratulations! %s win the game!\n", py.name1);
		printf("\n\n");
	} else if(player2Score == 3){
	    printf("Congratulations! %s win the game!\n", py.name2);
	    printf("\n\n");
	}
}


int game() {
	printf("Input Player Name : ");
	scanf(" %[^\n]s", py.name1);
	system("cls");
  	int playerScore = 0, computerScore = 0; // Initialize scores
  	while (playerScore < 3 && computerScore < 3) {
	    // Show available choices
	    printf("Choose your weapon:\n");
	    printf("1. Rock\n");
	    printf("2. Paper\n");
	    printf("3. Scissors\n");
	
	    // Get player input
	    int playerChoice;
	    scanf("%d", &playerChoice);
		system("cls");
	    // Generate random number for computer choice (1-3)
	    srand(time(NULL));  // Seed random generator
	    int computerChoice = 1 + rand() % 3;
	
	    // Display choices
	    printf("%s choice: ", py.name1);
	    switch (playerChoice) {
	      case 1:
	        printf("Rock\n");
	        break;
	      case 2:
	        printf("Paper\n");
	        break;
	      case 3:
	        printf("Scissors\n");
	        break;
	      default:
	        printf("Invalid choice!\n");
	        continue; // Skip round on invalid input
	    }
	    printf("Computer chose: ");
	    switch (computerChoice) {
	      case 1:
	        printf("Rock\n");
	        break;
	      case 2:
	        printf("Paper\n");
	        break;
	      case 3:
	        printf("Scissors\n");
	        break;
	    }
	
	    // Determine winner and update scores
	    if (playerChoice == computerChoice) {
	      printf("It's a tie!\n");
	    } else if ((playerChoice == 1 && computerChoice == 3) ||
	               (playerChoice == 2 && computerChoice == 1) ||
	               (playerChoice == 3 && computerChoice == 2)) {
	      printf("%s win!\n", py.name1);
	      playerScore++;
	    } else {
	      printf("Computer wins!\n");
	      computerScore++;
	    }
	    printf("=================================================================\n");
	    printf("|\t%s Score\t\t|\tComputer Score\t\t|\n", py.name1);
	    printf("|\t\t\t\t|\t\t\t\t|\n");
	    printf("|\t\t%d\t\t|\t\t%d\t\t|\n", playerScore, computerScore);
	    printf("|\t\t\t\t|\t\t\t\t|\n");
	    printf("|\t\t\t\t|\t\t\t\t|\n");
	    printf("=================================================================\n");
	}
	  // Declare winner
	if (playerScore == 3) {
		printf("Congratulations! You win the game!\n\n");
	} else {
	    printf("Sorry, the computer wins this time.\n\n");
	}
}

int main(){
	dashboard();
}

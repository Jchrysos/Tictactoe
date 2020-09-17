 #include <iostream>

using namespace std;
int main(){
  // initialize score and game
  int Xwins = 0;
  int Owins = 0;
  int ties = 0;
  char restart = 'Y';
  while (restart == 'Y'){
  char A1 = ' ', A2 = ' ', A3 = ' ', B1 = ' ', B2 = ' ', B3 = ' ', C1 = ' ', C2 = ' ', C3 = ' ';
  bool gameover = false;
  int turn = 1;
  //loops once for each turn
  while (gameover == false){
 cout << "       1    2    3    " << endl;
 cout << "  A    "<< A1 <<"    "<< A2 <<"    "<< A3 <<"     " << endl;
 cout << "  B    "<< B1 <<"    "<< B2 <<"    "<< B3 <<"     " << endl;
 cout << "  C    "<< C1 <<"    "<< C2 <<"    "<< C3 <<"     " << endl;
 //determine move
 cout << endl << "Input a square (e.g. A1): ";
 bool validmove = false;
 while(validmove == false){
 string move;
 cin >> move;
 validmove = true;
 if ((move == "A1") && (turn % 2 == 1) && (A1 == ' ')) A1 = 'X';
 else if ((move == "A2") && (turn % 2 == 1) && (A2 == ' ')) A2 = 'X';
 else if ((move == "A3") && (turn % 2 == 1) && (A3 == ' ')) A3 = 'X';
 else if ((move == "B1") && (turn % 2 == 1) && (B1 == ' ')) B1 = 'X';
 else if ((move == "B2") && (turn % 2 == 1) && (B2 == ' ')) B2 = 'X';
 else if ((move == "B3") && (turn % 2 == 1) && (B3 == ' ')) B3 = 'X';
 else if ((move == "C1") && (turn % 2 == 1) && (C1 == ' ')) C1 = 'X';
 else if ((move == "C2") && (turn % 2 == 1) && (C2 == ' ')) C2 = 'X';
 else if ((move == "C3") && (turn % 2 == 1) && (C3 == ' ')) C3 = 'X';
 else if ((move == "A1") && (turn % 2 == 0) && (A1 == ' ')) A1 = 'O';
 else if ((move == "A2") && (turn % 2 == 0) && (A2 == ' ')) A2 = 'O';
 else if ((move == "A3") && (turn % 2 == 0) && (A3 == ' ')) A3 = 'O';
 else if ((move == "B1") && (turn % 2 == 0) && (B1 == ' ')) B1 = 'O';
 else if ((move == "B2") && (turn % 2 == 0) && (B2 == ' ')) B2 = 'O';
 else if ((move == "B3") && (turn % 2 == 0) && (B3 == ' ')) B3 = 'O';
 else if ((move == "C1") && (turn % 2 == 0) && (C1 == ' ')) C1 = 'O';
 else if ((move == "C2") && (turn % 2 == 0) && (C2 == ' ')) C2 = 'O';
 else if ((move == "C3") && (turn % 2 == 0) && (C3 == ' ')) C3 = 'O';
 else {
   cout <<endl << "Please enter a valid move!" <<endl;
   validmove = false;
 }
 }
 //check if X won
 if((A1 == 'X' && A2 == 'X' && A3 == 'X') ||
    (B1 == 'X' && B2 == 'X' && B3 == 'X') ||
    (C1 == 'X' && C2 == 'X' && C3 == 'X') ||
    (A1 == 'X' && B1 == 'X' && C1 == 'X') ||
    (A2 == 'X' && B2 == 'X' && C2 == 'X') ||
    (A3 == 'X' && B3 == 'X' && C3 == 'X') ||
    (A1 == 'X' && B2 == 'X' && C3 == 'X') ||
    (C1 == 'X' && B2 == 'X' && A3 == 'X')) {
   Xwins++;
   gameover = true;
 }
 //check if O won
 else if((A1 == 'O' && A2 == 'O' && A3 == 'O') ||
    (B1 == 'O' && B2 == 'O' && B3 == 'O') ||
    (C1 == 'O' && C2 == 'O' && C3 == 'O') ||
    (A1 == 'O' && B1 == 'O' && C1 == 'O') ||
    (A2 == 'O' && B2 == 'O' && C2 == 'O') ||
    (A3 == 'O' && B3 == 'O' && C3 == 'O') ||
    (A1 == 'O' && B2 == 'O' && C3 == 'O') ||
    (C1 == 'O' && B2 == 'O' && A3 == 'O')) {
   Owins++;
   gameover = true;
 }
 //check if there is a tie
 else if (turn == 9){
   gameover = true;
   ties++;
 }
 //increment the turn number
 turn++;
  }
  //show final board and cumulative scores
  cout << "Game over!!"<< endl;
  cout << "       1    2    3    " << endl;
 cout << "  A    "<< A1 <<"    "<< A2 <<"    "<< A3 <<"     " << endl;
 cout << "  B    "<< B1 <<"    "<< B2 <<"    "<< B3 <<"     " << endl;
 cout << "  C    "<< C1 <<"    "<< C2 <<"    "<< C3 <<"     " << endl;
  restart = 'N';
  cout << "The total score is:" << endl << "X has won " << Xwins << " times,";
  cout << endl<< "O has won " << Owins << " times,";
  cout << endl<< "And there have been " << ties << " ties." << endl;
  //offer to play again
  cout << "Want to play again? (Y/N): ";
  cin >> restart;
  }
 return 0;
  }

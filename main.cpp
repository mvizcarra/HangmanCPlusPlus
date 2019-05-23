///Michael Vizcarra
///comsc 165 final

#include <iostream>
#include <bits/stdc++.h>


using namespace std;

///player class declaration
class Player
{
    private:
        string name;
        int score;

    public:
        void setName(string &); ///set name, pass by reference
        void setScore(int);     ///set score
        string getName();
        int getScore();
};
        ///player class functions
        void Player::setName(string &n) ///set name
        {
            name = n;
        }

        void Player::setScore(int s)  /// set score
        {
            score = s;
        }

        string Player::getName()  /// get name
        {
            return name;
        }

        int Player::getScore()  ///get score
        {
            return score;
        }

class usedAvailable
{
    private:
        char availableArray[26];
        char usedArray[26];
        char temp;
    public:
        void initializeAvailableArray();
        void initializeUsedArray();
        void setAvailableArray(char);
        void showAvailableArray();
        void showUsedArray();
};

        void usedAvailable::initializeAvailableArray() ///fills available array with alphabet using acii
        {
             for (int i = 0; i < 26 ; i++)
                {
                    availableArray[i] = 97 + i;
                }

        }

        void usedAvailable::initializeUsedArray() ///fills used with blanks
        {
            for(int i = 0; i < 26; i++)
            {
                usedArray[i] = '_';
            }
        }

        void usedAvailable::setAvailableArray(char guess)  ///when a guess is made, moves the corresponding letter from available into used
        {
            for(int i = 0; i < 26; i++)
            {
                if ( guess == availableArray[i])
                {
                    usedArray[i] = availableArray[i];
                    availableArray[i] = '_';

                }

                if ( guess == usedArray[i])
                {
                    cout << guess << " was already used" << endl;
                }
            }
        }

        void usedAvailable::showAvailableArray() /// displays available array
        {
            for(int i = 0; i < 26; i++)
            {
                cout << availableArray[i] << " " ;
            }
        }

        void usedAvailable::showUsedArray() ///displays used array
        {
            for(int i = 0; i < 26; i++)
            {
                cout << usedArray[i] << " " ;
            }
        }

///hangmanDisplay class declaration
class hangmanDisplay
{
    private:
        int screenNumber;

    public:
        void setDisplay(int);
        void showDisplay();
};
        ///hangmanDisplay functions
        void hangmanDisplay::setDisplay(int x)
        {
            screenNumber = x;
        }

        void hangmanDisplay::showDisplay() ///displays drawing depending on amount of mistakes
        {
            switch (screenNumber)
            {

                    case 0:

                        cout << endl << "*********" << endl << endl;
                        cout << "   ______ "        << endl;
                        cout << "   |    | "         << endl;
                        cout << "   |      "         << endl;
                        cout << "   |      "       << endl;
                        cout << "   |      "       << endl;
                        cout << "   |      "             << endl;
                        cout << "   _______"        << endl;


                        break;

                    case 1:

                        cout << endl << "*********" << endl << endl;
                        cout << "   ______ "        << endl;
                        cout << "   |    | "         << endl;
                        cout << "   |    O "         << endl;
                        cout << "   |      "       << endl;
                        cout << "   |      "       << endl;
                        cout << "   |      "             << endl;
                        cout << "   _______"        << endl;


                        break;

                    case 2:

                        cout << endl << "*********" << endl << endl;
                        cout << "   ______ "        << endl;
                        cout << "   |    | "         << endl;
                        cout << "   |    O "         << endl;
                        cout << "   |    | "       << endl;
                        cout << "   |      "       << endl;
                        cout << "   | "             << endl;
                        cout << "   _______"        << endl;


                        break;

                    case 3:

                        cout << endl << "*********" << endl << endl;
                        cout << "   ______  "        << endl;
                        cout << "   |    |  "         << endl;
                        cout << "   |    O  "         << endl;
                        cout << "   |   /|  "       << endl;
                        cout << "   |       "       << endl;
                        cout << "   | "             << endl;
                        cout << "   _______ "        << endl;


                        break;

                    case 4:

                        cout << endl << "*********" << endl << endl;
                        cout << "   ______  "        << endl;
                        cout << "   |    |  "         << endl;
                        cout << "   |    O   "         << endl;
                        cout << "   |   /|\\ "       << endl;
                        cout << "   |        "       << endl;
                        cout << "   | "             << endl;
                        cout << "   _______  "        << endl;


                        break;

                    case 5:

                        cout << endl << "*********" << endl << endl;
                        cout << "   ______ "        << endl;
                        cout << "   |    |"         << endl;
                        cout << "   |    O"         << endl;
                        cout << "   |   /|\\"       << endl;
                        cout << "   |   /    "       << endl;
                        cout << "   | "             << endl;
                        cout << "   _______"        << endl;


                        break;

                    case 6:

                        cout << endl << "*********" << endl << endl;
                        cout << "   ______ "        << endl;
                        cout << "   |    |"         << endl;
                        cout << "   |    O"         << endl;
                        cout << "   |   /|\\"       << endl;
                        cout << "   |   / \\"       << endl;
                        cout << "   | "             << endl;
                        cout << "   _______"        << endl;

                        break;
            }

        }

int main()
{

    ///Opening title and instructions


    cout << "**********"  << endl << endl;
    cout << "HANGMAN"     << endl << endl;
    cout << "**********"  << endl << endl;

    cout << "Instructions and Rules" << endl;
    cout << "1. Player 1 will enter a word to be guessed" << endl;
    cout << "2. Player 2 will guess one letter at a time" << endl;
    cout << "3. Player 2 will get 6 mistakes" << endl;
    cout << "    -Head" <<endl;
    cout << "    -Body" <<endl;
    cout << "    -L Arm" <<endl;
    cout << "    -R Arm" <<endl;
    cout << "    -L Leg" <<endl;
    cout << "    -R Leg" <<endl;
    cout << "4. If Player 2 guesses the entire word within 6 mistakes, Player 2 will get a point" << endl;
    cout << "5. But if Player 2 makes 6 mistakes before he guesses the word, Player 1 will get a point" << endl;
    cout << "6. After Player 2 guesses the word or reaches 6 mistakes, the turns will switch" << endl;
    cout << "7. Player 2 will enter a word and Player 1 will guess" << endl;
    cout << "8. After both players get a chance to guess, round 1 will be completed" << endl;
    cout << "9. Players can choose to continue or stop" << endl;
    cout << "10. When players choose to stop, finals scores will be displayed" << endl << endl;
    cout << "*********" << endl;

    ///input names
    string nameTemp; ///holds name

    cout << "Enter Player 1 name: " << endl;
    cin >> nameTemp;

    Player player1;
    player1.setName(nameTemp); ///name gets inputed into object player 1
    player1.setScore(0);       ///sets score as 0

    cout << "Enter Player 2 name: "  << endl;
    cin >> nameTemp;

    Player player2;
    player2.setName(nameTemp); ///name gets inputed into object player 2
    player2.setScore(0);       ///set score as 0


    ///variables used in loop
    int menuSelect = 0;       /// used to continue and exit loop
    int wordLength;           ///will hold length of the word (size arrays and parameter for loops)

    ///one loop is one round
    do
    {


            ///Player 1 input word
            string word1;                                                /// holds the word
            cout << "**********"   << endl << endl;
            cout << player1.getName() << " enter word: " << endl << endl;
            cout << "*********"    << endl << endl;
            cin >> word1;
            cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl
                 << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;

            ///copy word into array
            wordLength = word1.length();

            char wordArray[wordLength];
            char guessArray[wordLength];

            strcpy(wordArray, word1.c_str());

            for (int i = 0; i <= wordLength ; i++)
                {
                    guessArray[i] = '_' ;
                }

            ///Player 2 guess
            char guess2;         ///holds the guess
            int mistakes2 = 0;   ///amount of mistakes
            bool run2 = true;    ///bool to end loop
            usedAvailable ua2;   ///creates object ua
            ua2.initializeAvailableArray();; ///resets used and available array each round
            ua2.initializeUsedArray();

            do
            {
                    ///hangman display
                    hangmanDisplay gameDisplay;      ///creates gameDisplay object

                    gameDisplay.setDisplay(mistakes2); ///sets display based off how many mistakes
                    gameDisplay.showDisplay();        ///calls display function

                    ///display used and available
                    cout << "Available: ";
                    ua2.showAvailableArray();
                    cout << endl;
                    cout << "Used: ";
                    ua2.showUsedArray();
                    cout << endl << endl;

                    ///displays guessArray
                    cout << "Your guess: ";
                    for (int i = 0; i < wordLength; i++)
                    {
                        cout << guessArray[i] << " " ;

                    }

                    /// input guess
                    cout << endl << endl;
                    cout << player2.getName()  << " will now guess " << endl; ///calls getName
                    cout << "Enter a letter: " << endl;
                    cin >> guess2;

                    ua2.setAvailableArray(guess2); /// updates used and available

                    ///comparing guess with word
                    int charCounter = 0;

                    for(int i = 0 ; i < wordLength ; i++)
                    {
                        if (guess2 == wordArray[i])          ///compares guess with each char in wordArray
                        {
                            guessArray[i] = wordArray[i];  ///if guess is correct, guess is inserted into guessArray
                        }
                        else
                        {
                            charCounter = charCounter + 1; ///if guess is wrong, charCounter increments
                        }

                        if (charCounter >= wordLength)      ///if checkCounter >= wordLength, then the guess does not match char in array
                            {
                                mistakes2 = mistakes2 + 1;    ///mistakes increments
                            }
                    }


                    ///checks if guessArray = wordArray
                    int checker = 0;

                    for(int i = 0; i < wordLength ; i++)
                    {
                        if (guessArray[i] == wordArray[i]) ///must check each character
                        {

                            checker = checker + 1;         ///if a character matches, checker increments
                        }
                    }

                    if (checker == wordLength) ///if checker = word length, then the player 2 wins and exists
                    {
                        gameDisplay.showDisplay();
                        cout << endl;
                        cout << player2.getName() << " has guessed correctly!" << endl;
                        cout << "The word was " << word1 << endl << endl;

                        player2.setScore( player2.getScore() + 1);

                        cout << "SCORE" << endl;
                        cout << player1.getName() << ": " << player1.getScore() << endl;
                        cout << player2.getName() << ": " << player2.getScore() << endl;
                        run2 = false;
                    }

                    if (mistakes2 >= 6)                             ///if mistakes >= 6, then player  1 loses and exists
                    {
                        gameDisplay.setDisplay(6);
                        gameDisplay.showDisplay();
                        cout << endl;
                        cout << player2.getName() << " has made too many mistakes!" << endl;
                        cout << "The word was " << word1 << endl << endl;

                        player1.setScore( player1.getScore() + 1);

                        cout << "SCORE" << endl;
                        cout << player1.getName() << ": " << player1.getScore() << endl;
                        cout << player2.getName() << ": " << player2.getScore() << endl;
                        run2 = false;
                    }

            }while(run2 == true);                        ///end of player 2 guess


            ///Player 2 input word
            string word2;
            cout << "**********"   << endl << endl;
            cout << player2.getName() << " enter word: " << endl << endl;
            cout << "*********"    << endl << endl;
            cin >> word2;
            cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl
                 << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;

            ///putting word into array
            wordLength = word2.length();

            wordArray[wordLength];
            guessArray[wordLength];

            strcpy(wordArray, word2.c_str());

            for (int i = 0; i <= wordLength ; i++)
            {
                guessArray[i] = '_' ;
            }

            ///Player 1 guess
            char guess1;
            int mistakes1 = 0;
            bool run1 = true;
            usedAvailable ua1;
            ua1.initializeAvailableArray();;
            ua1.initializeUsedArray();

            do
            {
                    ///display hangman
                    hangmanDisplay gameDisplay;

                    gameDisplay.setDisplay(mistakes1); ///sets display based off how many mistakes
                    gameDisplay.showDisplay();        ///calls display function

                    ///display used and available array
                    cout << "Available: ";
                    ua1.showAvailableArray();
                    cout << endl;
                    cout << "Used: ";
                    ua1.showUsedArray();
                    cout << endl << endl;

                    ///displays guessArray
                    cout << "Your guess: ";
                    for (int i = 0; i < wordLength; i++)
                    {
                        cout << guessArray[i] << " " ;

                    }

                    /// input guess
                    cout << endl << endl;
                    cout << player1.getName() << " will now guess " << endl;
                    cout << "Enter a letter: " << endl;
                    cin >> guess1;

                    ua1.setAvailableArray(guess1);

                    ///comparing guess with word
                    int charCounter = 0;

                    for(int i = 0 ; i < wordLength ; i++)
                    {
                        if (guess1 == wordArray[i])          ///compares guess with each char in wordArray
                        {
                            guessArray[i] = wordArray[i];  ///if guess is correct, guess is inserted into guessArray
                        }
                        else
                        {
                            charCounter = charCounter + 1; ///if guess is wrong, charCounter increments
                        }

                        if (charCounter >= wordLength)      ///if checkCounter >= wordLength, then the guess is wrong
                        {
                            mistakes1 = mistakes1 + 1;    ///mistakes increments
                        }
                    }


                    ///checks if guessArray = wordArray
                    int checker = 0;

                    for(int i = 0; i < wordLength ; i++)
                    {
                        if (guessArray[i] == wordArray[i]) ///must check each character
                        {
                            checker = checker + 1;         ///if a character matches, checker increments
                        }
                    }

                    if (checker == wordLength) ///if checker = word length, then the player 2 wins and exists
                    {
                        gameDisplay.showDisplay();
                        cout << endl;
                        cout << player1.getName() << " has guessed correctly!" << endl;
                        cout << "The word was " << word2 << endl << endl;

                        player1.setScore( player1.getScore() + 1);

                        cout << "SCORE" << endl;
                        cout << player1.getName() << ": " << player1.getScore() << endl;
                        cout << player2.getName() << ": " << player2.getScore() << endl;
                        run1 = false;
                    }

                    if (mistakes1 >= 6)                             ///if mistakes >= 6, then player  1 loses and exists
                    {
                        gameDisplay.setDisplay(6);
                        gameDisplay.showDisplay();
                        cout << endl;
                        cout << player1.getName() << " has made too many mistakes!" << endl;
                        cout << "The word was " << word2 << endl << endl;

                        player2.setScore( player2.getScore() + 1);

                        cout << "SCORE" << endl;
                        cout << player1.getName() << ": " << player1.getScore() << endl;
                        cout << player2.getName() << ": " << player2.getScore() << endl;
                        run1 = false;
                    }

            }while(run1 == true); ///end of player 1 guess

            cout << endl << endl;
            cout << "1. Continue another round" << endl;
            cout << "2. Exit" << endl << endl;
            cout << "Enter desired number: " << endl;
            cin >> menuSelect;


    }while(menuSelect != 2); ///end of round

    ///tests who wins and displays score
    if (player1.getScore() > player2.getScore() ) ///calls getScore
    {
        cout << endl << endl;
        cout << player1.getName() << " Wins!" << endl; ///calls getName
        cout << "FINAL SCORE: " << endl;
        cout << player1.getName() << ": " << player1.getScore() << endl;
        cout << player2.getName() << ": " << player2.getScore() << endl;
    }
    else if (player1.getScore() < player2.getScore() )
    {
        cout << endl << endl;
        cout << player2.getName() << " Wins!" << endl;
        cout << "FINAL SCORE: " << endl;
        cout << player1.getName() << ": " << player1.getScore() << endl;
        cout << player2.getName() << ": " << player2.getScore() << endl;
    }
    else if (player1.getScore() == player2.getScore() )
    {
        cout << endl << endl;
        cout << "IT'S A DRAW! " << endl;
        cout << "FINAL SCORE: " << endl;
        cout << player1.getName() << ": " << player1.getScore() << endl;
        cout << player2.getName() << ": " << player2.getScore() << endl;
    }

    return 0;
}

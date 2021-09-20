#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
 1. int (integer values)
 2. bool (boolean values [true / false])
 3. float (floating point values)
 4. double (decimal points values)
 5. char (character values)
 6. unsigned int (unsigned integer values)
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'

    int temperature = 68;
    int hours = 6;
    int population = 1000;

    double price = 1.50;
    double taxRate = 0.10;
    double totalSalePrice = 3.5;

    float piValue = 3.14159f;
    float radius = 3.5;
    float area = 38.4844775f;

    bool status = false;
    bool gameOver = true;
    bool playAgain = false;

    char firstInitial = 'F';
    char middleInitial = 'T';
    char lastInitial = 'S';

    unsigned int positiveNum = 500;
    unsigned int numDays = 30;
    unsigned int minRemaining = 45;

    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function

    ignoreUnused(temperature, hours, population, price, taxRate, totalSalePrice, piValue, radius, area, status, gameOver, playAgain, firstInitial, middleInitial, lastInitial, positiveNum, numDays, minRemaining);
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
void printBill(double price = 0.00, double tip = 0.00, double total = 0.00)
{
    ignoreUnused(price, tip, total);
}

/*
 2)
 */
bool restartExperiment(int totalMin = 45, double startTemp = 68.5)
{
    ignoreUnused(totalMin, startTemp);
    return {};
}

/*
 3)
 */
char getFirstInitial(int numOfPerson, int size = 10)
{
    ignoreUnused(numOfPerson, size);
    return {};
}

/*
 4)
 */
double findCircleArea(double radius = 0.00, double pi = 3.14159)
{
    ignoreUnused(radius, pi);
    return {};
}

/*
 5)
 */
unsigned int getDayOfMonth(int month = 1, int year = 2000)
{
    ignoreUnused(month, year);
    return {};
}

/*
 6)
 */
float getCompoundInterest(int amount = 0, float interestRate = 0.07f, int accNumber = 0)
{
    ignoreUnused(amount, interestRate, accNumber);
    return {};
}

/*
 7)
 */
int getMenuSelection(int randomNum, int numberOptions = 10)
{
    ignoreUnused(randomNum, numberOptions);
    return {};
}

/*
 8)
 */
void displayID(int badgeNum, int month, int day, int year, char firstLetter = 'A', char lastLetter = 'Z')
{
    ignoreUnused(badgeNum, month, day, year, firstLetter, lastLetter);
}

/*
 9)
 */
double getVolume(double length = 0.00, double width = 0.00, double height = 1.00)
{
    ignoreUnused(length, width, height);
    return {};
}

/*
 10)
 */
bool getGameStatus(int numOfPlayers, int playerTurn, char playerColor = 'R')
{
    ignoreUnused(numOfPlayers, playerTurn, playerColor);
    return {};
}

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    ignoreUnused(carRented);
    
    //1)
    printBill(1.10, 0.50, 1.50);

    //2)
    auto status = restartExperiment();
    ignoreUnused(status);

    //3)
    auto firstInitial = getFirstInitial(5, 50);
    ignoreUnused(firstInitial);

    //4)
    auto area = findCircleArea(2.55);
    ignoreUnused(area);

    //5)
    auto day = getDayOfMonth(5, 1999);
    ignoreUnused(day);

    //6)
    auto amount = getCompoundInterest(50000, 0.10f, 10532);
    ignoreUnused(amount);

    //7)
    auto selection = getMenuSelection(3);
    ignoreUnused(selection);

    //8)
    displayID(1503, 7, 24, 1999, 'F', 'E');

    //9)
    auto volume = getVolume(1.15, 5.52, 6.33);
    ignoreUnused(volume);

    //10)
    auto winner = getGameStatus(15, 3, 'Y');
    ignoreUnused(winner);

    std::cout << "good to go!" << std::endl;
    return 0;    
}

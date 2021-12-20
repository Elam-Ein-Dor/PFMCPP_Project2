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
 
 int
 bool
 float
 double
 char
 string
 
 
 
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
    int myAge = 30;
    int myHeight = 73;
    int luckyNumber = 7;

    bool codeIsCorrect = true;
    bool thisIsFun = true;
    bool iKnowWhatIAmDoing = false;

    float bottleSize = 8.0f;
    float ringAmount = 2.0f;
    float childAge = 7.5f;

    double price = 29.99;
    double weight = 14.33;
    double timePassed = 17.39;

    char initial = 'D';
    char floor = 'A';
    char apartment = 'F';

    string myName = "Elam";
    string firstProgram = "Hello World!";
    string gratitude = "Thanks Chuck!";

    
    ignoreUnused(number, myAge, myHeight, luckyNumber, codeIsCorrect, thisIsFun, iKnowWhatIAmDoing, bottleSize, ringAmount, childAge, price, weight, timePassed, initial, floor, apartment, myName, firstProgram, gratitude); //passing each variable declared to the ignoreUnused() function
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
float getSize(int height, int width, int length = 3)
{
    ignoreUnused(height, width, length);
    return {};
}
/*
 2)
 */
int driveToWork(int loadGpsRoute, bool checkGasLevel, float chooseRadioStation = 94.3f)
{
    ignoreUnused(loadGpsRoute, checkGasLevel, chooseRadioStation);
    return {};
}
/*
 3)
 */
bool checkCodeKnowledge(bool checkCodeErrors, bool checkCodeStyle = true)
{
    ignoreUnused(checkCodeErrors, checkCodeStyle);
    return {};
}
/*
 4)
 */
int makeCoffee(int grindBeans, int checkSize, bool checkHeat = true, int heatWater = 212)
{
    ignoreUnused(grindBeans, checkSize, checkHeat, heatWater);
    return {};
}
/*
 5)
 */
void readBook(int openToLastPage, float getSpeed = 2.5f, bool textToSpeech = true)
{
    ignoreUnused(openToLastPage, getSpeed, textToSpeech);
}
/*
 6)
 */
string greetUser(double getTimeAndDate, string getUserName, bool checkFirstTimeUser = false)
{
    ignoreUnused(getTimeAndDate, getUserName, checkFirstTimeUser);
    return {};
} 
/*
 7)
 */
int makeScrambledEggs(int setHeat, int getEggAmount = 4, int getCookingLevel = 3)
{
    ignoreUnused(setHeat, getEggAmount, getCookingLevel);
    return {};
}
/*
 8)
 */
void morningRoutine(double getStartTime = 7.5, int openShades = 75, bool startCoffeeMaker = true, int heatShowerWater = 80)
{
    ignoreUnused(getStartTime, openShades, startCoffeeMaker, heatShowerWater);
}
/*
 9)
 */
double calculateAverage(int getNumberA, int getNumberB, int getNumberC, int getNumberD = 75)
{
    ignoreUnused(getNumberA, getNumberB, getNumberC, getNumberD);
    return{};
}
/*
 10)
 */
char calculateGrade(bool checkForErrors, int countMarkups = 5, int lookupGradePrimer = 100)
{
    ignoreUnused(checkForErrors, countMarkups, lookupGradePrimer);
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
    
    //1)
    auto roomSize = getSize(7, 10, 5);
    //2)
    auto getToWork = driveToWork(5, true, 103.1f);
    //3)
    auto studentEvaluation = checkCodeKnowledge(false, true);
    //4)
    auto coffeeIsReady = makeCoffee(50, 4, true, 212);
    //5)
    relaxWithBook = readBook(34, 2.0f, false);
    //6)
    auto userInterfaceStart = greetUser(100012172021, "MatKatMusic", true);
    //7)
    auto eatBreakfast = makeScrambledEggs(250, 3, 3);
    //8)
    wakeUp = morningRoutine(0645, 80, true, 78);
    //9)
    auto getAverage = calculateAverage(5, 47, 1002, 75);
    //10)
    auto studentGrade = calculateGrade(false, 6, 150);
    
    ignoreUnused(carRented, roomSize, getToWork, studentEvaluation, coffeeIsReady, relaxWithBook, userInterfaceStart, eatBreakfast, wakeUp, getAverage, studentGrade);
    std::cout << "good to go!" << std::endl;
    return 0;    
}

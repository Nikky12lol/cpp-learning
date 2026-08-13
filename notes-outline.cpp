#include <iostream>
/*namespace first{
int x = 69; } */
// for some reason the name space is created outside of the main space

int main(){ 
    //this is a comment 
    
    /* this 
    is 
    a 
    multi-line
    comment
    */
/*
std::cout << "Its really good!" << std::endl;
std::cout << "I love pizza!" << std::endl;*/



/*the lines can also be ended like this,
std::cout << "i am batman" << '\n';
std::cout <<"i want a  bat women" << '\n'
*/



// NOW INTEGERS AND ARTHEMATICS 


/*int x ; //declared 
x = 5 ; //assignment

//OR

int y = 3;

std::cout << x << '\n'; 
std::cout << y << '\n';

int sum = x + y ; 
std::cout << sum << '\n';*/

//NOW DOUBLES these can store decimals

/* double price = 10.99;
double fuel = 1.1;


std::cout << price;   */

//NOW CHARS these are single charecters

/*char currency = '$';
std::cout << currency; */

//NOW BOOLEANS these can be true or false 

/*bool power = true
bool lockedIn = true*/  

 /*NOW STRINGS these are nothing but many chars together
these are a little leanthy to declare

std::string variable(like x,y.....) = "........"
*/


/*std::string name = "nikhil";
std::cout << name;*/
// here i am assigning a variable to the string/sentence
// i can also do a string literal, that is,


   /*std::string name = "nikhil";
std::cout << "hi " + name;*/

/*CONST KEYWORD this is a keyword that mods the variable,
it makes it read only. No one can modify this variable,
once defined a value. eg,
*/ 

/*const double pi = 3.14159;
const double lightSpeed = 300000000;*/


//now that thes valuse are set, i wont be able to modify these,

// double pi = 420.69  this is not possible/results in error

//NAME SPACES here we can use the same variable for 2 or more values,


/*int x = 3;


    std::cout << first::x; */  //this is used to call the one that is in the name space


/*       since i have made a name space,
       i can assign more values to same variable
       
       here if you call the variable with out calling the name space
       then the local version (the one that is not in any name space) is used

       */


       //USING NAMESPACE , it is used to reduce repitition eg,
    /*using namespace first;

     std::cout << x; */     // here the first namespace x is called not the local


        //USING NAMESPACE STD; this is used to save some typing


       /* using namespace std;
        string name = "nikhil";               // is valid instead of std::string name = "nikhil";
                              

                                    //OR
        cout << "Hello " << name // is valid instead of std::cout.......; */

        /*here instead of using namespace std, that can cause nameing conflicts we use 
        using std::cout;      for cutting down the std prefix in front of cout;
        using std::string;    for cutting down the std prefix in front of string;
        */ 


        //USING TYPEDEF; it is used to prevent typos for really long data types,

/*  

    like for ex, std::string is a data type to store the strings,
     so i can make a short cut name for "std::string" like this,
     typedef std::string text_t;

    what happens here is, instead of using the whole line (std::string) i can use text_t,
    std::string name = "bro";    --->>    text_t name = "bro";
    and also used for other data types like int,
    typedef int number_t;
    number age = 17;

*/

/*this can also be done by the using keyword,

                using text_t = std::string;                 *text is just an example not the part of syntax
                using number_t = int; 
    would also work the same,   
*/


//ARETHEMATICS (+_*/)


/*      
            int students = 20;
            students = students + 1;
            students+=1;
            students++;             this is called the increament opperator


            students = students - 1;
            students-=1;
            students--;              this is called the decreament opperator
            
            students = students * 2; 
            students*=2;

            students = students / 2;
            students/=2;

            here we are dealing with students as an int variable so if
            we divide it by 3 which is a double, we get only the int part,


            we can also use the modulus opperator to get the remainder after dividing 2 numbers;

            int remainder students = students % 2;    which is 0; 2 divides entierly.
            int remainder students = students % 3;    which is 2; 

            std::cout remainder;
            std::cout students;

            if we use a long formula which includes many arthm. opperators (+-/*) then,

            first we check "()"  parantheseis;
            second multiplication and division;
            then addition and substraction;
*/
        /*  TYPECONVERSION; there are two types of conversions 

            impicit; eg,
            
            int x = 3.14159
            std::cout << x ;      only shows the int part, 

            here x is a double and is converted to int impicitly

            explicit; eg,

            double x = (int) 3.14159;
            std::cout << x ;       only shows the int part but is stored in the double data type.

            it can also be used like this,  imagine a grading system,


            int correct = 8;
            int questions = 10;

            int score = correct/questions * 100; 
            std::cout << score << "%";
            
            this dosent work cuz, we are doing int division and not using double part

            to fix this we use type conversion,

            int correct = 8;
            int questions = 10;

            int score = correct/(double)questions * 100; 
             std::cout << score << "%";


            now this works as the double part is retained cause of double fnx,
            
        
        */

// TILL NOW WE ONLY USED THE INSERSION OPP AND NOT THE EXTRACTION OPP I.E, INPUT 

  /*    cout << is the insersion op
        cin >> is the extra.... op    accepts input;

        REFFER REV 2;

         */


         //GET LINE FNXN; this is used when an input has a space in it 

         /*
         eg, 
            std::string name;
            std::cout << "What is your full name? ";
            std::cin >> name;
            std::cout << "hello " << name;

            say i typed, NIKHIL KRISHNA that has a space in it;
            it wouldnt work
            hence the get line fixes it,

            sol.

            std::string name;
            std::cout << "....."
            std::getline (std::cin, name);

            now this works as the getline fxn can identify ws(white spaces)
            but here comes a problem, if we use a cin (input fnx) followed by a getline,
            we run into a problem,
            the get line fnxn takes our input (enter after we type) and shows a blank space
            eg,
            
            
            std::string name;
            int age;
            std::cout << "what is your full name? ";
            std::getline (std::cin, name);
            std::cout << "what is your age? ";
            std::cin >> age;
            std::cout << "hello " << name << " you are " << age << " years old";
            instead of this if we want to use cin fnxn and then getline, like this,

            std::cout << "what is your age? ";
            std::cin >> age;
            std::cout << "what is your full name? ";
            std::getline (std::cin, name);
            this gives an error and dosent take any input for getline
            to fix this we can use,
            

             std::cout << "what is your age? ";
            std::cin >> age;
            std::cout << "what is your full name? ";
            getline(std::cin << std::ws, name);

            this will remove any white spaces,
         */

        //reffer Cmath for fnxns




        //IF FXN;     this is used to check if a fxn is true

/*
int main(){

int age;

std::cout << "What is your age ? ";
 std::cin >> age;


 
if (age >= 100){ 
                std::cout << "You are too old to enter!";
}
else if (age >= 18){

    std::cout << "Welcome to the site";
}
else if (age  < 0){

    std::cout << "you are not born yet";
}
else {

    std::cout << "you are not old enough!";
}

    return 0;
}


*/



//SWITCH CASES ; this is used instead of many if else statement and it is easier to read

/*
    int month;

    std::cout << "Please enter a month (1-12) :";
    std::cin >> month;

    switch(month){                                                this is used to specify which value to inspect

        case 1:                                                   cases are used to check if somevalue is true  
        std::cout << "it is jan";
        break;                                                    break is used to end the case 

        case 2:                                                     
        std::cout << "it is feb";
        break;

        case 3: 
        std::cout << "it is march";
        break;

        default:                                                   default is used like an else statement if non of the above cases are true
        std::cout << "this should explain it";

        return 0;

*/


// USING TERNARY OPERATOR; it is also a alternatiive to if/else statements


/*      condition1 ? std::cout << "it is true" : std::cout << "it is false"

        if the condition is true then the first side is executed and if it is falsw then the second side is executed
        and also the ternary opp itself can be used as a Lvalue



*/   

    

        
return 0;
}
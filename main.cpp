/*
 Project 3 - Part 1 / 5
Video:  Chapter 2 Part 5
 User-Defined Types

 Create a branch named Part1
 
 1) write 10 user-defined types, each with a random number of member variables
    try to make the member variables have names that are related to the user-defined type.
 
 2) give the member variables relevant data types
 
 3) add a couple member functions.  
    make the function parameter list for those member functions use some of your User-Defined Types
 
 4) make 2 of the 10 user-defined types be nested class
 
 5) One of your UDTs should only use UDTs for its member variable types.   
     No primitives allowed!
 
 6) After you finish defining each type, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Send me the the link to your repl.it in a DM on Slack

 Wait for my code review.
 */

/*
 example:
 */
struct CarWash            //1) a U.D.T. with a random number of member variables
{
    int numSponges = 3;
    double amountOfSoapUsedPerCar = 2.6; //2) relevant data types
    unsigned int numCarsProcessed = 0;
    
    struct Car                             //4) nested class
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        //2) relevant data types
    };
    
    void washAndWaxCar( Car car );         //3) member function with a user-defined type as the parameter.  The user-defined type parameter happens to be the nested class.
    
    Car myCar;  //5) a member variable whose type is a UDT.
};


/*
 1)
 */
struct Artist
{
    int numAlbums = 5;
    float averageAlbumLength = 3.4f;

    struct Album
    {
        int numSongs = 12;
        float averageSongLength = 3.0f;
    };

    double totalAlbumLength( Album album );

    Album debut;
};


/*
 2)
 */
struct Animal
{
    int numOfLegs = 4;
    int numOfEyes = 2;
    char animalClass[7] = "mammal"; FIXME avoid raw character arrays for now.  use std::string if you must

    void classifyAnimal( Animal animal );
    bool isAnimalBipedal( Animal numOfLegs );

};

/*
 3)
 */
struct Student
{
    float gpa = 3.6f;
    int age = 15;
    int absences = 5;

    float calculateGPA( Student student );
    void markAbsence( Student student, int day );
};

/*
 4)
 */
struct Guitar
{
    int stringNum = 7;
    int fretNum = 24;
    char model[7] = "ibanez"; FIXME avoid raw character arrays for now.  use std::string if you must

    struct Strings
    {
        double gauge = 0.011;
    };

   void restringGuitar( Guitar guitar, Strings strings );
};

/*
 5)
 */
struct Airliner
{
    int engines = 4;
    int capacity = 416;
    double fuelCapacity = 183380; FIXME this is a double initialized with an int
    char company[8] = "boeing"; FIXME avoid raw character arrays for now.  use std::string if you must

    double checkFuelAmount( Airliner plane );    
    bool isTakeoffReady( Airliner plane, double fuelAmount );
};

/*
 6)
 */
struct Iphone
{
    int modelNum = 8;
    int storageGB = 64;
    float displaySize = 4.7f;

    void wipeMemory( Iphone iphone );
    bool canRunNewOS( Iphone iphone );
};

/*
 7)
 */
struct House
{
    int numOfRooms = 3;
    int numOfToilets = 1;
    double price = 300000;

    void updatePrice(House house, double newPrice);
};

/*
 8)
 */
struct Engine
{
    double maximumThrust = 79000; FIXME this is a double initialized with an int
    int overallPressureRatio = 32;
    int turbineInletTemp = 1350;

    void checkOil( Engine engine );
    double checkTemperature( Engine engine );
};

/*
 9)
 */
struct Pizza
{
    int numOfToppings = 4;
    int diameter = 14;
    double sliceSize = 4.5;

    double calculateSliceSize( Pizza pizza, int slices );
    Pizza makePizza();
};


/*
 10)
 */
struct AirlinerStation
{
    Airliner freshAirliner;
    Engine generalElectric;

    void replaceEngine(Airliner plane, Engine engine);
    void addFuel(Airliner plane, double fuelAmount);
};


#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}

 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */





 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Send me the the link to your repl.it in a DM on Slack

 Wait for my code review.
 */


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
    char animalClass = 'm';

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
    char model = 'i';

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
    int fuelCapacity = 183380;
    char company = 'b';

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
    int maximumThrust = 79000;
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

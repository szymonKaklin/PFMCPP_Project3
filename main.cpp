 /*
 Project 3 - Part 3 / 5
 video: Chapter 2 - Part 8
 Constructors tasks

 Create a branch named Part3

 On a new branch:

 1) Add a constructor for each User-Defined-Type.
 
 2) amend some of your UDT's member functions to print out something interesting via std::cout
 
 3) Instantiate 1 or 2 instances of each of your user-defined types in the main function at the bottom of that file,

 4) call some of your UDT's amended member functions in main().
 
 5) add some std::cout statements in main() that print out your UDT's member variable values or values returned from your UDT member functions (if they return values)
 
 After you finish defining each type/function:
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Make a pull request after you make your first commit and pin the pull request link to our DM thread.

 send me a DM to check your pull request

 Wait for my code review.
 
 example:
 */

#include <iostream>
namespace Example 
{
struct UDT  // my user defined type named 'UDT'
{
    int a; //a member variable
    UDT() { a = 0; }             //1) the constructor
    void printThing()            //the member function
    {
        std::cout << "UDT::printThing() " << a << std::endl;  //2) printing out something interesting
    }
};

int main()
{
    UDT foo;              //3) instantiating a UDT named 'foo' in main()
    foo.printThing();     //4) calling a member function of the UDT instance.
    
    //5) a std::cout statement accessing foo's member variable.
    //It also demonstrates a 'ternary expression', which is syntactic shorthand for an 'if/else' expression
    std::cout << "Is foo's member var 'a' equal to 0? " << (foo.a == 0 ? "Yes" : "No") << "\n";
    
    return 0;
}
}

//insert Example::main() into main() of user's repo.



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

    float totalAlbumLength(Album album);

    Album debut;
};

float Artist::totalAlbumLength(Artist::Album album)
{
    return album.numSongs * album.averageSongLength;
}


/*
 2)
 */
struct Animal
{
    int numOfLegs = 4;
    int numOfEyes = 2;
    char animalClass = 'm';

    void classifyAnimal(Animal animal);
    bool isAnimalBipedal(Animal animal);
};

void Animal::classifyAnimal(Animal animal)
{
    std::cout << animal.animalClass << std::endl;
}

bool Animal::isAnimalBipedal(Animal animal)
{
    if(animal.numOfLegs == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

/*
 3)
 */
struct Student
{
    float gpa = 3.6f;
    int age = 15;
    int absences = 5;

    float calculateGPA(Student student);
    void markAbsence(Student student, int day);
};

float Student::calculateGPA(Student student)
{
    return student.gpa;
}

void Student::markAbsence(Student student, int day)
{
    student.absences += day;
}

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

   void restringGuitar(Guitar guitar, Strings strings);
};

void Guitar::restringGuitar(Guitar guitar, Guitar::Strings strings)
{
    std::cout << "Guitar of model " << guitar.model << ", with string number: "<< guitar.stringNum << ", has been re-strung using strings of gauge: "<< strings.gauge << std::endl;
}

/*
 5)
 */
struct Airliner
{
    int engines = 4;
    int capacity = 416;
    int fuelCapacity = 183380;
    char company = 'b';

    double checkFuelAmount(Airliner plane);    
    bool isTakeoffReady(Airliner plane, double fuelAmount);
};

double Airliner::checkFuelAmount(Airliner plane)
{
    return plane.fuelCapacity;
}

bool Airliner::isTakeoffReady(Airliner plane, double fuelAmount)
{
    if(fuelAmount > plane.fuelCapacity)
    {
        return true;
    }
    else
    {
        return false;
    }
}
/*
 6)
 */
struct Iphone
{
    int modelNum = 8;
    int storageGB = 64;
    float displaySize = 4.7f;

    void wipeMemory(Iphone iphone);
    bool canRunNewOS(Iphone iphone);
};

void Iphone::wipeMemory(Iphone iphone)
{
    iphone.storageGB = 0;
}

bool Iphone::canRunNewOS(Iphone iphone)
{
    if (iphone.modelNum > 5)
    {
        return true;
    }
    else
    {
        return false;
    } 
}

/*
 7)
 */
struct House
{
    int numOfRooms = 3;
    int numOfToilets = 1;
    double price = 300000;

    void updatePrice(House& house, double newPrice);
};

void House::updatePrice(House& house, double newPrice)
{
    house.price = newPrice;
}

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

void Engine::checkOil(Engine engine)
{
    std::cout << "Oil checked! Maximum thrust: " << engine.maximumThrust << std::endl;
}

double Engine::checkTemperature(Engine engine)
{
    return engine.turbineInletTemp;
}

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

double Pizza::calculateSliceSize(Pizza pizza, int slices)
{
    return pizza.diameter / (pizza.sliceSize * slices);
}

Pizza Pizza::makePizza()
{
    Pizza pepperoni;
    std::cout << "Pizza made!" << std::endl;
    return pepperoni;
}


/*
 10)
 */
struct AirlinerStation
{
    Airliner freshAirliner;
    Engine generalElectric;

    void replaceEngine(Airliner, Engine);
    void addFuel(Airliner& plane, double fuelAmount);
};

void AirlinerStation::replaceEngine(Airliner, Engine)
{
    std::cout << "Replacing plane engine!" << std::endl;
}

void AirlinerStation::addFuel(Airliner& plane, double fuelAmount)
{
    plane.fuelCapacity += fuelAmount;
}

int main()
{
    Example::main();
    std::cout << "good to go!" << std::endl;
    
    //Guitar gibson;
    //Guitar::Strings ernie;

    //gibson.restringGuitar(gibson, ernie);

    //House villa;

    //villa.updatePrice(dom, 250000);
    //std::cout << villa.price << std::endl;

}

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
 click the [run] button. Clear up any errors or warnings as best you can.
 
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
    Artist();
    int numAlbums;
    float averageAlbumLength;

    struct Album
    {
        Album();
        int numSongs;
        float averageSongLength;
    };

    float totalAlbumLength(Album album);

    Album debut;
};

Artist::Artist()
{
    numAlbums = 0;
    averageAlbumLength = 0.f;
}

Artist::Album::Album()
{
    numSongs = 12;
    averageSongLength = 3.0f;
}

float Artist::totalAlbumLength(Artist::Album album)
{
    return album.numSongs * album.averageSongLength;
}


/*
 2)
 */
struct Animal
{
    Animal();
    int numOfLegs;
    int numOfEyes;
    char animalClass;

    void classifyAnimal(Animal animal);
    bool isAnimalBipedal(Animal animal);
};

Animal::Animal()
{
    numOfLegs = 4;
    numOfEyes = 2;
    animalClass = 'm';
}

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
    Student();
    float gpa;
    int age;
    int absences;

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

Student::Student()
{
    gpa = 3.2f;
    age = 15;
    absences = 5;
}

/*
 4)
 */
struct Guitar
{
    Guitar();
    int stringNum;
    int fretNum;
    char model;

    struct Strings
    {
        Strings();
        double gauge;
    };

   void restringGuitar(Guitar guitar, Strings strings);
};

Guitar::Guitar()
{
    stringNum = 7;
    fretNum = 24;
    model = 'i';
}

Guitar::Strings::Strings()
{
    gauge = 0.011;
}

void Guitar::restringGuitar(Guitar guitar, Guitar::Strings strings)
{
    std::cout << "Guitar of model " << guitar.model << ", with string number: "<< guitar.stringNum << ", has been re-strung using strings of gauge: "<< strings.gauge << std::endl;
}

/*
 5)
 */
struct Airliner
{
    Airliner();
    int engines;
    int capacity;
    int fuelCapacity;
    char company;

    double checkFuelAmount(Airliner plane);    
    bool isTakeoffReady(Airliner plane, double fuelAmount);
};

Airliner::Airliner()
{
    engines = 2;
    capacity = 416;
    fuelCapacity = 183380;
    company = 'b';
}

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
    Iphone();
    int modelNum;
    int storageGB;
    float displaySize;

    void wipeMemory(Iphone iphone);
    bool canRunNewOS(Iphone iphone);
};

Iphone::Iphone()
{
    modelNum = 8;
    storageGB = 64;
    displaySize = 4.7f;
}

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
    House();
    int numOfRooms;
    int numOfToilets;
    double price;

    void updatePrice(House& house, double newPrice);
};

House::House()
{
    numOfRooms = 3;
    numOfToilets = 1;
    price = 300000;
}

void House::updatePrice(House& house, double newPrice)
{
    house.price = newPrice;
}

/*
 8)
 */
struct Engine
{
    Engine();
    int maximumThrust;
    int overallPressureRatio;
    int turbineInletTemp;

    void checkOil( Engine engine );
    double checkTemperature( Engine engine );
};

Engine::Engine()
{
    maximumThrust = 7900;
    overallPressureRatio = 32;
    turbineInletTemp = 1350;
}

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
    Pizza();
    int numOfToppings;
    int diameter;
    double sliceSize;

    double calculateSliceSize( Pizza pizza, int slices );
   
    Pizza makePizza();
};

Pizza::Pizza()
{
    numOfToppings = 1;
    diameter = 14;
    sliceSize = 4.5;
}

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
    AirlinerStation();
    Airliner freshAirliner;
    Engine generalElectric;

    void replaceEngine(Airliner, Engine);
    void addFuel(Airliner& plane, double fuelAmount);
};

AirlinerStation::AirlinerStation()
{
    //put something here?
}

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
    std::cout << "good to go!\n" << std::endl;
    
    Artist metallica;
    Artist::Album ride_the_lightning;
    std::cout << metallica.totalAlbumLength(ride_the_lightning) << std::endl;

    Animal dog;
    if(dog.isAnimalBipedal(dog) == true)
    {
         std::cout << "Bipedal" << std::endl;
    }
    else
    {
        std::cout << "Not Bipedal" << std::endl;
    }

    Student philip;
    std::cout << philip.calculateGPA(philip) << std::endl;

    Guitar gibson;
    Guitar::Strings ernie;
    gibson.restringGuitar(gibson, ernie);

    Airliner airbus737;
    std::cout << airbus737.checkFuelAmount(airbus737) << std::endl;

    Iphone s5;
    if(s5.canRunNewOS(s5) == true)
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }

    House villa;
    villa.updatePrice(villa, 250000);
    std::cout << villa.price << std::endl;

    Engine rolls_royce;
    rolls_royce.checkOil(rolls_royce);

    Pizza margharita;
    std::cout << margharita.calculateSliceSize(margharita, 6) << std::endl;

    AirlinerStation heathrow;
    heathrow.replaceEngine(airbus737, rolls_royce);

}

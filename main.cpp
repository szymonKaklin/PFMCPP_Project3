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
#include <iostream>

struct Person
{
    int age;
    int height;
    float hairLength;
    float GPA;
    unsigned int SATScore;
    int distanceTraveled;

    void run(int howFast, bool startWithLeftFoot);

    struct Foot
    {
        int numberOfSteps = 0;
        int step = 5;

        void stepForward()
        {
            numberOfSteps += 1;
        }

        int stepSize(int speed)
        {
            return speed * step;
        }
    };

    Foot leftFoot;
    Foot rightFoot;
};

void Person::run(int howFast, bool startWithLeftFoot)
{
    if(startWithLeftFoot == true)
    {
        leftFoot.stepForward();
        rightFoot.stepForward();
    }
    else
    {
        rightFoot.stepForward();
        leftFoot.stepForward();
    }
    distanceTraveled += leftFoot.stepSize(howFast) + rightFoot.stepSize(howFast);
}

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
    std::cout << "good to go!" << std::endl;
    
    //Guitar gibson;
    //Guitar::Strings ernie;

    //gibson.restringGuitar(gibson, ernie);

    //House villa;

    //villa.updatePrice(dom, 250000);
    //std::cout << villa.price << std::endl;

}

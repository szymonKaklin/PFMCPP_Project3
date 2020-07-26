/*
 Project 3 - Part 4 / 5
 video: Chapter 2 - Part 9
 Member initialization tasks

 Create a branch named Part4
 
 1) initialize some of your member variables either in-class or in the Constructor member initializer list.

 2) make some of your member functions use those initialized member variables via std::cout statements.
 
 3) click the [run] button.  Clear up any errors or warnings as best you can.
 */

#include <iostream>
namespace Example {
struct UDT  
{
    int a; //a member variable
    float b { 2.f }; //3) in-class initialization
    UDT() : a(0) { } //3) 'constructor-initializer-list' member variable initialization
    void printThing()  //the member function
    {
        std::cout << "UDT::printThing() a:" << a << " b: " << b << std::endl;  //4) printing out something interesting
    }
};

int main()
{
    UDT foo; //instantiating a Foo in main()
    foo.printThing(); //calling a member function of the instance that was instantiated.
    return 0;
}
}

//call Example::main()

//insert Example::main() into main() of user's repo.

/*
 1) initialization in constructor body
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
        float totalAlbumLength()
        {
            return numSongs * averageSongLength;
        }
    };

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

/*
 2) initialization in constructor body
 */
struct Animal
{
    Animal();
    int numOfLegs;
    int numOfEyes;
    char animalClass;

    void classifyAnimal();
    bool isAnimalBipedal();
};

Animal::Animal()
{
    numOfLegs = 4;
    numOfEyes = 2;
    animalClass = 'm';
}

void Animal::classifyAnimal()
{
    std::cout << "Animal is of class: " << animalClass << "\n" << std::endl;
}

bool Animal::isAnimalBipedal()
{
    if(numOfLegs == 2)
    {
        return true;
    }
    return false;
}

/*
 3) initialization in constructor body
 */
struct Student
{
    Student();
    float gpa;
    int age;
    int absences;

    void calculateGPA()
    {
        std::cout << "GPA is: " << gpa << "\n" << std::endl;
    }

    void markAbsence(int day);
};

void Student::markAbsence(int day)
{
    absences += day;
}

Student::Student()
{
    gpa = 3.2f;
    age = 15;
    absences = 5;
}

/*
 4) in-class initialization
 */
struct Guitar
{
    Guitar();
    int stringNum = 7;
    int fretNum = 24;
    char model = 'i';

    struct Strings
    {
        Strings();
        double gauge;
    };

   void restringGuitar(Strings strings)
   {
        std::cout << "Guitar of model " << model << ", with string number: "<< stringNum << ", has been   re-strung using strings of gauge: "<< strings.gauge << "\n" << std::endl;
    }
};

Guitar::Guitar() {}

Guitar::Strings::Strings()
{
    gauge = 0.011;
}

/*
 5) in - class initialization
 */
struct Airliner
{
    Airliner();
    int engines = 2;
    int capacity = 416;
    int fuelCapacity = 183380;
    char company = 'b';

    void checkFuelAmount()
    {
        std::cout << "Fuel amount: " << fuelCapacity << "\n" << std::endl;
    }

    bool isTakeoffReady(double fuelAmount)
    {
        if(fuelAmount > fuelCapacity)
        {
            return true;
        }
        return false;
    }
};

Airliner::Airliner() {}

/*
 6) in - class initialization
 */
struct Iphone
{
    Iphone();
    int modelNum = 8;
    int storageGB = 64;
    float displaySize {4.7f};

    void wipeMemory()
    {
        std::cout << "Previous Memory: " << storageGB << "\n -Wiped. \nNew Memory: " << "0\n" << std::endl;
    }

    bool canRunNewOS()
    {
        if (modelNum > 5)
        {
            return true;
        }
        return false; 
    }
};

Iphone::Iphone() {}

/*
 7) Constructor member initializer list
 */
struct House
{
    House();
    int numOfRooms;
    int numOfToilets;
    double price;

    void updatePrice(double newPrice);
};

House::House() : numOfRooms(3), numOfToilets(1), price(300000) {}

void House::updatePrice(double newPrice)
{
    price = newPrice;
}

/*
 8) Constructor member initializer list
 */
struct Engine
{
    Engine();
    int maximumThrust;
    int overallPressureRatio;
    int turbineInletTemp;

    void checkOil()
    {
        std::cout << "Oil checked! Maximum thrust: " << maximumThrust << "\n" << std::endl;
    }
    
    void checkTemperature()
    {
        std::cout << "Turbine Inlet Temp: " << turbineInletTemp << "\n" << std::endl;
    }
};

Engine::Engine() : 
maximumThrust(7900), 
overallPressureRatio(32), 
turbineInletTemp(1350) {}

/*
 9) Constructor member initializer list
 */
struct Pizza
{
    Pizza();
    int numOfToppings;
    int diameter;
    double sliceSize;

    double calculateSliceSize(int slices );
   
    Pizza makePizza();
};

Pizza::Pizza() : numOfToppings(1), diameter(14), sliceSize(4.5) {}

double Pizza::calculateSliceSize(int slices)
{
    return diameter / (sliceSize * slices);
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
    std::cout << "Station Created!" << std::endl; 
}

void AirlinerStation::replaceEngine(Airliner, Engine)
{
    std::cout << "Replacing plane engine!" << std::endl;
}

void AirlinerStation::addFuel(Airliner& plane, double fuelAmount)
{
    plane.fuelCapacity += fuelAmount;
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
    Example::main();
    std::cout << "good to go!\n" << std::endl;
    
    Artist metallica;
    Artist::Album ride_the_lightning;
    std::cout << "Total album length: " << ride_the_lightning.totalAlbumLength() << "\n" << std::endl;

    Animal dog;
    std::cout << "Is animal Bipedal?" << std::endl;
    if(dog.isAnimalBipedal() == true)
    {
         std::cout << "Bipedal \n" << std::endl;
    }
    else
    {
        std::cout << "Not Bipedal \n" << std::endl;
    }
    dog.classifyAnimal();

    Student philip;
    philip.calculateGPA();

    Guitar gibson;
    Guitar::Strings ernie;
    gibson.restringGuitar(ernie);

    Airliner airbus737;
    airbus737.checkFuelAmount();

    Iphone s5;
    std::cout << "Can Iphone run new OS?" << std::endl;
    if(s5.canRunNewOS() == true)
    {
        std::cout << "Yes \n" << std::endl;
    }
    else
    {
        std::cout << "No \n" << std::endl;
    }
    s5.wipeMemory();

    House villa;
    villa.updatePrice(250000);
    std::cout << "New price is: " << villa.price << "\n" << std::endl;

    Engine rolls_royce;
    rolls_royce.checkOil();
    rolls_royce.checkTemperature();

    Pizza margharita;
    std::cout << "Slice size is: " << margharita.calculateSliceSize(6) << "\n" << std::endl;

    AirlinerStation heathrow;
    heathrow.replaceEngine(airbus737, rolls_royce);

}

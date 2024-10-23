#include "Rotational_Variables.h"

using namespace std;

void mainTopics(){

    cout << "For Angular Velocity press 1" << endl; 


    cout << "Choose a number";


}


void angularVelocity(){

    cout << "General Information:\n";
    cout << "Angular velocity refers to the rate at which an object rotates or revolves around a central point or axis.\n";
    cout << "Angular velocity is typically denoted by the symbol 𝜔 (Greek letter omega) and is measured in radians per second (rad/s).\n\n";

    cout << "Key Aspects:\n";
    cout << "1. Direction: Angular velocity is a vector quantity, meaning it has both magnitude and direction.\n";
    cout << "The direction is along the axis of rotation and can be determined using the right-hand rule.\n";

    cout << "2. Magnitude: The magnitude of angular velocity tells how fast an object is rotating.\n";
    cout << "For example, if an object completes one full revolution in one second, its angular\n";
    cout << "velocity would be 2𝜋 radians per second.";

    cout << "3. Formula:\n 𝜔 = Δθ/Δt\n";
    cout << "where Δ𝜃 is the change in angular displacement (in radians), and Δt is the change in time.";



}

void theoryMode(){

    mainTopics();

    switch(topicChosen){

    case 1:
    angularVelocity();
    break;

    case 2:

    break;

    default:

    break;
    
    }
    
}

void mathMode(){

    mainTopics();


}


int main(){

    cout << "Mode 1 = Calculator\n";
    cout << "Mode 2 = Theory explanation\n";
    cout << "Choose a mode:\n";



        switch (modeChosen)
    {
    case 1:
        mathMode();
        break;
    
    case 2:
        theoryMode();
        break;
    
    default:
    cout << "Answer is not viable";
    break;
}

    return 0;
}
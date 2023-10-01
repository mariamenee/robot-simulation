//Maria Renee San Esteban
//November 1st 2022
//Collaborators: Muhammad Qassim

#include <iostream>
using namespace std;

class Robot{
  private:
    int x, y; //x & y values of this robot
    char lastCommand; //last command entered by user for this robot
    int currentSpeed; //current speed of this robot
    int distance; //distance of this robot
    string name; // name of this robot
  public:
    Robot(){ //struct to set x and y to 0 when robot is created
      x = 0;
      y = 0;
      currentSpeed = 1; //also sets currentSpeed to 1
      distance = 0; //sets distance to 0
      lastCommand = 'X'; //sets lastCommand to X
    }
    
    int GetX(){return x;} //allows access to private x
    int GetY(){return y;} //allows access to private y
    bool stop = false; //stops and starts robot
    int getDistance(){return distance;} //access to distance (private)
    void setDistance(int a){ //allows changes to distance (private)
      distance = a;
    }
    string getName(){return name;} //access to name (private)
    void setName(string b){ //allows changes to name (private)
      name = b;
    }
    void moveRobot(char); //function protype for moverobot
};

void Robot::moveRobot(char d){ //function definition:
//Used to move robot, track x and y,track speed and track last command. 
//Class member function so Robot does not need to be passed, only direction
//private info can be accessed directly, no need for getter/setters
    switch (d) //character input by user
    {
//each case is going to check if the last command is the same as the user
//input and what the current speed is
    case 'U' : 
    case 'u' :
            if(stop == true){ //checks if robot is stopped
              cout << name << //if stopped error message and break
              " cannot move while stopped" << endl;
            }
            else{
              if ((lastCommand == 'U') 
              && (currentSpeed == 1)){
                 y = y + 2;
                 //above moves the robot in the right direction
                 lastCommand = 'U'; 
                 //above stores the last command for next time
                 currentSpeed = 2; 
                 //above stores the current speed the robot is at
                 distance = distance + 2;
                 }
                 // increments the distance
                 //y is moving in a positive direction because on
                 //x and y axis north or up is positive y 
                 //(think of a graph)
              else if ((lastCommand == 'U') 
              && (currentSpeed == 2)){
                 y = y + 3;
                 lastCommand = 'U';
                 currentSpeed = 3; 
                //incrementing speed by 1 here, do this until 4
                 distance = distance + 3;
              }
              else if ((lastCommand == 'U') 
              && (currentSpeed == 3)){
                 y = y + 4;
                 lastCommand = 'U';
                 currentSpeed = 4;
                 distance = distance + 4;
              } 
//if speed is already at 4 then we are not going any higher
              else if ((lastCommand == 'U') 
              && (currentSpeed >= 4)){
                 y = y + 4;
                 lastCommand = 'U';
                 currentSpeed = 4;
                 distance = distance + 4;
              }
              else { 
//the else is used to move robot when robot is not speeding up
                 y = y + 1; 
                 lastCommand = 'U';
                 currentSpeed = 1;
                 distance = distance + 1;
              }
            }
               break;
    case 'D' : 
    //y moves negative here, going oposite of 'Up' on a line
    case 'd' : 
            if(stop == true){
              cout << name << 
              " cannot move while stopped" << endl;
            }
            else{
              if ((lastCommand == 'D') 
              && (currentSpeed == 1)){
                 y = y - 2; 
                 lastCommand = 'D';
                 currentSpeed = 2;
                 distance = distance + 2;
               }
              else if ((lastCommand == 'D') 
              && (currentSpeed == 2)){
                 y = y - 3;
                 lastCommand = 'D';
                 currentSpeed = 3;
                 distance = distance + 3;
              }
              else if ((lastCommand == 'D') 
              && (currentSpeed == 3)){
                 y = y - 4;
                 lastCommand = 'D';
                 currentSpeed = 4;
                 distance = distance + 4;
              }
              else if ((lastCommand == 'D') 
              && (currentSpeed >= 4)){
                 y = y - 4;
                 lastCommand = 'D';
                 currentSpeed = 4;
                 distance = distance + 4;
              }
              else {
                 y = y - 1;
                 lastCommand = 'D';
                 currentSpeed = 1;
                 distance = distance + 1;
              }
            }
               break;
    case 'r' : //r moves positive x, moving right on a line
    case 'R' : 
            if(stop == true){
              cout << name << 
              " cannot move while stopped" << endl;
            }
            else{
              if ((lastCommand == 'R') 
              && (currentSpeed == 1)){
                 x = x + 2;
                 lastCommand = 'R';
                 currentSpeed = 2;
                 distance = distance + 2;
               }
              else if ((lastCommand == 'R') 
              && (currentSpeed == 2)){
                 x = x + 3;
                 lastCommand = 'R';
                 currentSpeed = 3;
                 distance = distance + 3;
              }
              else if ((lastCommand == 'R') 
              && (currentSpeed == 3)){
                 x = x + 4;
                 lastCommand = 'R';
                 currentSpeed = 4;
                 distance = distance + 4;
              }
              else if ((lastCommand == 'R') 
              && (currentSpeed >= 4)){
                 x = x + 4;
                 lastCommand = 'R';
                 currentSpeed = 4;
                 distance = distance + 4;
              }
              else {
                 x = x + 1;
                 lastCommand = 'R';
                 currentSpeed = 1;
                 distance = distance + 1;
              }
            }
               break;
    case 'l' : //L moves negative x, moving left on a line
    case 'L' : 
            if(stop == true){
              cout << name << 
              " cannot move while stopped" << endl;
            }
            else{
              if ((lastCommand == 'L') 
              && (currentSpeed == 1)){
                 x = x - 2;
                 lastCommand = 'L';
                 currentSpeed = 2;
                 distance = distance + 2;
               }
              else if ((lastCommand == 'L') 
              && (currentSpeed == 2)){
                 x = x - 3;
                 lastCommand = 'L';
                 currentSpeed = 3;
                 distance = distance + 3;
              }
              else if ((lastCommand == 'L') 
              && (currentSpeed == 3)){
                 x = x - 4;
                 lastCommand = 'L';
                 currentSpeed = 4;
                 distance = distance + 4;
              }
              else if ((lastCommand == 'L') 
              && (currentSpeed >= 4)){
                 x = x - 4;
                 lastCommand = 'L';
                 currentSpeed = 4;
                 distance = distance + 4;
              }
              else {
                 x = x - 1;
                 lastCommand = 'L';
                 currentSpeed = 1;
                 distance = distance + 1;
              }
            }
               break;
    case 'S': //stops and starts robot moving
    case 's':
        if(stop == true){ //if was stopped
              stop = false; //switch to not stopped aka start moving
              cout << name << 
              " has started to move" << endl;
              currentSpeed = 0; //speed is reset down to 1
          }
          else{ //if was moving, set stop to true to stop
              stop = true;
              cout << name << 
              " has stopped moving" << endl;
              currentSpeed = 0; 
          }
          break;
    }
  }

Robot** makeRoboList(int numRobos){ //takes number of robots input by user
  Robot** RoboList = new Robot*[numRobos]; //creates a new pointer at array
  for(int i = 0; i < numRobos; i++){
    RoboList[i] = new Robot; //makes a new robot in each index
  }
  return RoboList; //returns pointer that points to array of robot pointers
}                  //pointing at robots

void roboSort(Robot* robotList[], int size){
//function sort robot distance from greatest to least
    for(int i = 0; i < size-1; i++){
      int max_index = i; //max stores the robot with max 
                         //distance to ensure the list is fully sorted
      
      for(int j = i+1; j < size; j++){             //replaces the max
        if(robotList[j] -> getDistance() >         //with new max if new
           robotList[max_index] -> getDistance()){ //value is more than max
                max_index = j; 
            }
        }
      //basically a swap function to organize list, swaps distance
      int temp = robotList[max_index] -> getDistance();
      robotList[max_index] -> setDistance(robotList[i] ->
      getDistance());
      robotList[i] -> setDistance(temp);

      //swaps names to correlate the right name to right distance
      string tempN = robotList[max_index] -> getName();
      robotList[max_index] -> setName(robotList[i] ->
      getName());
      robotList[i] -> setName(tempN);
    }
}

void instructions(){ 
//function to cout instructions, used it for project 0 and then 
//kept it even though it wasn't really necessary anymore
  cout << "Please select:" << endl
  << " M- move" << endl
  << " D- distances" << endl 
  << " R- rename" << endl
  << " Q- quit" << endl;
}

//uses linear search to find the index of the robot with the name the 
//user entered, uses size to know how many times to run the search, 
//array is the array of robots and identifier to know what the user 
//input was in order to compare to elements in the array
int findRobot(Robot** roboList, string identifier, int SIZE){ 
  for (int i = 0; i < SIZE; i++){ 
    if(roboList[i] -> getName() == identifier){ 
      //name user entered is stored in 'identifier'
      return i; //returns the index of robot
    }
  }
  return -1; //otherwise return -1
}

int main() {

  int SIZE; //size must be first
  char input = 'X'; 
  //input by user to decide what to do (M, D, R, or Q)
  string name; 
  string newName; //for switching the name
  //name input for knowing which robot is going to be moved
  int robotIndex;
  char direction = 'X'; //directional input for moving robot

  cout << "Welcome!" << endl;
  cout << "How many robots?" << endl;

  cin >> SIZE; 
//must first store a value for SIZE before robolist
//array can be initalized

  Robot** RobotP = makeRoboList(SIZE);
//initalize array with number of robots user entered

  cout << "Please name each robot: " << endl;

  for (int i=0; i < SIZE; i++){
    cin >> name;
    RobotP[i] -> setName(name);
    }
//allows user to assign a name to as many robots as
//they entered for SIZE with setter function

  while ((input != 'Q') && (input != 'q')){ 
  //while loop ensures as long as input is not q, user can continue
  //to enter new inputs
    instructions();
    
    cin >> input;     
    
    switch (input) {
    //switch uses user input to either move the robot, tell user
    //the distance of all robots or quit the program
      case 'M' : //user enters m when they want to move robot
      case 'm' :  cout << "Enter name: ";
                  cin >> name; //input name of robot user wants to move
        
                 robotIndex = findRobot(RobotP, name, SIZE);
                 //uses findRobot function to find index of robot,
                 //and returns int value stores it in robotIndex
                 //so value can be access and refrenced easily
                 if (robotIndex == -1){ 
                 //if -1 was returned to robot index, give error
                  cout << "Invalid Name. Enter a new command." << endl;
                  break; //if error, break and go back to input command
                }
                cout << "Enter direction(U, D, L, R, S): ";
                cin >> direction;
        
                if ((direction != 'U') && (direction != 'u') && 
                    (direction != 'D') && (direction != 'd') && 
                    (direction != 'R') && (direction != 'r') && 
                    (direction != 'L') && (direction != 'l') &&
                    (direction != 'S') && (direction != 's')){
                    cout << "Invalid Direction" << endl;
                    break;
                }
//above if stament is used to give error message and break 
//switch if the direction input is invalid aka not u, r, l, s or d
        
                 RobotP[robotIndex] -> moveRobot(direction);
//move robot uses the robotIndex found using the name entered 
//by user along with the direction entered by the user to access 
//the specific robot at the index in which that robot has 
//the name the user entered: thats what robolist[robotIndex] mean, 
//and then moves the robot using the member function moveRobot
//because member function has access to private memory
              if ((direction == 'S') || (direction == 's')){
                break; //if S then do not print position of robot
              }
              else{
                 cout << RobotP[robotIndex] -> getName() 
                 << "'s position is " << 
                 RobotP[robotIndex] -> GetX() 
                 << "," << 
                 RobotP[robotIndex] -> GetY() << endl;
              }
//prints the robot's index to the user, using the index of the
//specific robot to access the specific robot found after 
//name was inputed by user
        
                 break;
      case 'D' : //using a for loop to print the distance of
      case 'd' : //every robot in array
                roboSort(RobotP, SIZE);
        
                for (int i=0; i < SIZE; i++){
                  cout << RobotP[i] -> getName() 
                  << "'s distance is "
                  << RobotP[i] -> getDistance() 
                  << endl;
                 }
                 break;
      case 'R' : 
      case 'r' : cout << "Enter the current name: ";
                 cin >> name; //name of a robot
                 cout << "Enter the new name: ";
                 cin >> newName; //new name for the robot
                 //checks if robot named exists
                 robotIndex = findRobot(RobotP, name, SIZE);
                 if (robotIndex == -1){ 
                   cout << 
                   "Invalid Name. Enter a new command."
                   << endl;
                   break; 
                 }
                 //if robot exists, changes name of robot to newName
                 RobotP[robotIndex] -> setName(newName);
                 cout << name << "'s name is now " << newName << endl;
                 break;
      case 'Q' :
      case 'q' : cout << "Goodbye :)" << endl;
                 //for loop deletes allocated memeory in the array
                 for (int i=0; i < SIZE; i++){ 
                   delete RobotP[i];
                 }
                 //deletes allocated memeory of array
                 delete [] RobotP;
                 break; 
                 //ends the program because of while loop conditions
      
      default : cout << "Invalid input, try again..." << endl;
                 break; 
                 //if inital input is invalid, gives an error messgae
      }
  
  }
  
  return 0;
}
   
  
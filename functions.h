/* A header file to hold the 
main defintions of the program
Student: You
Teacher: Dr_T 10-17-2019, updated 3-24-2020 (clear screen methods for Ubuntu)
*/
#ifndef FUNCTIONS_H
#define FUNCTIONS_H
//put libraries here
#include <iostream>
#include<string>
#include "Input_Validation_Extended.h" 
using namespace std;

//put prototypes here
void handleOption(string);


 //function prototype 
void showMenu(); 




class Velocity
{
  private:
    double speed;
    double time;
  public:        //function prototypes for the member functions 
    void setspeed(double);
    void settime(double);
    double getspeed() const;
    double gettime() const;
    double getvelocity() const;
};



class Acceleration
{
  private:
    double velocity;
    double time;
  public:        //function prototypes for the member functions 
    void setvelocity(double);
    void settime(double);
    double getvelocity() const;
    double gettime() const;
    double getacceleration() const;
};


void calcMotion(double);

//Need to add motion subsections and stuff


class Force
{
  private:
    double mass;
    double acceleration;
  public:        //function prototypes for the member functions 
    void setmass(double);
    void setacceleration(double);
    double getmass() const;
    double getacceleration() const;
    double getforce() const;
};



class Weight
{
  private:
    double mass;
    double gravity;
  public:        //function prototypes for the member functions 
    void setmass(double);
    void setgravity(double);
    double getmass() const;
    double getgravity() const;
    double getweight() const;
};



class Momentum
{
  private:
    double mass;
    double velocity;
  public:        //function prototypes for the member functions 
    void setmass(double);
    void setvelocity(double);
    double getmass() const;
    double getvelocity() const;
    double getmomentum() const;
};

// Velocity
void Velocity::setspeed(double s)
{
  speed = s; 
}

void Velocity::settime(double t)
{
  time = t; 
}

double Velocity::getspeed() const
{
  return speed; 
}

double Velocity::gettime() const
{
  return time; 
}

double Velocity::getvelocity() const
{
  return (speed / time);
}

//Acceleration
void Acceleration::setvelocity(double v)
{
  velocity = v; 
}

void Acceleration::settime(double t)
{
  time = t; 
}

double Acceleration::getvelocity() const
{
  return velocity;
}

double Acceleration::gettime() const
{
  return time; 
}

double Acceleration::getacceleration() const
{
  return (velocity / time);
}

//Motion not yet possible

//Force
void Force::setmass(double m)
{
  mass = m; 
}

void Force::setacceleration(double a)
{
  acceleration = a; 
}

double Force::getmass() const
{
  return mass;
}

double Force::getacceleration() const
{
  return acceleration; 
}

double Force::getforce() const
{
  return (mass * acceleration);
}
//Weight
void Weight::setmass(double m)
{
  mass = m; 
}

void Weight::setgravity(double g)
{
  gravity = g; 
}

double Weight::getmass() const
{
  return mass;
}

double Weight::getgravity() const
{
  return gravity; 
}

double Weight::getweight() const
{
  return (mass * gravity);
}
//Momentum
void Momentum::setmass(double m)
{
  mass = m; 
}

void Momentum::setvelocity(double v)
{
  velocity = v; 
}

double Momentum::getmass() const
{
  return mass;
}

double Momentum::getvelocity() const
{
  return velocity; 
}

double Momentum::getmomentum() const
{
  return (mass * velocity);
}


//put definitions here
void handleOption(string userOption)
{
    int rows = 0, num = 0;
    char theChar = '\0'; //null char '\0' 
    double num1 = 0.0, num2 = 0.0, num3 = 0.0; 
    
    if(userOption == "A" || userOption == "a")
    {
      Velocity v;
  
        cout << "Input the speed (m/s):\n";
        double s =0.0;
        s = validateDouble(s);
        v.setspeed(s);

        cout << "You inputted: " << v.getspeed() << " m/s" <<endl << endl;

        cout << "Input the time (s):\n";
        double t = 0.0;
        t = validateDouble(t);
        v.settime(t);

        cout << "You inputted: " << v.gettime() << " s" <<endl << endl;

        cout << " The velocity for the data imputted in the form speed/time is: " << v.getvelocity() << " m/s" << endl << endl;


      
    }
    else if(userOption == "B" || userOption == "b")
    {
     Acceleration a;
  
        cout << "Input the velocity (m/s):\n";
        double v =0.0;
        v = validateDouble(v);
        a.setvelocity(v);

        cout << "You inputted: " << a.getvelocity() << " m/s" <<endl << endl;

        cout << "Input the time (s):\n";
        double t = 0.0;
        t = validateDouble(t);
        a.settime(t);

        cout << "You inputted: " << a.gettime() << " s" << endl << endl;

        cout << " The acceleration for the data imputted in the form velocity/time is: " << a.getacceleration() << " m/s^2" << endl << endl;
    }
    else if(userOption == "C" || userOption == "c")
    {
      cout << "Choose one of the following four equations:\n" ;

      cout << "1. v=v0+at\n2. s=s0+v0t+1/2at^2\n3. v^2=v0^2+2a(s-s0)\n4. v_bar=1/2(v+v0)\n";
      // Tried making a for loop that would include the four options or invalide input. Each option would then 
      cout << endl;
      int input = 0;
	input = validateInt(input);
      if(input == 1)
      {
        cout << "Calculate initial velocity. Input initial velocity:\n" << endl;
      } //temporary placeholders to check flow of data
      else if (input == 2)
      {
        cout << "Calculate speed. Input initial speed:\n" << endl;
      }
      else if (input == 3)
      {
        cout << "Calculate velocity squared. Input initial velocity squared: " << endl;
      }
      else if (input == 4)
      {
        cout << "Calculate velocity bar. Input velocity:\n" << endl;
      }
      else
      {
        cout << "Invalid input. Please try again";
      }
    }
    else if(userOption == "D" || userOption == "d")
    { 
      Force f;
  
        cout << "Input the mass (kg):\n";
        double m =0.0;
        m = validateDouble(m);
        f.setmass(m);

        cout << "You inputted: " << f.getmass() << " kg" <<endl << endl;

        cout << "Input the acceleration (m/s^2):\n";
        double a = 0.0;
        a = validateDouble(a);
        f.setacceleration(a);

        cout << "You inputted: " << f.getacceleration() << " m/s^2" << endl << endl;

        cout << " The Force for the data imputted in the form mass*acceleration is: " << f.getforce() << " (kg*m)/m^2" <<endl << endl;
    }
    else if(userOption == "F" || userOption == "f")
    {
      Weight w;

        cout << "Input the mass (kg):\n";
        double m =0.0;
        m = validateDouble(m);
        w.setmass(m);

        cout << "You inputted: " << w.getmass() << " kg" << endl << endl;

        cout << "Gravity is constant. Which has a value of ";
        double g = 0.0;
        g = 9.81;
        w.setgravity(g);

        cout << w.getgravity() << " N/kg" << endl << endl;

       

        cout << " The weight for the data imputted in the form mass*gravity is: " << w.getweight()<< " N" << endl << endl;
    }
    else if(userOption == "G" || userOption == "g")
    {
      Momentum m;
  
        cout << "Input the mass (kg):\n";
        double ma =0.0;
        ma = validateDouble(ma);
        m.setmass(ma);

        cout << "You inputted: " << m.getmass() << " kg" << endl << endl;

        cout << "Input the velocity (m/s):\n";
        double v = 0.0;
        v = validateDouble(v);
        m.setvelocity(v);

        cout << "You inputted: " << m.getvelocity() << " m/s"<< endl << endl;

        cout << " The momentum for the data imputted in the form mass*velocity is:" << m.getmomentum() << " (kg*m)/s"<< endl << endl;
    }
    else if(userOption == "X" || userOption == "x")
    {
      string reset = "\x1b[0m";
      //Linux Umbunu
      cout << reset; 
      cout << "\033[2J\033[1;1H";  //for ubuntu Linux Option 1 of 2
      //Windows: system("cls"); 
      system("clear"); //for ubuntu Linux Option 2 of 2
    }
    else if(userOption == "E" || userOption == "e")
    {
        cout << "\nEnd program. Thank You for using my calculator!!" << endl;
      
    }
    else
    {
      cout << "\nInvalid input: try again." << endl; 
    }
}

void showMenu()
{
  cout << "\nMENU" << endl; 
  cout << "A: Velocity" <<endl; 
  cout << "B: Acceleration" << endl; 
  cout << "C: Motion" << endl; 
  cout << "D: Newtons second law (Force)" << endl; 
  cout << "E: Exit program" << endl; 
  cout << "F: Weight" << endl;
  cout << "G: Momentum" << endl;
  cout << "X: clear the screen" << endl;  
}
//definintion 


#endif
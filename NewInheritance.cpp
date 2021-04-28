/**************************************************************
*
*     InheritanceDemo
*          this program demonstrates inheritance hierarchy 
*          using constructors
*          1.  RoadVehicle      base class
*          2.  Truck            derived class of RoadVehicle
*          3.  Automobile       derived class of RoadVehicle
*          4.  Motorcycle       derived class of RoadVehicle
*          5.  ElectricCar      derived class of Automobile
*          6.  GasCar           derived class of Automobile
*          7.  HybridCar        derived class of GasCar and ElectricCar
*
***************************************************************/
#include <iostream>
using namespace std;

/*****************************************
*
*       base class  RoadVehicle
*
****************************************/
class RoadVehicle 
{
  private:
    int wheels;
    int passengers;
  
  public:
    // constructor
    RoadVehicle()
    {
        cout << "in RoadVehicle constructor default\n";
        setWheels(0); 
        setPass(0); 
    }
    RoadVehicle(int w, int p)
    {
        cout << "in RoadVehicle constructor #1\n";                       
        setWheels(w); 
        setPass(p); 
    }     
    // destructor
    ~RoadVehicle()
    {
        cout << "in road_constructor destructor\n";                       
    }            
    // setters
    void setWheels(int num) { wheels = num; }
    void setPass(int num)   { passengers = num; }
     
    // getters
    int  getWheels()        { return wheels; }      
    int  getPass()          { return passengers; }
};



/*****************************************
*   lists types of Motorcycles and cars
*****************************************/
enum type {car, van, wagon, hondaGas, hondaElec, hondaHybrid, harley, yamaha, hondaM, volt, who_knows};



/*****************************************
*
*       derived class  Truck
*
*****************************************/
class Truck : public RoadVehicle
{
  private:
    int cargo;
    int driveTrain;
  
  public:
    // constructor
    Truck() : RoadVehicle()
    {
        cout << "in Truck constructor default\n";             
        setCargo(0);
        setDriveTrain(0);
    }   
    Truck(int c, int dt) : RoadVehicle()
    {
        cout << "in Truck constructor #1\n";                 
        setCargo(c);
        setDriveTrain(dt);
    } 
    Truck(int c, int dt, int w, int p) : RoadVehicle(w,p)
    {
        cout << "in Truck constructor #1\n";                 
        setCargo(c);
        setDriveTrain(dt);
    }       
    // destructor
    ~Truck()
    {
        cout << "in Truck destructor\n";                       
    }                                
    // member functions
     
    // setters
    void setCargo(int size) 		{ cargo = size; }
    void setDriveTrain(int d)	  	{ driveTrain = d; }  
  	    
    // getters
    int  getCargo()         		{ return cargo; }
    int  getDriveTrain() 			{ return driveTrain; } 
    
    void show();
};
  
/*****************************************
*      member functions for Truck
*****************************************/
void Truck::show()
{
    cout << "\n************ Truck ***********\n";
    cout << "wheels:                       "  << getWheels()     << "\n";
    cout << "type of drive train:          "  << getDriveTrain() << "\n";
    cout << "passengers:                   "  << getPass()       << "\n";
    cout << "cargo capacity in cubic feet: "  << getCargo()      << "\n";
    cout << "\n";
}


/*****************************************
*
*       derived class Motorcycle
*
*****************************************/
class Motorcycle : public RoadVehicle
{
  private:
    enum type MotorcycleType;
        
  public:
    //constructos
    Motorcycle() : RoadVehicle()
    { 
        cout << "in Motorcycle constructor default\n";                          
        setType(who_knows); 
    }       
    Motorcycle(type t): RoadVehicle()
    { 
        cout << "in Motorcycle constructor #1\n";  
        setType(t);
    }
    Motorcycle(type t, int w, int p) : RoadVehicle(w,p)
    { 
        cout << "in Motorcycle constructor #2\n";  
        setType(t);
    }      
    // destructor
    ~Motorcycle()
    {
        cout << "in Motorcycle destructor\n";                       
    }                 

    // setters
    void setType(type t)    { MotorcycleType = t; }
      
    // getters
    enum type getType()     { return MotorcycleType; }
      
    void show();
};
/*****************************************
*      member functions for Motorcycle
*****************************************/
void Motorcycle::show()
{
    cout << "\n****** Motorcycle ******\n";     
    cout << "wheels:     "  << getWheels() << "\n";
    cout << "passengers: "  << getPass() << "\n";
    cout << "type:       ";
    switch(getType()) 
    {
        case hondaM:     cout << "honda\n";
                         break;
        case harley:     cout << "harley\n";
                         break;
        case yamaha:     cout << "yamaha\n";
                         break;
        case who_knows:  cout << "who knows\n";    
    }
    cout << "\n";  
}

/*****************************************
*
*       derived class automible
*
*****************************************/
class Automobile : public virtual RoadVehicle
{
  private:
    enum type carType;
    int numDoors;  
  
  public:
    //constructos
    Automobile() : RoadVehicle()
    {      
        cout << "in automobible constructor default\n";                          
        setType(who_knows); 
        setNumDoors(0);
    }       
    Automobile(type t, int nod)  : RoadVehicle()
    { 
        cout << "in automobible constructor #1\n";                          
        setType(t);
        setNumDoors(nod);
    }     
    Automobile(type t, int nod, int w, int p) : RoadVehicle(w,p)
    { 
        cout << "in automobible constructor #1\n";                          
        setType(t);
        setNumDoors(nod);
    }        
    // destructor
    ~Automobile()
    {
        cout << "in Automobile destructor\n";                       
    }           
    // setters
    void setType(type t)    	{ carType = t; }
    void setNumDoors(int nod)	{ numDoors = nod; }
     
    // getters
    enum type getType()     	{ return carType; }
    int  getNumDoors()	  		{ return numDoors; }
      
    void show();
};
/*****************************************
*      member functions for Motorcycle
*****************************************/
void Automobile::show()
{
    cout << "\n****** Automobile ******\n";     
    cout << "type:            ";
    switch(getType()) 
    {
        case van:        cout << "van\n";
                         break;
        case car:        cout << "car\n";
                         break;
        case wagon:      cout << "wagon\n";
                         break;
        case who_knows:  cout << "who knows\n";        
    }
    cout << "number of doors: "  << getNumDoors() << "\n";
    cout << "wheels:          "  << getWheels()   << "\n";
    cout << "passengers:      "  << getPass()     << "\n";
    cout << "\n";  
}




/*****************************************
*
*       derived class GasCar
*
******************************************/
class GasCar :  public virtual Automobile
{
  private:
    int mpg;
    int volGasTank;
  
  public:
    // constructors
    
    GasCar() : Automobile()
    {
        cout << "in GasCar constructor default\n";     
		setVolGasTank(0);   
        setMpg(0);
    }      
    GasCar(int v, int m) : Automobile()
    {
        cout << "in GasCar constructor #1\n";  
	    setVolGasTank(v);   
        setMpg(m);
    }
    GasCar(int v, int m, type at, int nod, int w, int p) : Automobile(at,nod,w,p)
    {
        cout << "in GasCar constructor #2\n"; 
		setVolGasTank(v);   
        setMpg(m);        
    }
    // destructor
    ~GasCar()
    {
        cout << "in GasCar destructor\n";                       
    }                           
    // member functions
      
    // setters
    void setVolGasTank(int t)   { volGasTank = t; }
    void setMpg(int m)          { mpg = m; }
    // getters
    int  getVolGasTank()        { return volGasTank; }
    int  getMpg()               { return mpg; }
      
    void show();
};
/*****************************************
*      member functions for GasCar
*****************************************/
void GasCar::show()
{
    cout << "\n  ****** gas car ******  \n";
    cout << "wheels:            "  << getWheels()   << "\n";
    cout << "passengers:        "  << getPass()     << "\n";
    cout << "number of doors:   "  << getNumDoors() << "\n";
    cout << "type:              ";
    switch(getType()) 
    {
         case van:        cout << "van\n";
                          break;
         case car:        cout << "car\n";
                          break;
         case wagon:      cout << "wagon\n";
                          break;
         case who_knows:  cout << "who knows\n";
    }
    cout << "gas tank volume:   "  << getVolGasTank()    << "\n"; 
    cout << "miles per gallon:  "  << getMpg()           << "\n";  
    cout << "\n";  
}
/*****************************************
*
*       derived class ElectricCar

******************************************/
class ElectricCar : public virtual Automobile
{
  private:
    int timeBatteryCharge;
    int milesBatteryCharge;
  public:
    // constructors
    ElectricCar() : Automobile()
    {
        cout << "in ElectricCar constructor default\n";  
        setTimeBatteryCharge(0);
        setMilesBatteryCharge(0);    
    }  
    ElectricCar(int bct, int bcm) : Automobile()
    {
        cout << "in ElectricCar constructor default\n";  
        setTimeBatteryCharge(bct);
        setMilesBatteryCharge(bcm);    
    } 
    ElectricCar(int bct, int bcm, type at, int nod, int w, int p) : Automobile(at,nod,w,p)
    {
        cout << "in ElectricCar constructor #1\n";  
	    setTimeBatteryCharge(bct);
        setMilesBatteryCharge(bcm);  
    }  
    // destructor
    ~ElectricCar()
    {
        cout << "in ElectricCar destructor\n";                       
    }                                         
    // member functions
      
    // setters
    void setTimeBatteryCharge(int t)   	{ timeBatteryCharge = t; }
    void setMilesBatteryCharge(int m)  	{ milesBatteryCharge = m; }
      
    // getters
    int  getTimeBatteryCharge()        	{ return timeBatteryCharge; }
    int  getMilesBatteryCharge()       	{ return milesBatteryCharge; }
    
    void show();
};
/*****************************************
*      member functions for ElectricCar
*****************************************/
void ElectricCar::show()
{
    cout << "\n****** electric car ******\n";     
    cout << "wheels:                   "  << getWheels()   << "\n";
    cout << "passengers:               "  << getPass()     << "\n";
    cout << "number of doors:          "  << getNumDoors() << "\n";    
	cout << "type:                     ";
    switch(getType()) 
    {
        case van:        cout << "van\n";
                         break;
        case car:        cout << "car\n";
                         break;
        case wagon:      cout << "wagon\n";
                         break;
        case who_knows:  cout << "who knows\n";
    }
    cout << "battery charge time:      "  << getTimeBatteryCharge()  << "\n"; 
    cout << "miles per battery charge: "  << getMilesBatteryCharge() << "\n";  
    cout << "\n";  
}
/*****************************************
*
*       derived class HybridCar
*
******************************************/

class HybridCar : virtual public GasCar, virtual public ElectricCar
{
  private:
 
 
  public:
    // constructors
    HybridCar() : GasCar(), ElectricCar()
    {
        cout << "in HybridCar constructor default\n";  

    }  
    HybridCar(int bct, int bcm, int v, int m, type at, int nod, int w, int p) : ElectricCar(bct,bcm), GasCar(v,m), Automobile(at,nod), RoadVehicle(w,p)
    {
        cout << "in HybridCar constructor #1\n"; 

    }  
    // destructor
    ~HybridCar()
    {
        cout << "in HybridCar destructor\n";                       
    }                                         
    // member functions
    
    // setters
    
      
    // getters
    
     
    void show();
}
;
/*****************************************
*      member functions for ElectricCar
*****************************************/
void HybridCar::show()
{
    cout << "\n****** HybridCar car ******\n";     
    cout << "wheels:                   "  << getWheels()   << "\n";
    cout << "passengers:               "  << getPass()     << "\n";
    cout << "number of doors:          "  << getNumDoors() << "\n";    cout << "type:                     ";
    switch(getType()) 
    {
        case hondaGas:   cout << "van\n";
                         break;
        case car:        cout << "car\n";
                         break;
        case wagon:      cout << "wagon\n";
                         break;
        case who_knows:  cout << "who knows\n";
                         break;
        default:         cout << "** error **\n";
    }
    cout << "battery charge time:      "  << getTimeBatteryCharge()  << "\n"; 
    cout << "miles per battery charge: "  << getMilesBatteryCharge() << "\n";  
    cout << "gas tank volume:          "  << getVolGasTank()         << "\n"; 
    cout << "miles per gallon:         "  << getMpg()                << "\n";  
    cout << "\n";  
}

/***********************************
*    prototypes
***********************************/
void testTruck();
void testMotorcycle();
void testAutomobile();
void testElectricCar();
void testGasCar();
void testHybridCar();

int main()
{
//    testTruck();
//    system("pause");  
//     
//    testMotorcycle();
//    system("pause");
//     
//    testAutomobile();
//    system("pause");
//     
//    testElectricCar();
//    system("pause");
//     
//    testGasCar();
//    system("pause");
     
    testHybridCar();
  
    system("pause");
    return 0;
}

void testTruck()
{
    cout << "\n";
    Truck t1;
    cout << "\n";  
    Truck t2; 
    t1.setWheels(18);
    t1.setPass(2);
    t1.setCargo(3200);

    t2.setWheels(6);
    t2.setPass(3);
    t2.setCargo(1200);
  
    t1.show();
    cout << "\n";
    t2.show();
    cout << "\n"; 
     
    Truck ta;
    ta.show();
    cout << "\n";
     
    Truck tb(4, 2);
    tb.show();
    cout << "\n"; 
      
    Truck tc(55, 4, 18, 3);
    tc.show();
    cout << "\n";         
}

void testAutomobile()
{
    cout << "\n";
    Automobile c;     
    
    c.setWheels(4);
    c.setPass(6);
    c.setType(van);
    c.show();
    cout << "\n";     
}
void testElectricCar()
{
    cout << "\n";
    ElectricCar ec;  
       
    ec.setWheels(4);
    ec.setPass(4);
    ec.setType(car);
    ec.setTimeBatteryCharge(6); 
    ec.setMilesBatteryCharge(350);  
    ec.show();
    cout << "\n";     
}
void testGasCar()
{
    cout << "\n";
    GasCar g1;
    g1.show();
    GasCar gc(20, 45, car, 2, 4, 5);
    gc.setWheels(4);
    gc.setPass(4);
    gc.setType(car);
    gc.setVolGasTank(18); 
    gc.setMpg(22);  
    gc.show();
    cout << "\n";      
}

void testHybridCar()
{
    cout << "\n";
    HybridCar h1;
    cout << "\n";
    h1.show();
     
    cout << "\n";
  //(int bct6, int bcm150, int v22, int m35, type at, int nod, int w, int p)  
    HybridCar h2(6, 150, 22, 35, car, 4, 4, 4);
    cout << "\n";
    h2.show();
}
void testMotorcycle()
{
     // use defaults
     cout << "\n";
     Motorcycle mc1;
     mc1.show();
     cout << "\n";    
  
     // use defaults and sets
     Motorcycle mc2;
     mc2.setWheels(2);
     mc2.setPass(2);
     mc2.setType(yamaha);
     mc2.show();
     cout << "\n";   
     cout << "\n";  
     Motorcycle mc3(hondaM);
     mc3.show();
     cout << "\n";  
     cout << "\n";  
     Motorcycle mc4(hondaM, 2, 2);
     mc4.show();
     cout << "\n";       
}










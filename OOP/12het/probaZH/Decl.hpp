#include <iostream>

using namespace std;

class Sports
{
 double distance, time, average;
protected:
 const int sZ, eZ, oRA, pRC;
public:
 Sports(double dt, double tm) : sZ(100), eZ(1000), oRA(3600), pRC(60)
  {distance = dt; time = tm; average = 0.0; }
 double getDistance() const { return distance; }
 double getTime() const { return time; }
 double getAverage() const { return average; }
 void setAverage(double avg) { average = avg; }
 virtual void computeSaveAndPrintAverage() {};
 virtual ~Sports() {}
};

class Swimming : public Sports
{
 public:
 Swimming(double dt, double tm) : Sports(dt, tm) { }
 void computeSaveAndPrintAverage() override
  { setAverage(getTime() / (getDistance() / sZ));
    cout << "Az uszas atlaga: " << getAverage() << " s / 100 m" << endl; }
};

class Cycling : public Sports
{
 public:
 Cycling(double dt, double tm) : Sports(dt, tm) { }
 void computeSaveAndPrintAverage() override
  { setAverage((getDistance() / eZ) / (getTime() / oRA));
    cout << "A kerekparozas atlaga: " << getAverage() << " km / h" << endl; }
};

class Running : public Sports
{
 public:
 Running(double dt, double tm) : Sports(dt, tm) { }
 void computeSaveAndPrintAverage() override
  { setAverage((getTime() / pRC) / (getDistance() / eZ));
    cout << "A futas atlaga: " << getAverage() << " min / km" << endl; }
};

void printNamesOfSports(Sports* sps)
{
 cout << endl; 
 if(dynamic_cast<Swimming*>(sps)) cout << "Uszas";
 else if(dynamic_cast<Cycling*>(sps)) cout << "Kerekpar";
 else if(dynamic_cast<Running*>(sps)) cout << "Futas";
}
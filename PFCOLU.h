#include <math.h>
#define Gravitational_acceleration_in_earth 9.807
#define Speed_of_light 299792458
float mol(float number)
{
    float mol = 6.02 * pow(10 , 23);
    return number/mol;
}

float cmtomm(float cm)
{
    return cm*10;
}

float mmtocm(float mm)
{
    return mm/10;
}

float cmtom(float cm)
{
    return cm/100;
}

float mmtom(float mm)
{
    return mm/1000;
}

float mtocm(float m)
{
    return m*100;
}

float mtomm(float m)
{
    return m*1000;
}

float mmtokm(float mm)
{
    return mm/1000000;
}

float cmtokm(float cm)
{
    return cm/100000;
}

float mtokm(float m)
{
    return m/1000;
}

float kmtom(float km)
{
    return km*1000;
}

float kmtocm(float km)
{
    return km*100000;
}

float kmtomm(float km)
{
    return km*1000000;
}

float ECurrent(float voltage , float resistance)
{
    // electrical current
    float Curr;
    Curr = voltage / resistance;
    return Curr;
}

float EVoltage(float Current2 , float resistance2)
{
    // electrical voltage
    float Volt = Current2 * resistance2;
    return Volt;
}

float EResistance(float Current3 , float voltage2)
{
    // electrical resistance
    float Resist = voltage2 / Current3;
    return Resist;
}

float Weight(float mass)
{
    // weight
    float PWeight = mass * Gravitational_acceleration_in_earth;
    return PWeight;
}

float Force(float mass2 , float acceleration)
{
    // force
    float PForce = mass2 * acceleration;
    return PForce;
}

float Density(float volume , float mass3)
{
    // density
    float Dens = mass3 / volume;
    return Dens;
}

float Energy(float mass4)
{
    // energy
    double Spe = pow(Speed_of_light , 2);
    float Ener = mass4 * Spe;
    return Ener;
}

float Pressure(float Force2 , float Area)
{
    // pressure
    float Pre = Force2 / Area;
    return Pre;
}

float Fluid_Pressure(float Density2 , float height)
{
    // pressure in fluids
    float FluPre = Density2 * Gravitational_acceleration_in_earth * height;
    return FluPre;
}
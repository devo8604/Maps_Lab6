//*************************************************************************
// TITLE: 			   	STL Set Lab
// FILENAME:            Contributor.cpp
// PREPARED FOR:        CS230
// PROGRAMMER(S):       Devon J. Smith
// DEVELOPMENT DATE:    08/24/14
// COMPILER USED:       Apple LLVM Version 5.1
// TARGET PLATFORM:     Mac OS X i386 & x86_64
//=========================================================================
//                           PROJECT FILES
//    <LIST ALL PROGRAM AND HEADER FILES IN THE PROJECT HERE>
//		lab6.cpp (main)
//		Contributor.h
//		Contributor.cpp
//		CharityAward.h
//		CharityAward.cpp
//=========================================================================
//   		REVISION HISTORY
//   List revisions made to the Program
//
//   DATE     PROGRAMMER            DESCRIPTION OF CHANGES MADE
//	 08/24/14 Devon J. Smith        Original
//
//=========================================================================
//                          INCLUDE FILES
#include "Contributor.h"

using namespace std;
//*************************************************************************
//             Definition of member functions for class Entry
//*************************************************************************
string name;
int numCharities;
int totalDonated;
float averageDonationPerCharity;

Contributor::Contributor(string name,
                         int numCharities,
                         int totalDonated,
                         float averageDonationPerCharity)
{
    setName(name);
    setNumCharities(numCharities);
    setTotalDonated(totalDonated);
    setAverageDonationPerCharity(averageDonationPerCharity);
}



void Contributor::setName(string inputName)
{
    name = inputName;
}




void Contributor::setNumCharities(int inputNumCharities)
{
    numCharities = inputNumCharities;
}



void Contributor::setTotalDonated(int inputTotalDonated)
{
    totalDonated = inputTotalDonated;
}



void Contributor::setAverageDonationPerCharity(float a)
{
    averageDonationPerCharity = a;
}



string Contributor::getName()
{
    return name;
}




int Contributor::getNumCharities()
{
    return numCharities;
}



int Contributor::getTotalDonated()
{
    return totalDonated;
}



float Contributor::getAverageDonationPerCharity()
{
    return averageDonationPerCharity;
}

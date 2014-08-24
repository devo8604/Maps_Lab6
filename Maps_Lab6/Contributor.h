//*************************************************************************
// TITLE: 			   	STL Set Lab
// FILENAME:            Contributor.h
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
//                        CLASS DESCRIPTION
//          This is the class that the donars are based off of.
//
//*************************************************************************
//
//*************************************************************************
//              PROCESS THIS FILE ONLY ONCE PER PROJECT
#ifndef __Maps_Lab6__Contributor__
#define __Maps_Lab6__Contributor__
//
//=========================================================================
//                     CONSTANT DEFINITIONS
//
//*************************************************************************
//                  STANDARD AND USER DEFINED INCLUDES
#include <iostream>
#include <string>
//*************************************************************************
//                     USER DEFINED DATA TYPES
class Contributor
{
public:
    
    //Constructor
    Contributor(){};
    Contributor(std::string Name,
                int NumCharities,
                int TotalDonated,
                float averageDonationPerCharity);
    
    //Getters
    std::string getName();
    int getNumCharities();
    int getTotalDonated();
    float getAverageDonationPerCharity();
    
private:
    //Variables
    std::string name;
    int numCharities;
    int totalDonated;
    float averageDonationPerCharity;
    
    //Setters
    void setName(std::string inputName);
    void setNumCharities(int inputNumCharities);
    void setTotalDonated(int inputTotalDonated);
    void setAverageDonationPerCharity(float averageDonationPerCharity);
};
//***************************************************************************
//                    END OF CONDITIONAL BLOCK
#endif /* defined(__Maps_Lab6__Contributor__) */
//***************************************************************************
//                      END OF HEADER FILE
//***************************************************************************
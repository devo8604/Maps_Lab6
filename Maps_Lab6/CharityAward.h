//*************************************************************************
// TITLE: 			   	STL Set Lab
// FILENAME:            CharityAward.h
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
//          This is the class that creates the maps and processes the data
//
//*************************************************************************
//
//*************************************************************************
//              PROCESS THIS FILE ONLY ONCE PER PROJECT
#ifndef __Maps_Lab6__CharityAward__
#define __Maps_Lab6__CharityAward__
//
//=========================================================================
//                     CONSTANT DEFINITIONS
//
//*************************************************************************
//                  STANDARD AND USER DEFINED INCLUDES
#include <iostream>
//*************************************************************************
//                     USER DEFINED DATA TYPES
class CharityAward
{
public:
    void contributorRewards();
    
private:
    int contributionAmountGenerator();
    int charitiesParticipatedGenerator();
    std::string awardGained(int charities, float average);

};
//***************************************************************************
//                    END OF CONDITIONAL BLOCK
#endif /* defined(__Maps_Lab6__CharityAward__) */
//***************************************************************************
//                      END OF HEADER FILE
//***************************************************************************
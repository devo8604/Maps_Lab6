//*************************************************************************
// TITLE: 			   	STL Set Lab
// FILENAME:            CharityAward.cpp
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
#include "CharityAward.h"
#include "Contributor.h"
#include <map>
#include <time.h>

using namespace std;
//*************************************************************************
//             Definition of member functions for class Entry
//*************************************************************************
pair<map<int, Contributor>::iterator, bool>result;

void CharityAward::contributorRewards()
{
    srand((unsigned) time(NULL));
    map<int, Contributor> contributorList;
    map<string, int> orderList;
    
    orderList.insert(make_pair("Ball Point Pen", 0));
    orderList.insert(make_pair("Bronze Key Ring", 0));
    orderList.insert(make_pair("Digital Watch", 0));
    orderList.insert(make_pair("Silver Key Ring", 0));
    orderList.insert(make_pair("Bronze Pin", 0));
    orderList.insert(make_pair("Sport Watch", 0));
    orderList.insert(make_pair("Silver Pin", 0));
    orderList.insert(make_pair("Silver Dress Watch", 0));
    orderList.insert(make_pair("Gold Pin", 0));
    orderList.insert(make_pair("Gold Dress Watch", 0));
    
    for (int i = 1; i < 101; i++)
    {
        int charities = charitiesParticipatedGenerator();
        int contribution = contributionAmountGenerator();
        
        contributorList.insert(pair<int, Contributor> (i, Contributor("Dude",
                                                                      charities,
                                                                      contribution,
                                                                      (contribution / charities))));
    }

    //Lists out all of the contributors and thier award
    cout << "List of all contributors and their award:" << endl
         << "-----------------------------------------" << endl;
    
    for (map<int, Contributor>::iterator Itr = contributorList.begin(); Itr != contributorList.end(); Itr++)
    {
        string award = awardGained(Itr->second.getNumCharities(), Itr->second.getAverageDonationPerCharity());
        orderList.find(award)->second += 1;
        
        
        cout << endl << "Contributor with ID: " <<
        Itr->first << ". Named: " <<
        Itr->second.getName() << ". Donated to " <<
        Itr->second.getNumCharities() << " charities. Total Donated: " <<
        Itr->second.getTotalDonated() << ". Average donation per charity: " <<
        Itr->second.getAverageDonationPerCharity() << ". Award won: " <<
        award << "." << endl;
    }
    
    
    //Lists total items needed for ordering purposes
    cout << endl << "List of what needs to be ordered:" << endl
    << "-----------------------------------------" << endl;
    
    for (map<string, int>::iterator OItr = orderList.begin(); OItr !=orderList.end(); OItr++) {
        if (OItr->second > 0)
        {
            cout << OItr->first << ": " << OItr->second << endl;
        }
    }
     
    //Lists three random contributors getting values by the map index
    cout << endl << "List of three contributors and their award:" << endl
         << "-----------------------------------------" << endl;

    for (int i = 1; i < 4; i++)
    {
        int randomID = 0;
        randomID = rand() % 100 + 1;
        
        cout << "Person " << i << ": " <<
        "Contributor with ID: " <<
        randomID << ". Named: " <<
        contributorList[randomID].getName() << ". Donated to " <<
        contributorList[randomID].getNumCharities() << " charities. Total Donated: " <<
        contributorList[randomID].getTotalDonated() << ". Average donation per charity: " <<
        contributorList[randomID].getAverageDonationPerCharity() << ". Award won: " <<
        awardGained(contributorList[randomID].getNumCharities(),
                    contributorList[randomID].getAverageDonationPerCharity()) << "." << endl;
    }
    
}

int CharityAward::contributionAmountGenerator()
{
    return rand() % 4000;
}



int CharityAward::charitiesParticipatedGenerator()
{
    return rand() % 4 + 1;
}



string CharityAward::awardGained(int charities, float average)
{
    
    string gift = " ";
    
    switch (charities) {
        case 1:
            if (average > 400 && average < 599)
            {
                gift = "Ball Point Pen";
            }
            else if (average > 600 && average < 799)
            {
                gift = "Bronze Key Ring";
            }
            else if (average > 800)
            {
                gift = "Digital Watch";
            }
            else
                gift = "Nothing";
            break;
        case 2:
            if (average > 400 && average < 599)
            {
                gift = "Silver Key Ring";
            }
            else if (average > 600 && average < 799)
            {
                gift = "Bronze Pin";
            }
            else if (average > 800)
            {
                gift = "Sport Watch";
            }
            else
                gift = "Nothing";
            break;
        case 3:
            if (average > 400 && average < 599)
            {
                gift = "Bronze Pin";
            }
            else if (average > 600 && average < 799)
            {
                gift = "Silver Pin";
            }
            else if (average > 800)
            {
                gift = "Silver Dress Watch";
            }
            else
                gift = "Nothing";
            break;
        case 4:
            if (average > 400 && average < 599)
            {
                gift = "Silver Pin";
            }
            else if (average > 600 && average < 799)
            {
                gift = "Gold Pin";
            }
            else if (average > 800)
            {
                gift = "Gold Dress Watch";
            }
            else
                gift = "Nothing";
            break;
    }
    return gift;
}



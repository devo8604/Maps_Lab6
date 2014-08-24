//*************************************************************************
// TITLE: 			   	STL Set Lab
// FILENAME:            lab6.cpp
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
//
//=========================================================================
//   			PROGRAM DESCRIPTION
//
//  This application generates a map of 100 donors to 4 charities. The map
//  stores the total donated, how many charities donated to, average donation
//  for each of the charities the donors donated to, and the gift they earned.
//
// INPUTS: NONE
//
// OUTPUTS:  Donor attributes for 100 donors, how many gifts that need to be
//           ordered, and three random donors pulled from the map by their key.
//
//=========================================================================
//                          INCLUDE FILES
#include "CharityAward.h"
#include <iostream>
//
//=========================================================================
//                        CONSTANT DEFINITIONS
//                             NONE
//
//=========================================================================
//                      EXTERNAL CLASS VARIABLES
//                          NONE
//=========================================================================
//
//*************************************************************************
//                     BEGINNING OF PROGRAM CODE
//*************************************************************************
int main(int argc, const char * argv[])
{

    CharityAward yo;
    yo.contributorRewards();
    return 0;
}

/*------OUTPUT-------
 List of all contributors and their award:
 -----------------------------------------
 
 Contributor with ID: 1. Named: Dude. Donated to 3 charities. Total Donated: 988. Average donation per charity: 329. Award won: Nothing.
 
 Contributor with ID: 2. Named: Dude. Donated to 3 charities. Total Donated: 2085. Average donation per charity: 695. Award won: Silver Pin.
 
 Contributor with ID: 3. Named: Dude. Donated to 1 charities. Total Donated: 3345. Average donation per charity: 3345. Award won: Digital Watch.
 
 Contributor with ID: 4. Named: Dude. Donated to 4 charities. Total Donated: 3982. Average donation per charity: 995. Award won: Gold Dress Watch.
 
 Contributor with ID: 5. Named: Dude. Donated to 2 charities. Total Donated: 76. Average donation per charity: 38. Award won: Nothing.
 
 Contributor with ID: 6. Named: Dude. Donated to 4 charities. Total Donated: 1053. Average donation per charity: 263. Award won: Nothing.
 
 Contributor with ID: 7. Named: Dude. Donated to 3 charities. Total Donated: 3210. Average donation per charity: 1070. Award won: Silver Dress Watch.
 
 Contributor with ID: 8. Named: Dude. Donated to 2 charities. Total Donated: 2925. Average donation per charity: 1462. Award won: Sport Watch.
 
 Contributor with ID: 9. Named: Dude. Donated to 2 charities. Total Donated: 1075. Average donation per charity: 537. Award won: Silver Key Ring.
 
 Contributor with ID: 10. Named: Dude. Donated to 4 charities. Total Donated: 2876. Average donation per charity: 719. Award won: Gold Pin.
 
 Contributor with ID: 11. Named: Dude. Donated to 2 charities. Total Donated: 749. Average donation per charity: 374. Award won: Nothing.
 
 Contributor with ID: 12. Named: Dude. Donated to 4 charities. Total Donated: 532. Average donation per charity: 133. Award won: Nothing.
 
 Contributor with ID: 13. Named: Dude. Donated to 3 charities. Total Donated: 144. Average donation per charity: 48. Award won: Nothing.
 
 Contributor with ID: 14. Named: Dude. Donated to 4 charities. Total Donated: 3374. Average donation per charity: 843. Award won: Gold Dress Watch.
 
 Contributor with ID: 15. Named: Dude. Donated to 3 charities. Total Donated: 2007. Average donation per charity: 669. Award won: Silver Pin.
 
 Contributor with ID: 16. Named: Dude. Donated to 1 charities. Total Donated: 2443. Average donation per charity: 2443. Award won: Digital Watch.
 
 Contributor with ID: 17. Named: Dude. Donated to 2 charities. Total Donated: 489. Average donation per charity: 244. Award won: Nothing.
 
 Contributor with ID: 18. Named: Dude. Donated to 2 charities. Total Donated: 800. Average donation per charity: 400. Award won: Nothing.
 
 Contributor with ID: 19. Named: Dude. Donated to 3 charities. Total Donated: 1678. Average donation per charity: 559. Award won: Bronze Pin.
 
 Contributor with ID: 20. Named: Dude. Donated to 3 charities. Total Donated: 3899. Average donation per charity: 1299. Award won: Silver Dress Watch.
 
 Contributor with ID: 21. Named: Dude. Donated to 2 charities. Total Donated: 142. Average donation per charity: 71. Award won: Nothing.
 
 Contributor with ID: 22. Named: Dude. Donated to 4 charities. Total Donated: 3968. Average donation per charity: 992. Award won: Gold Dress Watch.
 
 Contributor with ID: 23. Named: Dude. Donated to 3 charities. Total Donated: 3118. Average donation per charity: 1039. Award won: Silver Dress Watch.
 
 Contributor with ID: 24. Named: Dude. Donated to 4 charities. Total Donated: 2034. Average donation per charity: 508. Award won: Silver Pin.
 
 Contributor with ID: 25. Named: Dude. Donated to 3 charities. Total Donated: 817. Average donation per charity: 272. Award won: Nothing.
 
 Contributor with ID: 26. Named: Dude. Donated to 4 charities. Total Donated: 2227. Average donation per charity: 556. Award won: Silver Pin.
 
 Contributor with ID: 27. Named: Dude. Donated to 2 charities. Total Donated: 3592. Average donation per charity: 1796. Award won: Sport Watch.
 
 Contributor with ID: 28. Named: Dude. Donated to 4 charities. Total Donated: 1997. Average donation per charity: 499. Award won: Silver Pin.
 
 Contributor with ID: 29. Named: Dude. Donated to 1 charities. Total Donated: 1099. Average donation per charity: 1099. Award won: Digital Watch.
 
 Contributor with ID: 30. Named: Dude. Donated to 2 charities. Total Donated: 427. Average donation per charity: 213. Award won: Nothing.
 
 Contributor with ID: 31. Named: Dude. Donated to 1 charities. Total Donated: 2912. Average donation per charity: 2912. Award won: Digital Watch.
 
 Contributor with ID: 32. Named: Dude. Donated to 2 charities. Total Donated: 1129. Average donation per charity: 564. Award won: Silver Key Ring.
 
 Contributor with ID: 33. Named: Dude. Donated to 3 charities. Total Donated: 441. Average donation per charity: 147. Award won: Nothing.
 
 Contributor with ID: 34. Named: Dude. Donated to 2 charities. Total Donated: 1763. Average donation per charity: 881. Award won: Sport Watch.
 
 Contributor with ID: 35. Named: Dude. Donated to 2 charities. Total Donated: 2517. Average donation per charity: 1258. Award won: Sport Watch.
 
 Contributor with ID: 36. Named: Dude. Donated to 4 charities. Total Donated: 1853. Average donation per charity: 463. Award won: Silver Pin.
 
 Contributor with ID: 37. Named: Dude. Donated to 1 charities. Total Donated: 845. Average donation per charity: 845. Award won: Digital Watch.
 
 Contributor with ID: 38. Named: Dude. Donated to 3 charities. Total Donated: 3714. Average donation per charity: 1238. Award won: Silver Dress Watch.
 
 Contributor with ID: 39. Named: Dude. Donated to 3 charities. Total Donated: 1196. Average donation per charity: 398. Award won: Nothing.
 
 Contributor with ID: 40. Named: Dude. Donated to 3 charities. Total Donated: 3219. Average donation per charity: 1073. Award won: Silver Dress Watch.
 
 Contributor with ID: 41. Named: Dude. Donated to 4 charities. Total Donated: 2207. Average donation per charity: 551. Award won: Silver Pin.
 
 Contributor with ID: 42. Named: Dude. Donated to 4 charities. Total Donated: 3830. Average donation per charity: 957. Award won: Gold Dress Watch.
 
 Contributor with ID: 43. Named: Dude. Donated to 4 charities. Total Donated: 2968. Average donation per charity: 742. Award won: Gold Pin.
 
 Contributor with ID: 44. Named: Dude. Donated to 3 charities. Total Donated: 1490. Average donation per charity: 496. Award won: Bronze Pin.
 
 Contributor with ID: 45. Named: Dude. Donated to 4 charities. Total Donated: 2141. Average donation per charity: 535. Award won: Silver Pin.
 
 Contributor with ID: 46. Named: Dude. Donated to 3 charities. Total Donated: 188. Average donation per charity: 62. Award won: Nothing.
 
 Contributor with ID: 47. Named: Dude. Donated to 3 charities. Total Donated: 1264. Average donation per charity: 421. Award won: Bronze Pin.
 
 Contributor with ID: 48. Named: Dude. Donated to 1 charities. Total Donated: 248. Average donation per charity: 248. Award won: Nothing.
 
 Contributor with ID: 49. Named: Dude. Donated to 1 charities. Total Donated: 2757. Average donation per charity: 2757. Award won: Digital Watch.
 
 Contributor with ID: 50. Named: Dude. Donated to 4 charities. Total Donated: 3516. Average donation per charity: 879. Award won: Gold Dress Watch.
 
 Contributor with ID: 51. Named: Dude. Donated to 3 charities. Total Donated: 2716. Average donation per charity: 905. Award won: Silver Dress Watch.
 
 Contributor with ID: 52. Named: Dude. Donated to 2 charities. Total Donated: 1813. Average donation per charity: 906. Award won: Sport Watch.
 
 Contributor with ID: 53. Named: Dude. Donated to 4 charities. Total Donated: 3584. Average donation per charity: 896. Award won: Gold Dress Watch.
 
 Contributor with ID: 54. Named: Dude. Donated to 3 charities. Total Donated: 1426. Average donation per charity: 475. Award won: Bronze Pin.
 
 Contributor with ID: 55. Named: Dude. Donated to 3 charities. Total Donated: 389. Average donation per charity: 129. Award won: Nothing.
 
 Contributor with ID: 56. Named: Dude. Donated to 1 charities. Total Donated: 1646. Average donation per charity: 1646. Award won: Digital Watch.
 
 Contributor with ID: 57. Named: Dude. Donated to 2 charities. Total Donated: 3525. Average donation per charity: 1762. Award won: Sport Watch.
 
 Contributor with ID: 58. Named: Dude. Donated to 1 charities. Total Donated: 2125. Average donation per charity: 2125. Award won: Digital Watch.
 
 Contributor with ID: 59. Named: Dude. Donated to 3 charities. Total Donated: 863. Average donation per charity: 287. Award won: Nothing.
 
 Contributor with ID: 60. Named: Dude. Donated to 3 charities. Total Donated: 3559. Average donation per charity: 1186. Award won: Silver Dress Watch.
 
 Contributor with ID: 61. Named: Dude. Donated to 1 charities. Total Donated: 435. Average donation per charity: 435. Award won: Ball Point Pen.
 
 Contributor with ID: 62. Named: Dude. Donated to 2 charities. Total Donated: 1505. Average donation per charity: 752. Award won: Bronze Pin.
 
 Contributor with ID: 63. Named: Dude. Donated to 2 charities. Total Donated: 2385. Average donation per charity: 1192. Award won: Sport Watch.
 
 Contributor with ID: 64. Named: Dude. Donated to 3 charities. Total Donated: 2133. Average donation per charity: 711. Award won: Silver Pin.
 
 Contributor with ID: 65. Named: Dude. Donated to 1 charities. Total Donated: 1527. Average donation per charity: 1527. Award won: Digital Watch.
 
 Contributor with ID: 66. Named: Dude. Donated to 1 charities. Total Donated: 415. Average donation per charity: 415. Award won: Ball Point Pen.
 
 Contributor with ID: 67. Named: Dude. Donated to 2 charities. Total Donated: 3013. Average donation per charity: 1506. Award won: Sport Watch.
 
 Contributor with ID: 68. Named: Dude. Donated to 3 charities. Total Donated: 2182. Average donation per charity: 727. Award won: Silver Pin.
 
 Contributor with ID: 69. Named: Dude. Donated to 4 charities. Total Donated: 3939. Average donation per charity: 984. Award won: Gold Dress Watch.
 
 Contributor with ID: 70. Named: Dude. Donated to 3 charities. Total Donated: 2214. Average donation per charity: 738. Award won: Silver Pin.
 
 Contributor with ID: 71. Named: Dude. Donated to 1 charities. Total Donated: 3185. Average donation per charity: 3185. Award won: Digital Watch.
 
 Contributor with ID: 72. Named: Dude. Donated to 1 charities. Total Donated: 1621. Average donation per charity: 1621. Award won: Digital Watch.
 
 Contributor with ID: 73. Named: Dude. Donated to 4 charities. Total Donated: 1759. Average donation per charity: 439. Award won: Silver Pin.
 
 Contributor with ID: 74. Named: Dude. Donated to 3 charities. Total Donated: 525. Average donation per charity: 175. Award won: Nothing.
 
 Contributor with ID: 75. Named: Dude. Donated to 4 charities. Total Donated: 1081. Average donation per charity: 270. Award won: Nothing.
 
 Contributor with ID: 76. Named: Dude. Donated to 3 charities. Total Donated: 3689. Average donation per charity: 1229. Award won: Silver Dress Watch.
 
 Contributor with ID: 77. Named: Dude. Donated to 4 charities. Total Donated: 2379. Average donation per charity: 594. Award won: Silver Pin.
 
 Contributor with ID: 78. Named: Dude. Donated to 3 charities. Total Donated: 3358. Average donation per charity: 1119. Award won: Silver Dress Watch.
 
 Contributor with ID: 79. Named: Dude. Donated to 1 charities. Total Donated: 180. Average donation per charity: 180. Award won: Nothing.
 
 Contributor with ID: 80. Named: Dude. Donated to 4 charities. Total Donated: 864. Average donation per charity: 216. Award won: Nothing.
 
 Contributor with ID: 81. Named: Dude. Donated to 2 charities. Total Donated: 404. Average donation per charity: 202. Award won: Nothing.
 
 Contributor with ID: 82. Named: Dude. Donated to 2 charities. Total Donated: 2714. Average donation per charity: 1357. Award won: Sport Watch.
 
 Contributor with ID: 83. Named: Dude. Donated to 1 charities. Total Donated: 248. Average donation per charity: 248. Award won: Nothing.
 
 Contributor with ID: 84. Named: Dude. Donated to 1 charities. Total Donated: 1697. Average donation per charity: 1697. Award won: Digital Watch.
 
 Contributor with ID: 85. Named: Dude. Donated to 3 charities. Total Donated: 1440. Average donation per charity: 480. Award won: Bronze Pin.
 
 Contributor with ID: 86. Named: Dude. Donated to 1 charities. Total Donated: 2132. Average donation per charity: 2132. Award won: Digital Watch.
 
 Contributor with ID: 87. Named: Dude. Donated to 3 charities. Total Donated: 1417. Average donation per charity: 472. Award won: Bronze Pin.
 
 Contributor with ID: 88. Named: Dude. Donated to 2 charities. Total Donated: 3424. Average donation per charity: 1712. Award won: Sport Watch.
 
 Contributor with ID: 89. Named: Dude. Donated to 3 charities. Total Donated: 1449. Average donation per charity: 483. Award won: Bronze Pin.
 
 Contributor with ID: 90. Named: Dude. Donated to 2 charities. Total Donated: 1923. Average donation per charity: 961. Award won: Sport Watch.
 
 Contributor with ID: 91. Named: Dude. Donated to 4 charities. Total Donated: 855. Average donation per charity: 213. Award won: Nothing.
 
 Contributor with ID: 92. Named: Dude. Donated to 3 charities. Total Donated: 1406. Average donation per charity: 468. Award won: Bronze Pin.
 
 Contributor with ID: 93. Named: Dude. Donated to 4 charities. Total Donated: 1. Average donation per charity: 0. Award won: Nothing.
 
 Contributor with ID: 94. Named: Dude. Donated to 2 charities. Total Donated: 1172. Average donation per charity: 586. Award won: Silver Key Ring.
 
 Contributor with ID: 95. Named: Dude. Donated to 2 charities. Total Donated: 3888. Average donation per charity: 1944. Award won: Sport Watch.
 
 Contributor with ID: 96. Named: Dude. Donated to 2 charities. Total Donated: 165. Average donation per charity: 82. Award won: Nothing.
 
 Contributor with ID: 97. Named: Dude. Donated to 3 charities. Total Donated: 3570. Average donation per charity: 1190. Award won: Silver Dress Watch.
 
 Contributor with ID: 98. Named: Dude. Donated to 4 charities. Total Donated: 3879. Average donation per charity: 969. Award won: Gold Dress Watch.
 
 Contributor with ID: 99. Named: Dude. Donated to 1 charities. Total Donated: 2659. Average donation per charity: 2659. Award won: Digital Watch.
 
 Contributor with ID: 100. Named: Dude. Donated to 4 charities. Total Donated: 2600. Average donation per charity: 650. Award won: Gold Pin.
 
 List of what needs to be ordered:
 -----------------------------------------
 Ball Point Pen: 2
 Bronze Pin: 9
 Digital Watch: 14
 Gold Dress Watch: 8
 Gold Pin: 3
 Silver Dress Watch: 10
 Silver Key Ring: 3
 Silver Pin: 13
 Sport Watch: 12
 
 List of three contributors and their award:
 -----------------------------------------
 Person 1: Contributor with ID: 71. Named: Dude. Donated to 1 charities. Total Donated: 3185. Average donation per charity: 3185. Award won: Digital Watch.
 Person 2: Contributor with ID: 45. Named: Dude. Donated to 4 charities. Total Donated: 2141. Average donation per charity: 535. Award won: Silver Pin.
 Person 3: Contributor with ID: 68. Named: Dude. Donated to 3 charities. Total Donated: 2182. Average donation per charity: 727. Award won: Silver Pin.

 */
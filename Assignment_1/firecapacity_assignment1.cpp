/* Name: Sadie Jones
* ID #: 2339622
* Email: sajones@chapman.edu
* Course: CPSC298-07 (C++)
* Assignment: The Basics -- Fire Capacity
*/

 #include <iostream>

 using namespace std;

 int main()
 {
   int maxRoomCapacity;
   int numPeopleMeeting;

   cout << "Maximum room capacity: ";
   cin >> maxRoomCapacity; // get input
   cout << "Number of people attending the meeting: ";
   cin >> numPeopleMeeting;

   // check if fire law regulations are met
   if (numPeopleMeeting <= maxRoomCapacity)
   {
     cout << "Fire regulations have been met. It is legal to hold this meeting." << endl;
     int additionalPeople = maxRoomCapacity - numPeopleMeeting;
     cout << "An additional " << additionalPeople << " people can legally attend this meeting." << endl;
   }
   else
   {
     cout << "The meeting cannot be held as planned due to a violation of fire regulations." << endl;
     int excludedPeople = numPeopleMeeting - maxRoomCapacity;
     cout << excludedPeople << " people must be excluded in order to meet fire regulations." << endl;
   }

   return 0;
 }

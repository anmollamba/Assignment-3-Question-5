#include <iostream>
#include <string>
#include "Header.h"
using namespace std;

int main()
{
    // Declare the map container stateDataMap to store pairs of the form (stateName, capitalName), where stateName and capitalName are variables of type string:
    map<string, string> stateDataMap;

    // Writing C++ statements that add the following pairs to stateDataMap:
    // (Nebraska, Lincoln), (New York, Albany), (Ohio, Columbus), (California, Sacramento), (Massachusetts, Boston), and (Texas, Austin).
    stateDataMap["Nebraska"] = "Lincoln";
    stateDataMap["New York"] = "Albany";
    stateDataMap["Ohio"] = "Columbus";
    stateDataMap["California"] = "Sacramento";
    stateDataMap["Massachusetts"] = "Boston";
    stateDataMap["Texas"] = "Austin";

    // Writing a C++ method that outputs the data stored in stateDataMap.
    print_map(stateDataMap);

    // Writing a C++ statement that changes the capital of California to Los Angeles
    stateDataMap["California"] = "Los Angeles";

    // Writing a C++ method that outputs the capitalName using the stateName which will be entered by the user.
    string state;
    cout << "Enter state name: ";
    getline(cin, state);
    print_capital(stateDataMap, state);
    return 0;
}
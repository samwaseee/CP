#include <bits/stdc++.h>

using namespace std;

int main() {
    // Define the type for the arrays
    constexpr size_t arraySize = 3;
    using ArrayType = array<int, arraySize>;
    using NestedValueContainerType = vector<array<int, arraySize>>;
    using ValueContainerType = array<NestedValueContainerType, arraySize>;

    // Declare the map with array keys and nested value containers
    map<ArrayType, ValueContainerType> myMap;

    // Initialize key array
    ArrayType key1 = {1, 2, 3};

    // Initialize nested value arrays
    array<int, arraySize> value1_1 = {4, 5, 6};
    array<int, arraySize> value1_2 = {7, 8, 9};

    array<int, arraySize> value2_1 = {10, 11, 12};
    array<int, arraySize> value2_2 = {13, 14, 15};

    array<int, arraySize> value3_1 = {16, 17, 18};
    array<int, arraySize> value3_2 = {19, 20, 21};

    // Insert arrays into the nested value container
    myMap[key1][0].push_back(value1_1);
    myMap[key1][0].push_back(value1_2);

    myMap[key1][1].push_back(value2_1);
    myMap[key1][1].push_back(value2_2);

    myMap[key1][2].push_back(value3_1);
    myMap[key1][2].push_back(value3_2);

    // Access and print elements
    for (const auto& pair : myMap) {
        const ArrayType& key = pair.first;
        const ValueContainerType& nestedValues = pair.second;

        cout << "Key: ";
        for (int num : key) {
            cout << num << " ";
        }
        cout << " -> Values: \n";

        for (size_t i = 0; i < nestedValues.size(); ++i) {
            cout << "  Element " << key[i] << " -> ";
            for (const auto& valueArray : nestedValues[i]) {
                cout << "[";
                for (int num : valueArray) {
                    cout << num << " ";
                }
                cout << "] ";
            }
            cout << "\n";
        }
    }

    return 0;
}

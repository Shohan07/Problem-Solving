#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>myVector;
    myVector.push_back(3);
    myVector.push_back(7);
    myVector.push_back(4);
    myVector.push_back(12);
    myVector.push_back(9);

    cout << "Vector: ";
    for(unsigned int i = 0; i < myVector.size(); i++){
        cout << myVector[i] << " ";
    }

    myVector.insert(myVector.begin() + 3, 5);
    cout << endl << "Vector: ";
    for(unsigned int i = 0; i < myVector.size(); i++){
        cout << myVector.at(i) << " ";
    }

    myVector.erase(myVector.begin() + 4);
    cout << endl << "Vector: ";
    for(unsigned int i = 0; i < myVector.size(); i++){
        cout << myVector.at(i) << " ";
    }

    if(myVector.empty()){
        cout << "\nIs Empty!";
    }
    else{
        cout << "\nIs not Empty";
    }

    myVector.clear();
    if(myVector.empty()){
        cout << "\nIs Empty!";
    }
    else{
        cout << "\nIs not Empty";
    }


    cout << endl;
    return 0;
}

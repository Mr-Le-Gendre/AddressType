#ifndef ADDRESSTYPE_H
#define ADDRESSTYPE_H

#include <iostream>
#include <string>
using namespace std;

class addressType {
private:
    string address;
    string city;
    string state;
    int zipcode;

public:
    // Constructors
    addressType(string addr = "", string c = "", string s = "XX", int z = 10000) {
        address = addr;
        city = c;
        setState(s); // Use the setState method to validate the state
        setZipcode(z); // Use the setZipcode method to validate the zipcode
    }

    // Mutators (Setters)
    void setAddress(string addr) { address = addr; }
    void setCity(string c) { city = c; }
    void setState(string s) {
        if (s.length() == 2)
            state = s;
        else
            state = "XX"; // Default value if invalid
    }
    void setZipcode(int z) {
        if (z >= 11111 && z <= 99999)
            zipcode = z;
        else
            zipcode = 10000; // Default value if invalid
    }

    // Accessors (Getters)
    string getAddress() const { return address; }
    string getCity() const { return city; }
    string getState() const { return state; }
    int getZipcode() const { return zipcode; }

    // Print function
    void print() const {
        cout << address << endl;
        cout << city << ", " << state << " " << zipcode << endl;
    }
};

#endif


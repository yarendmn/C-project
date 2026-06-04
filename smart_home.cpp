#include <iostream>
#include <string>
#include <vector>
using namespace std;

class SmartDevice {
    private:
        string deviceName;
        string roomName;
        double powerConsumption; // in watts
        bool isOn;
    public:
        SmartDevice(string x, string y, double z){
            deviceName = x;
            roomName = y;
            powerConsumption = z;
            isOn = false; // default state is off
        } 
        string getDeviceName() {
            return deviceName;
        }
        string getRoomName() {
            return roomName;
        }
        double getPowerConsumption() {
            return powerConsumption;
        }
        void setDeviceName(string name) {
            deviceName = name;
        }
        void setRoomName(string room) {
            roomName = room;
        }
        void setPowerConsumption(double power) {
            powerConsumption = power;
        }
        void turnOn() {
            isOn = true;
            cout << deviceName << " in " << roomName << " is now ON." << endl;
        }
        void turnOff() {
            isOn = false;
            cout << deviceName << " in " << roomName << " is now OFF." << endl;
    }
        int calculateDailyConsumption(int hours){
            if(isOn){
                return powerConsumption * hours; // energy consumed in watt-hours
            }else{
            return 0;
        }
    }
       void displayInfo(){
            cout << "Device Name:" << deviceName << endl;
            cout << "Room Name:" << roomName << endl;
            cout << "Power Consumption:" << powerConsumption << " watts" << endl;
            cout << "Status:" << (isOn ? "ON": "OFF") << endl;
    }
};
int main() {

    cout << "How many smart devices do you have in your home? ";
    int numDevices;
    cin >> numDevices;
    vector<SmartDevice> devices;
    int choice = 0;

    
    for (int i = 0; i < numDevices; i++) {
        string name, room;
        double power;
        cout << "Enter device name: ";
        cin >> name;
        cout << "Enter room name: ";
        cin >> room;
        cout << "Enter power consumption (watts): ";
        cin >> power;
        devices.push_back(SmartDevice(name, room, power));
    }


    do {
        cout << "Menu:" << endl;
        cout << "1. Display device information" << endl;
        cout << "2. Turn on a device" << endl;
        cout << "3. Turn off a device" << endl;
        cout << "4. Calculate daily energy consumption" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice ;

        switch(choice) {
            case 1: {
                for (auto& device : devices) {
                    device.displayInfo();
                    cout << "-------------------" << endl;
                }
                break;
            }
            case 2: {
                cout << "Enter device name to turn on: ";
                string deviceNameOn;
                cin >> deviceNameOn;
                for (auto& device : devices) {
                    if (deviceNameOn == device.getDeviceName()) {
                        device.turnOn();
                        cout << deviceNameOn << " has been turned on." << endl;
                        break;
                    }
                }
                break;
            }
            case 3: {
                cout <<"Enter device name to turn off:" << endl;
                string deviceNameOff;
                cin >> deviceNameOff;
                for (auto& device : devices){
                    if (deviceNameOff == device.getDeviceName()) {
                        device.turnOff();
                        cout << deviceNameOff << " has been turned off." << endl;
                        break;
                    }
                }
                break;
            }
            case 4: {
                cout << "Enter the device name to calculate daily consumption: ";
                string deviceName;
                cin >> deviceName;
                int hours;
                cout << "Enter number of hours to calculate daily consumption: ";
                cin >> hours;
                
                for ( auto& device : devices) {
                    device.calculateDailyConsumption(hours);
                    cout << "Total daily energy consumption:" << device.getDeviceName() << " " << device.calculateDailyConsumption(hours) << " watt-hours" << endl;
                }
                
               break;
            }
            case 5:
                cout << "Exiting the program. Goodbye!" << endl;
                break; 
        }
} while (choice != 5);

return 0;

}
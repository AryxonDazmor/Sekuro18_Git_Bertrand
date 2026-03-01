#include <iostream>
#include <string> // Needed for strings

using namespace std;

int jarak;
string status; 

void inputSensor(){

    cout << "Masukkan jarak: ";
    cin >> jarak;


}
void prosesLogika(){
    if (jarak > 20){
        cout << "Maju mencari api" << endl;
        status = "Masih jauh, cari!";
    } else if (jarak > 5){
        cout << "Udah deket nih" << endl;
        status = "Udah deket, terus mendekat";
    } else {
        cout << "posisi tepat! gas semprot kali ya!" << endl;
        status = "Semprot";
    }
}
void cetakstatus(string status, int jarak){
    cout << "Sensor: " << jarak << "cm" << "Status: " << status << endl;
}
int main() {
    while(true){
        inputSensor();

        if (jarak == 67){
            break;
        }
        prosesLogika();
        cetakstatus(status, jarak);
    }
    
    return 0;
}

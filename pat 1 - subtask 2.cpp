// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main(){
  int temp1, temp2, temp3;

  //Get temperature readings from the user
  cout <<"Enter the first temeperature reading:";
  cin >> temp1;

  cout <<"Enter the second temeperature reading:";
  cin >> temp2;

  //checking if the second reading increases by more than 50 degrees
  if(temp2 - temp1 > 50){
    cout << "Reduce fryer heat before taking the third reading.";
  }

cout <<"Enter the third temperature reading:";
cin >> temp3;

//Check if the increase between second and third readings is less than 10
if(temp3 - temp2 < 10) {
  cout << "increase the fryer heat before taking the third reading.";
  
}

// Check if the final temeperature is within the accepatable range
  if (temp3 >= 150 && temp3 <= 190) {
    cout<<"You may start frying the Magwinyas";
     } else {
        cout <<"Oil is not ready for frying!";
}
        return 0;
}

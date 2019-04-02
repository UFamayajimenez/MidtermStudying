////
//// Created by Amaya Jimenez on 2019-03-12.
////
//
//#include <iostream>
//
//
//using namespace std;
//
//
//struct Person{
//
//    string name;
//    int age;
//
//    Person(string _name, int _age){
//        this->name = _name;
//        this->age = _age;
//    }
//
//
//
//    void happyBirthday(){
//        age++;
//
//    };
//
//    int getAge(){
//        return age;
//    }
//
//    string getName(){
//        return name;
//    }
//
//
//};
//
//
//int main() {
//
//    int someValue = 83;
//
//    int anotherValue = 32;
//
//    int lastValue = 12;
//
//    const int *pointer = &someValue; // Can't change the value of the pointee
//
//    int* const anotherPointer  =  &anotherValue; //Can't change the pointer itself
//
//    const int* const lastPointer = &lastValue; //Can't change the value of the pointee or the pointer itself
//
//
//    //anotherPointer = someValue; //Error!!!
//
//    pointer = &anotherValue; //Okay
//
//    //lastPointer = &anotherPointer; //Error!!!!
//
//
//    //*pointer += 3; //Error!!!!
//
//    *anotherPointer += 3; //Okay
//
//    //lastPointer += 3; //Error!!!
//
//
//    cout << someValue;
//
//
//
//
//
//    return 0;
//}
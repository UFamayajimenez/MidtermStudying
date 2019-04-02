////
//// Created by Amaya Jimenez on 2019-03-12.
////
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
//void call(Person &thePerson){
//    cout << "Hey, " << thePerson.getName() << "! Can you hear me?" << endl;
//}
//
//void callButWithValue(Person thePerson) {
//    cout << "Hey, " << thePerson.getName() << "! Can you hear me?" << endl;
//}
//
//
//    Person Amaya = Person("Amaya", 18);
//
//    Person Steve = Person("Steve", 36);
//
//    Person &aReference = Amaya;
//
//    aReference = Steve;
//
//
//    aReference.happyBirthday();
//
//
//
//    cout << Amaya.getAge() << endl;
//
//    callButWithValue(Amaya);
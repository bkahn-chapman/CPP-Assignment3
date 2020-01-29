#include <iostream>
using namespace std;

class Pet
{
  public: //can be used by anyone (in main)
    //pet types
    Pet();
    Pet(string name, int age, string type, double weight);
    //mutators
    void setName(string name);
    void setAge(int age);
    void setType(string type);
    void setWeight(double weight);
    //accessors
    string getName();
    int getAge();
    string getType();
    double getWeight();
  private: //only usable by the class itself
    //pet variables
    string m_name;
    int m_age;
    string m_type;
    double m_weight;
};

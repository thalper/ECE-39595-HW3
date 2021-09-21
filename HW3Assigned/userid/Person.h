#ifndef PERSON_H_
#define PERSON_H_
#include "Address.h"

class Person {
public:
   Person(const std::string& _name, const int _birthMonth, const int _birthDay, const int _birthYear, const Address& _address); 
   virtual std::string getRole( ); 
   virtual std::string getName( ); 
   virtual int getZipCode( );
   virtual std::string getDateOfBirth( ); 
private:
   const std::string name;
   std::string dateOfBirth;
   const Address address;
};
#endif /* PERSON_H_ */

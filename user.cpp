#include "user.h"

User::User(){};
User::User(std::string un, std::string pw){
	username = un;
	password = pw;
}

User::User(std::string un){
	username=un;

}
std::string User::getUserName() {return username;}

std::string User::getPassword() {return password;}


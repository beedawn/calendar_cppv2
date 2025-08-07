#include <iostream>
#include <string>
#include "login.h"

bool login(std::vector<User>& users, std::string username, std::string password){
	if (username.empty()|| password.empty()){
		return false;
	}
	for(auto user : users){
		if(user.getUserName()==username && user.getPassword()==password){
			return true;
		}
	}
	return false;
}


#include <iostream>
#include "login.h"
#include <vector>
#include "calendar.h"
 void login_prompts(std::string& username, std::string& password);

int main(){
	std::string username, password;
	login_prompts(username, password);


}
//where do we store logged in users? a file? a database?
//probably a database?
std::vector<User> users = {
User("Bob","Smith")
};

void login_prompts(std::string& username, std::string& password){
	std::cout<<"Username?\n";
	std::cin>>username;
	std::cout<<"Password?\n";
	std::cin>>password;
	std::cout<<login(users,username, password);


}

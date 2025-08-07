#define CATCH_CONFIG_MAIN
#include "../external/catch2/catch_amalgamated.hpp"
#include "../login.h"
#include <vector>


	std::vector<User> users= {

		User("Bob","Smith"),
		User("Harry","Potter"),
		User("Patty","Mayonaise")
	};

TEST_CASE("Login works with valid user and password"){
    bool result = login(users, "Bob", "Smith");
    REQUIRE(result == true);


}


TEST_CASE("Login fails with invalid user and password"){
    bool result = login(users, "Larry", "Smith");
    REQUIRE(result == false);
}



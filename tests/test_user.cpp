#define CATCH_CONFIG_MAIN
#include "../external/catch2/catch_amalgamated.hpp"
#include "../user.h"


std::string exampleUser = "alice";
std::string examplePass = "password123";




TEST_CASE("Username is stored correctly", "[User]"){
    User u(exampleUser, examplePass);
    REQUIRE(u.getUserName() == exampleUser);
}

TEST_CASE("Username is stored correctly2"){
User u(exampleUser);
       REQUIRE(u.getUserName()==exampleUser);
}

TEST_CASE ("Password is stored correctly"){
    User u(exampleUser, examplePass);
    REQUIRE(u.getPassword()==examplePass);

}

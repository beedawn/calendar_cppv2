#define CATCH_CONFIG_MAIN
#include "../external/catch2/catch_amalgamated.hpp"
#include "../calendar.h"
#include <string>

std::string test_event = "test_event";

TEST_CASE("Calendar returns an ID"){
    
    Calendar c= Calendar(1);
    REQUIRE(c.getId()==1);
}

TEST_CASE("Calendar can add events"){
Calendar c = Calendar(1);
    c.addEvent(test_event);

    REQUIRE(c.getEvents().size()==1);

}



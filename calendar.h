#include <string>
#include <vector>

class Calendar {
    public:
    Calendar() = default;
    Calendar(int i){
        id=i;
    }

    std::string getName(){return name;}
    int getId(){return id;}
    std::vector<std::string> getEvents(){return events;}
    void addEvent(std::string event);


private:
    int id;
    std::string name;
    std::vector<std::string> events;

};

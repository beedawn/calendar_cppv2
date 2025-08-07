
#include <string>

class User {
public:
    User();
    User(std::string un, std::string pw);
  
    User(std::string un);

    std::string getUserName();
    std::string getPassword();

private:
    std::string username;
    std::string password;
};


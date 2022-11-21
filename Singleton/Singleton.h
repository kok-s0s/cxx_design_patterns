#include <string>

class Singleton {
private:
  static Singleton *instance;
  std::string name;
  Singleton(const Singleton &) = delete;
  Singleton &operator=(const Singleton &) = delete;
  Singleton();

public:
  static Singleton *getInstance();
  ~Singleton();
  std::string getName();
};
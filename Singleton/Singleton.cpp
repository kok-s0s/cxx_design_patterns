#include "Singleton.h"

Singleton *Singleton::instance = nullptr;

Singleton *Singleton::getInstance() {
  if (instance == nullptr) {
    instance = new Singleton();
  }

  return instance;
}

Singleton::Singleton() { name = "kok-s0s"; }

Singleton::~Singleton() {}

std::string Singleton::getName() { return name; }
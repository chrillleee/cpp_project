#include "elf.hpp"

Elf::Elf() {
  this->calories_in_inventory = {};
  this->sum_of_calories_in_inventory = 0;
};
void Elf::add_calories_to_inventory(int new_item) {
  this->calories_in_inventory.push_back(new_item);
  this->sum_of_calories_in_inventory += new_item;
};
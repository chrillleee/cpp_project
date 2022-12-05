#pragma once
#include <iostream>
#include <vector>

class Elf {
 public:
  std::vector<int> calories_in_inventory;
  int sum_of_calories_in_inventory;
  Elf();
  void add_calories_to_inventory(int new_item);
  /*
  void Cleanup(Elf* Elf_Inst){
      Elf_Inst->calories_in_inventory = {};
      Elf_Inst->sum_of_calories_in_inventory=0;
  };
  */
};
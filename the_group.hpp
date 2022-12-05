#pragma once
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

#include "elf.hpp"

class The_Group {
 private:
  std::vector<int> Inventory_Sum_Vector;
  std::vector<int> Sorted_Inventory_Sum_Vector;
  int Sum_Of_Consec_Largest_Numbers;

 public:
  The_Group() {
    this->Group_Of_Elfs = {};
    this->calories_in_inventory = {};
    this->Elf_With_Max_Calories = 0;
    this->Inventory_Sum_Vector = {};
    this->Sorted_Inventory_Sum_Vector = {};
    this->Sum_Of_Consec_Largest_Numbers = 0;
  };
  std::vector<Elf> Group_Of_Elfs;
  int Elf_With_Max_Calories;
  std::vector<int> calories_in_inventory;

  void add_new_elf_to_group(Elf new_elf) {
    this->Group_Of_Elfs.push_back(new_elf);
    check_if_new_elf_has_biggest_inventory(new_elf);
  };
  void check_if_new_elf_has_biggest_inventory(Elf new_elf) {
    Elf_With_Max_Calories = std::max(new_elf.sum_of_calories_in_inventory,
                                     this->Elf_With_Max_Calories);
  };

  std::vector<int> Get_Inventory_Sum_Vector() {
    this->Inventory_Sum_Vector = {};
    int i = 0;
    for (auto iter_i = Group_Of_Elfs.begin(); iter_i < Group_Of_Elfs.end();
         iter_i++) {
      Inventory_Sum_Vector.push_back(
          this->Group_Of_Elfs[i++].sum_of_calories_in_inventory);
      // Group_Of_Elfs[iter_i].sum_of_calories_in_inventory;
    };
    return Inventory_Sum_Vector;
  };
  std::vector<int> Get_Sorted_Inventory_Sum_Vector() {
    this->Get_Inventory_Sum_Vector();
    this->Sorted_Inventory_Sum_Vector = Inventory_Sum_Vector;
    std::sort(Sorted_Inventory_Sum_Vector.begin(),
              Sorted_Inventory_Sum_Vector.end());
    return Sorted_Inventory_Sum_Vector;
  };
  int Get_Sum_Of_Consec_Largest_Numbers(int Number_Of_Elfs) {
    auto temp = this->Get_Sorted_Inventory_Sum_Vector();
    this->Sum_Of_Consec_Largest_Numbers = 0;
    int max_size = static_cast<int>(temp.size());
    for (auto iter_i = max_size - 1; iter_i >= (max_size - Number_Of_Elfs);
         iter_i--) {
      this->Sum_Of_Consec_Largest_Numbers += temp[iter_i];
    };
    return Sum_Of_Consec_Largest_Numbers;
  };
};
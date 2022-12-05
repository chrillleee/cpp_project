#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include "elf.hpp"
#include "the_group.hpp"

int main() {
  The_Group Group_Class, *Ptr_Group_Of_Elfs;
  Ptr_Group_Of_Elfs = &Group_Class;
  Elf Current_Elf, *Ptr_Curr_Elf, Empty_Elf;
  Ptr_Curr_Elf = &Current_Elf;

  std::ifstream input_file;
  input_file.open("day1_input.txt");
  std::string line_in_file;

  while (!input_file.eof()) {
    getline(input_file, line_in_file);

    if (line_in_file == "") {
      Ptr_Group_Of_Elfs->add_new_elf_to_group(Current_Elf);
      Current_Elf = Empty_Elf;
    } else {
      Ptr_Curr_Elf->add_calories_to_inventory(std::stoi(line_in_file));
    };
  }

  std::vector<int> vector_out =
      Ptr_Group_Of_Elfs->Get_Sorted_Inventory_Sum_Vector();
  std::cout << Ptr_Group_Of_Elfs->Get_Sum_Of_Consec_Largest_Numbers(int(3));
  return 0;
}

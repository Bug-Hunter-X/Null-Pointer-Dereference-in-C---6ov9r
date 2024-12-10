int main() {
  int* ptr = nullptr;
  if (ptr != nullptr) {
    *ptr = 10; 
  } else {
    //Handle the null pointer case appropriately
    std::cerr << "Error: Null pointer encountered." << std::endl; 
  }
  return 0;
}
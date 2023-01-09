#include <unordered_map>
#include <string>
#include <iostream>

int main() {
  // Create a hashtable with string keys and int values
  std::unordered_map<std::string, int> hashtable;

  // Insert some key-value pairs into the hashtable
  hashtable["apple"] = 1;
  hashtable["banana"] = 2;
  hashtable["cherry"] = 3;

  // Check if a key is in the hashtable
  if (hashtable.count("apple")) {
    std::cout << "apple is in the hashtable and has value: " << hashtable["apple"] << std::endl;
  } else {
    std::cout << "apple is not in the hashtable" << std::endl;
  }

  // Iterate through the key-value pairs in the hashtable
  for (const auto& kv : hashtable) {
    std::cout << kv.first << " has value: " << kv.second << std::endl;
  }

  return 0;
}

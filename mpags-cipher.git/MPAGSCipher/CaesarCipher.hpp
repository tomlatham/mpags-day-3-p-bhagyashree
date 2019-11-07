#ifndef MPAGSCIPHER_CAESARCIPHER_HPP
#define MPAGSCIPHER_CAESARCIPHER_HPP

#include <vector>
#include "CipherMode.hpp"

class CaesarCipher
 {
  public:
   explicit  CaesarCipher(const size_t& key);
   explicit  CaesarCipher(const std::string& key);

   std::string applyCipher(const std::string& inputText, const CipherMode cipherMode);

  private:
    size_t key_{0};
    const std::vector<char> alphabet = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    size_t alphabetSize = alphabet.size();
  
 };






#endif  // MPAGSCIPHER CAESARCIPHER_HPP 

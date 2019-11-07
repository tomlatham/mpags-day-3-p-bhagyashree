#include <iostream>
#include <vector>
#include <string>

#include "CaesarCipher.hpp"
#include "CipherMode.hpp"
CaesarCipher::CaesarCipher(const size_t& key): key_{key} 
{

}

CaesarCipher::CaesarCipher(const std::string& key): key_{0}
{

  for (const auto& element: key)
    {
      if (! std::isdigit(element))
         {
            std::cout << " Entered String cannot be converted into integer ";
         }
    }
  key_ = std::stoul(key);

}


std::string CaesarCipher::applyCipher(const std::string& inputText, const CipherMode cipher_mode) 
{

  std::string outputText {};
  const size_t truncatedKey {key_ % alphabetSize};
  char processedChar {'x'};
  for (const auto& origChar : inputText )
    {
      for ( size_t i=0; i< alphabetSize; ++i)
        {
          if ( origChar == alphabet[i] )
            {
                if ( cipher_mode == CipherMode::Encrypt ) {
                    processedChar = alphabet[(i + truncatedKey) % alphabetSize ];
                } else {
                    processedChar = alphabet[(i + alphabetSize - truncatedKey) % alphabetSize ];
                }
                break;
            }
        }
      outputText += processedChar;
     }

  return outputText;
} 

           

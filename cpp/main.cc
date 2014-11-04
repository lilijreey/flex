/**
 * @file     main.cc
 *           
 *
 * @author   lili  <lilijreey@gmail.com>
 * @date     24/10/14 16:30:03
 *
 */

#include <iostream>
#include <string>
#include "Parser.h"

// flexc++ and bisonc++
int main()
{
  Parser parser;
  parser.parse();

}


// only flexc++ used

//int main()
//{
//  Scanner scanner; //define a Scanner object
//  
//  while (int token = scanner.lex()) // get all tokens
//  {
//    // get text
//    std::string const &text = scanner.matched();
//    switch (token) {
//    case Scanner::IDENTIFIER:
//      std::cout << "identifier:" << text << "\n";
//      break;
//    case Scanner::NUMBER:
//      std::cout << "number:" << text << "\n";
//      break;
//    default:
//      std::cout << "unmatch char :" << text << "\n";
//      break;
//    }
//  }
//
//  return 0;
//}

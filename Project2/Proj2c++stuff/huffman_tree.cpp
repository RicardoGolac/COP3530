#include "huffman_tree.h"
#include <string>
#include <queue>
#include <sstream>
#include <iostream>
#include <fstream>

/*
Preconditions: file_name is the name of (and possibly path to) a text file
Postconditions: Reads the contents of file_name and constructs a
				huffman tree based on the character frequencies of the file contents
*/
huffman_tree::huffman_tree(const std::string &file_name){
	// open the file given
	// read file contents and create queue of characters in the txt file
	std::ifstream file(file_name);
	std::string line;
	while(std::getline(file, line))
	{
		
	}

	// plug character frequencies into array of ascii values

	// form huffman tree
}

// Destructor
huffman_tree::~huffman_tree(){

}

/*
Preconditions: Character is a character with an ASCII value
				between 0 and 127 (inclusive).
Postconditions: Returns the Huffman code for character if character is in the tree
				and an empty string otherwise.
*/
std::string huffman_tree::get_character_code(char character) const {
	return "";
}

/*
Preconditions: file_name is the name of (and possibly path to) a text file
Postconditions: Returns the Huffman encoding for the contents of file_name
				if file name exists and an empty string otherwise.
				If the file contains letters not present in the huffman_tree,
				return an empty string
*/
std::string huffman_tree::encode(const std::string &file_name) const {
	return "";
}

/*
Preconditions: string_to_decode is a string containing Huffman-encoded text
Postconditions: Returns the plaintext represented by the string if the string
				is a valid Huffman encoding and an empty string otherwise
*/
std::string huffman_tree::decode(const std::string &string_to_decode) const {
	return "";
}

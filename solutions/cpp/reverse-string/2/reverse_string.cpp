#include "reverse_string.h"

namespace reverse_string {

// TODO: add your solution here
	std::string reverse_string(std::string word) {
		if (word != "") {
			for (int i{ 0 }; i < static_cast<int>(word.length()) / 2; i++) {
				char letter = word[i];
				word[i] = word[word.length() - 1 - i];
				word[word.length() - 1 - i] = letter;
			}
		}
		return word;
	}
}  // namespace reverse_string

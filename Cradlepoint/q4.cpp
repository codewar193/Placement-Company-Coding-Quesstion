#include <iostream>
#include <unordered_map>

bool isIsomorphic(std::string string1, std::string string2) {
    if (string1.length() != string2.length()) {
        return false;
    }

    std::unordered_map<char, char> s1_to_s2;
    std::unordered_map<char, char> s2_to_s1;

    for (int i = 0; i < string1.length(); i++) {
        char char1 = string1[i];
        char char2 = string2[i];

        if (s1_to_s2.find(char1) == s1_to_s2.end()) {
            s1_to_s2[char1] = char2;
        } else if (s1_to_s2[char1] != char2) {
            return false;
        }

        if (s2_to_s1.find(char2) == s2_to_s1.end()) {
            s2_to_s1[char2] = char1;
        } else if (s2_to_s1[char2] != char1) {
            return false;
        }
    }

    return true;
}

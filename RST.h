#pragma once
#include <iostream>
namespace RST {
	bool firstReplace(std::string *text, const std::string what, const std::string to) {
		size_t where{ text->find(what) };
		if (where == std::string::npos) return false;
		std::string temp{};
		for (size_t i{}; i < where; i++) {
			temp += (*text)[i];
		}
		temp += to;
		for (size_t i{ where + what.length() }; i < text->length(); i++) {
			temp += (*text)[i];
		}
		*text = temp;
		return true;
	}

	bool allReplace(std::string *text, const std::string what, const std::string to) {
		bool isHave{ false };
		__int64 oldWhere{ -static_cast<__int64>(what.length())};
		size_t where{ text->find(what) };
		std::string temp{};

		while (where != std::string::npos) {
			isHave = true;
			for (__int64 i{ oldWhere + static_cast<__int64>(what.length()) }; i < where; i++) {
				temp += (*text)[i];
			}
			temp += to;
			oldWhere = where;
			where = text->find(what,oldWhere+1);
		}
		if (!isHave) return false;
		for (size_t i{ oldWhere + what.length() }; i < text->length(); i++) {
			temp += (*text)[i];
		}
		*text = temp;
		return isHave;
	}
}

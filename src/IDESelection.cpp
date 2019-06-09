/*
 * IDESelection.cpp
 *
 *  Created on: 08-Jun-2019
 *      Author: Raj Prajapati
 *
 *  Description: Main File of the IDE
 */

#include <iostream>
#include <memory>
#include "ProgLong.hpp"
#include "LangC.hpp"
#include "LangCPlusPlus.hpp"
#include "LangJava.hpp"

int main(void) {
	std::unique_ptr<ProgLong::ProgLong> lang;
	uint16_t userInput;
	char Restart = 'Y';
	std::cout << "Welcome to IDE Selection " << std::endl;
	while (Restart == 'Y' || Restart == 'y') {
		std::cout << "Enter IDE \n"
				"1. LangC\n"
				"2. LangC++ \n"
				"3. LangJava \n";
		std::cin >> userInput;
		switch (userInput) {
		case 1:
			lang.reset(new LangC::LangC());
			// TODO : Will optimize it later.
			//        Optimizing below code snippet is not on priority.
			std::cout << lang->getName() << std::endl;
			std::cout << lang->getUnit() << std::endl;
			std::cout << lang->getParadigm() << std::endl;
			break;
		case 2:
			lang.reset(new LangCPlusPlus::LangCPlusPlus());
			std::cout << lang->getName() << std::endl;
			std::cout << lang->getUnit() << std::endl;
			std::cout << lang->getParadigm() << std::endl;
			break;
		case 3:
			lang.reset(new LangJava::LangJava());
			std::cout << lang->getName() << std::endl;
			std::cout << lang->getUnit() << std::endl;
			std::cout << lang->getParadigm() << std::endl;
			break;
		}
		std::cout << "Do you want to continue (Y/n)";
		std::cin >> Restart;
	}
	std::cout << "Terminating" << std::endl;
	return 0;
}


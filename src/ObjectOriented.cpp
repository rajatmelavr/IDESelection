/*
 * ObjectOriented.cpp
 * Description : Abstract
 * Author      : Raj Prajapati
 * Date		   : 09-Jun-2019
 */

#include "ObjectOriented.hpp"

namespace ObjectOriented {

ObjectOriented::ObjectOriented() {
}

ObjectOriented::~ObjectOriented() {
}

std::string ObjectOriented::getParadigm() {
	return "OOP";
}

std::string ObjectOriented::getUnit() {
	return "class";
}
} /* namespace ObjectOriented */

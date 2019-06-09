/*
 * Procedural.cpp
 * Description : Abstract
 * Author      : Raj Prajapati
 * Date		   : 09-Jun-2019
 */

#include "Procedural.hpp"

namespace Procedural {

Procedural::Procedural() {
}

Procedural::~Procedural() {
}

std::string Procedural::getParadigm() {
	return "Procedural";
}

std::string Procedural::getUnit() {
	return "Function";
}

} /* namespace Procedural */

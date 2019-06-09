/*
 * Procedural.hpp
 * Description : Abstract
 * Author      : Raj Prajapati
 * Date		   : 09-Jun-2019
 */

#ifndef IDESELECTION_SRC_PROCEDURAL_HPP_
#define IDESELECTION_SRC_PROCEDURAL_HPP_

#include "ProgLong.hpp"

namespace Procedural {

class Procedural: public ProgLong::ProgLong {
public:
	Procedural();
	virtual ~Procedural();
	std::string getParadigm(void);
	std::string getUnit(void);
};

} /* namespace Procedural */

#endif /* IDESELECTION_SRC_PROCEDURAL_HPP_ */

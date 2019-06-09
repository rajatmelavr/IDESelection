/*
 * ObjectOriented.hpp
 * Description : Abstract
 * Author      : Raj Prajapati
 * Date		   : 09-Jun-2019
 */

#ifndef IDESELECTION_SRC_OBJECTORIENTED_HPP_
#define IDESELECTION_SRC_OBJECTORIENTED_HPP_

#include "ProgLong.hpp"

namespace ObjectOriented {

class ObjectOriented: public ProgLong::ProgLong {
public:
	ObjectOriented();
	virtual ~ObjectOriented();
	std::string getParadigm(void);
	std::string getUnit(void);
};

} /* namespace ObjectOriented */

#endif /* IDESELECTION_SRC_OBJECTORIENTED_HPP_ */

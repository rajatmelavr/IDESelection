/*
 * LangJava.hpp
 * Description : Normal Class | Non Abstract
 * Author      : Raj Prajapati
 * Date		   : 09-Jun-2019
 */

#ifndef IDESELECTION_SRC_LANGJAVA_HPP_
#define IDESELECTION_SRC_LANGJAVA_HPP_

#include "ObjectOriented.hpp"

namespace LangJava {

class LangJava: public ObjectOriented::ObjectOriented {
public:
	LangJava();
	virtual ~LangJava();
	std::string getName(void);
};

} /* namespace LangJava */

#endif /* IDESELECTION_SRC_LANGJAVA_HPP_ */

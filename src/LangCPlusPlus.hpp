/*
 * LangCPlusPlus.hpp
 * Description : Normal Class | Non Abstract
 * Author      : Raj Prajapati
 * Date		   : 09-Jun-2019
 */

#ifndef IDESELECTION_SRC_LANGCPLUSPLUS_HPP_
#define IDESELECTION_SRC_LANGCPLUSPLUS_HPP_

#include "ObjectOriented.hpp"

namespace LangCPlusPlus {

class LangCPlusPlus: public ObjectOriented::ObjectOriented {
public:
	LangCPlusPlus();
	virtual ~LangCPlusPlus();
	std::string getName(void);
};

} /* namespace LangCPlusPlus */

#endif /* IDESELECTION_SRC_LANGCPLUSPLUS_HPP_ */

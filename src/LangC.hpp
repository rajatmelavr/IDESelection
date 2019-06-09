/*
 * LangC.hpp
 * Description : Normal Class | Non Abstract
 * Author      : Raj Prajapati
 * Date		   : 09-Jun-2019
 */

#ifndef IDESELECTION_SRC_LANGC_HPP_
#define IDESELECTION_SRC_LANGC_HPP_

#include "Procedural.hpp"

namespace LangC {

class LangC: public Procedural::Procedural {
public:
	LangC();
	virtual ~LangC();
	std::string getName(void);
};

} /* namespace LangC */

#endif /* IDESELECTION_SRC_LANGC_HPP_ */

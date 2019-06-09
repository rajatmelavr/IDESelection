/*
 * ProgLong.hpp
 * Description : Interface
 * Author      : Raj Prajapati
 * Date		   : 09-Jun-2019
 */

#ifndef IDESELECTION_SRC_PROGLONG_HPP_
#define IDESELECTION_SRC_PROGLONG_HPP_

#include <string>
namespace ProgLong {
class ProgLong {
public:
	ProgLong() {
	}
	;
	virtual std::string getParadigm(void)= 0;
	virtual std::string getUnit(void)= 0;
	virtual std::string getName(void)= 0;
	virtual ~ProgLong() {
	}
	;
};
}
#endif /* IDESELECTION_SRC_PROGLONG_HPP_ */

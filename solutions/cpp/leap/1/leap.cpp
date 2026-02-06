#include "leap.h"

namespace leap {

// TODO: add your solution here
	bool is_leap_year(const int& year) {
		if (year % 4 == 0) {
			if (year % 100 == 0) {
				return (year % 400 == 0) ? true : false;
			}
			else {
				return true;
			}
		}
		else {
			return false;
		}
	}
}  // namespace leap

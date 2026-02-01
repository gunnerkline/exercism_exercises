// ERROR: FILE CORRUPTED. Please supply valid C++ Code.
#include "doctor_data.h"

namespace heaven {
	Vessel::Vessel(std::string new_name, int new_num, star_map::System system) {
		name = new_name;
		generation = new_num;
		current_system = system;
	}

	Vessel Vessel::replicate(std::string new_name) {
		Vessel duplicate = Vessel(new_name, generation, current_system);
		return duplicate;
	}

	void Vessel::make_buster() {
		busters += 1;
	}

	bool Vessel::shoot_buster() {
		if (busters > 0) {
			busters--;
			return true;
		}
		else {
			return false;
		}

	}

	std::string get_older_bob(const Vessel& v1, const Vessel& v2) {
		std::string older = (v1.generation < v2.generation) ? v1.name : v2.name;
		return older;
	}

	bool in_the_same_system(const Vessel& v1, const Vessel& v2) {
		return (v1.current_system == v2.current_system) ? true : false;
	}
}

// ERROR: FILE CORRUPTED. Please supply valid C++ Code.

#ifndef DOCTOR_DATA_H
#define DOCTOR_DATA_H

#include <string>

namespace star_map {
	enum class System {
		BetaHydri,
		Sol,
		EpsilonEridani,
		AlphaCentauri,
		DeltaEridani,
		Omicron2Eridani
	};
}

namespace heaven {
	class Vessel {
	public:
		std::string name;
		int generation{ 0 };
		star_map::System current_system;
		int busters{ 0 };

		Vessel(std::string new_name, int new_num, star_map::System system = star_map::System::Sol);

		Vessel replicate(std::string new_name);

		void make_buster();

		bool shoot_buster();
	};

	std::string get_older_bob(const Vessel& v1, const Vessel& v2);

	bool in_the_same_system(const Vessel& v1, const Vessel& v2);
}

#endif // DOCTOR_DATA_H
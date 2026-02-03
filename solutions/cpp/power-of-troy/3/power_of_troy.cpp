#include "power_of_troy.h"
#include <algorithm>

namespace troy {

	void give_new_artifact(human& receiver, std::string giftName) {
		receiver.possession = std::make_unique<artifact>(giftName);
	}

	void exchange_artifacts(std::unique_ptr<artifact>& poss_1, std::unique_ptr<artifact>& poss_2) {
		std::swap(poss_1, poss_2);
	}

	void manifest_power(human& manifester, std::string powerName) {
		manifester.own_power = std::make_unique<power>(powerName);
	}

	void use_power(human& caster, human& target) {
		target.influenced_by = caster.own_power;
	}

	int power_intensity(const human& hum) {
		return hum.own_power.use_count();
	}
}  // namespace troy
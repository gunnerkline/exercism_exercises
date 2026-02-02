#include "power_of_troy.h"
#include <algorithm>

namespace troy {

	void give_new_artifact(human& receiver, std::string giftName) {
		receiver.possession = std::make_unique<artifact>(giftName);
	}

	void exchange_artifacts(std::unique_ptr<artifact> poss_1, std::unique_ptr<artifact> poss_2) {
		std::swap(poss_1, poss_2);
	}

	void manifest_power(human& manifester, std::string powerName) {
		manifester.own_power = std::make_unique<power>(powerName);
	}

	void use_power(human& caster, human& target) {
		target.influenced_by = std::make_shared<power>(caster.own_power->effect);
	}

	int power_intensity(const human& hum) {
		if (hum.influenced_by == nullptr) {
			return 0;
		} 
		else {
			return hum.influenced_by.use_count();
		}
	}
}  // namespace troy

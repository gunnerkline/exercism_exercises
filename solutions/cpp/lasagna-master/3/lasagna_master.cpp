#include "lasagna_master.h"

namespace lasagna_master {

// TODO: add your solution here
	int preparationTime(const std::vector<std::string>& layers, const int& time_per_layer) {
		return layers.size() * time_per_layer;
	}

	amount quantities(const std::vector<std::string>& layers) {
		amount needed{};
		for (const std::string& element : layers) {
			if (element == "noodles") {
				needed.noodles += 50;
			}
			else if (element == "sauce") {
				needed.sauce += 0.2;
			}
		}
		return needed;
	}

	void addSecretIngredient(std::vector<std::string>& my_recipe, const std::vector<std::string>& friend_recipe) {
		my_recipe.back() = friend_recipe.back();
	}

	void addSecretIngredient(std::vector<std::string>& my_recipe, std::string secret_ingredient) {
		my_recipe.back() = secret_ingredient;
	}

	std::vector<double> scaleRecipe(const std::vector<double>& quantities, double portions) {
		std::vector<double> amtNeeded{};
		for (const double element : quantities) {
			amtNeeded.push_back(element * (portions / 2));
		}
		return amtNeeded;
	}

}  // namespace lasagna_master

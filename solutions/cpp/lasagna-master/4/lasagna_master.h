#pragma once

#include <string>
#include <vector>

namespace lasagna_master {

struct amount {
    int noodles;
    double sauce;
};

int preparationTime(const std::vector<std::string>& layers, const int& time_per_layer = 2);

amount quantities(const std::vector<std::string>& layers);

void addSecretIngredient(std::vector<std::string>& my_recipe, const std::vector<std::string>& friend_recipe);

void addSecretIngredient(std::vector<std::string>& my_recipe, std::string secret_ingredient);

std::vector<double> scaleRecipe(const std::vector<double>& quantities, int portions);

}  // namespace lasagna_master

namespace targets {
// TODO: Insert the code for the alien class here
	class Alien {
	public:
		Alien(int x, int y) {
			x_coordinate = x;
			y_coordinate = y;
		}

		int get_health() {
			return health;
		}
		int x_coordinate{ 0 };
		int y_coordinate{ 0 };

	private:
		int health{ 3 };
	};
}  // namespace targets

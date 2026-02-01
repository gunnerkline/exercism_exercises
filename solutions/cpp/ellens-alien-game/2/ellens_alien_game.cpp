namespace targets {
// TODO: Insert the code for the alien class here
	class Alien {
	public:
		int x_coordinate{ 0 };
		int y_coordinate{ 0 };

		Alien(int x, int y) {
			x_coordinate = x;
			y_coordinate = y;
		}

		int get_health() {
			return health;
		}

		bool hit() {
			health -= 1;
			return true;
		}

		bool is_alive() {
			return (health > 0) ? true : false;
		}

		bool teleport(int x_new, int y_new) {
			x_coordinate = x_new;
			y_coordinate = y_new;
			return true;
		}

		bool collision_detection(Alien al) {
			return (x_coordinate == al.x_coordinate && y_coordinate == al.y_coordinate) ? true : false;
		}

	private:
		int health{ 3 };
	};
}  // namespace targets

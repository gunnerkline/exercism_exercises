namespace hellmath {

// TODO: Task 1 - Define an `AccountStatus` enumeration to represent the four
// account types: `troll`, `guest`, `user`, and `mod`.
	enum class AccountStatus {
		troll,
		guest,
		user,
		mod
	};

// TODO: Task 1 - Define an `Action` enumeration to represent the three
// permission types: `read`, `write`, and `remove`.
	enum Action {
		read, // 0
		write, // 1
		remove // 2
	};

// TODO: Task 2 - Implement the `display_post` function, that gets two arguments
// of `AccountStatus` and returns a `bool`. The first argument is the status of
// the poster, the second one is the status of the viewer.
	bool display_post(const AccountStatus& poster, const AccountStatus& viewer) {
		if (poster == AccountStatus::troll) {
			return (viewer == AccountStatus::troll) ? true : false;
		} else {
			return true;
		}
	}

// TODO: Task 3 - Implement the `permission_check` function, that takes an
// `Action` as a first argument and an `AccountStatus` to check against. It
// should return a `bool`.
	bool permission_check(const Action& action, const AccountStatus& accStat) {
		switch (action) {

		// If action is read
		case 0:
			return true;

		// If action is write
		case 1:
			return (accStat == AccountStatus::guest) ? false : true;

		// If action is remove
		case 2:
			return (accStat == AccountStatus::mod) ? true : false;

		default:
			return false;
		}
	}

// TODO: Task 4 - Implement the `valid_player_combination` function that
// checks if two players can join the same game. The function has two parameters
// of type `AccountStatus` and returns a `bool`.
	bool valid_player_combination(const AccountStatus& player_1, const AccountStatus& player_2) {
		if (player_1 == AccountStatus::guest || player_2 == AccountStatus::guest) {
			return false;
		}
		else if (player_1 == AccountStatus::troll || player_2 == AccountStatus::troll) {
			return (player_1 == player_2) ? true : false;
		} else {
			return true;
		}
	}

// TODO: Task 5 - Implement the `has_priority` function that takes two
// `AccountStatus` arguments and returns `true`, if and only if the first
// account has a strictly higher priority than the second.
	bool has_priority(const AccountStatus& acct_1, const AccountStatus& acct_2) {
		if (acct_1 == AccountStatus::troll) {
			return false;
		} 
		else if (acct_1 == AccountStatus::guest) {
			return (acct_2 == AccountStatus::troll) ? true : false;
		}
		else if (acct_1 == AccountStatus::user) {
			if (acct_2 == AccountStatus::guest || acct_2 == AccountStatus::troll) { return true; }
			else { return false; }
		}
		else {
			return (acct_2 == AccountStatus::mod) ? false : true;
		}
	}

}  // namespace hellmath

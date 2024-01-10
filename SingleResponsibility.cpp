class Authentication {
public:
	void login() {
		cout << "User logged in" << endl;
	}
	void logout() {
		cout << "User logged out" << endl;
	}
};


class UserInfo {
public:
	void printUserInfo(string username) {
		cout << "Username: " << username << endl;
	}
};

class User : public Authentication, public UserInfo {
};


int main() {
	User user;
	user.login();
	user.logout();
	user.printUserInfo("Salsabeel");
}

#include <iostream>
using namespace std;

class animal {
 public:
 	virtual int ID () = 0;
};

class cat : public animal {
};


class dog : public animal {
};


class parrot : public animal{
};


int main() {

	return 0;
}

#include "MobilePhone.h"

class RobotPhone :
	public MobilePhone
{
public:
	RobotPhone();
	RobotPhone(string phonenumber);
	void Ring();
	~RobotPhone();
};

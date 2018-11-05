#include "MobilePhone.h"

class GogglePhone :
	public MobilePhone
{
public:
	GogglePhone();
	GogglePhone(string phonenumber);
	void Ring();
	~GogglePhone();
};


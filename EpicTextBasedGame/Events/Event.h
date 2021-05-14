#pragma once
class Event
{
public:
	Event();
	~Event();

	virtual void GetEvent() = 0;
	virtual void SetEvent() = 0;
};


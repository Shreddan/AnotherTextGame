#pragma once
class Event
{
public:
	Event();
	~Event();

	virtual void GetEvent() const = 0;
	virtual void SetEvent() = 0;
};


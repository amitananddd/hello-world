#include<iostream>
using namespace std;

class Light
{
public:
	void On() { cout << "Light swithed on" << endl; }
	void Off() { cout << "Light swithed off" << endl; }
};


class ACommand
{
	public:
		virtual void execute() = 0;
};

class LightOnCommand : public ACommand
{
	public:
		LightOnCommand(Light *light):obj(light) {}
		virtual void execute() { obj->On(); }
	
	private:
		Light *obj;
};

class LightOffCommand : public ACommand
{
public: 
	LightOffCommand(Light *light):obj(light) {}
	virtual void execute() { obj->Off(); }
private: 
	Light *obj;
};

class RemoteControl
{
	public:
	void setCmd(ACommand *cmd) 
	{
		acmd = cmd;
	}

	void clickButton() 
	{
		acmd->execute();
	}

	private:
	ACommand *acmd;
};

int main()
{

RemoteControl rc;
Light lightObj;
LightOnCommand lightOnCmd = LightOnCommand(&lightObj);
LightOffCommand lightOffCmd = LightOffCommand(&lightObj);

rc.setCmd(&lightOnCmd);
rc.clickButton();

rc.setCmd(&lightOffCmd);
rc.clickButton();


	return 0;
}
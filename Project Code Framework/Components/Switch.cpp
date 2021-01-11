#include "Switch.h"
Switch::Switch(const GraphicsInfo& r_GfxInfo, int r_FanOut) :Gate(0, r_FanOut)
{
	m_GfxInfo.x1 = r_GfxInfo.x1;
	m_GfxInfo.y1 = r_GfxInfo.y1;
	m_GfxInfo.x2 = r_GfxInfo.x2;
	m_GfxInfo.y2 = r_GfxInfo.y2;
}


void Switch::Operate()
{
	
	//Add you code here
}


// Function Draw
// Draws Switch
void Switch::Draw(Output* pOut)
{
	//Call output class and pass gate drawing info to it.
	pOut->DrawSwitch(m_GfxInfo, Selected);
}

//returns status of outputpin
int Switch::GetOutPinStatus()
{
	return m_OutputPin.getStatus();;
}


//returns status of Inputpin #n
int Switch::GetInputPinStatus(int n)
{
	return -1;	//n starts from 1 but array index starts from 0.
}

//Set status of an input pin ot HIGH or LOW
void Switch::setInputPinStatus(int n, STATUS s)
{
	return;
}

//PLACEHOLDER FOR NOW
InputPin* Switch::GetInputpinCoordinates(int& X_in, int& Y_in, int& Index) {
	return NULL;
}

void Switch::Save(ofstream& print)
{
	print << "Switch\t" << ID << "\t" << GetLabel() << "\t" << GetCompInfo().x1
		<< "\t" << GetCompInfo().x2 << "\t" << GetCompInfo().y1 << "\t" << GetCompInfo().y2 << endl;

}

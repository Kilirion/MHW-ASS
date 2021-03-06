#pragma once
#include "Common.h"

namespace MHWASS 
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;

	public ref class NumericUpDownHR : public NumericUpDown
	{
	public:
		NumericUpDownHR() : NumericUpDown() {}

		virtual void UpdateEditText() override
		{
			ChangingText = true;
			if( !StringTable::text )
				Text = Value.ToString();
			//else if( Value == Maximum )
			//	Text = StaticString( HRAll );
			else
				Text = FormatString1( HRNum, Value.ToString() );
		}
	};
}
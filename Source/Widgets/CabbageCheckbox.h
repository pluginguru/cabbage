/*
  ==============================================================================

    CabbageCheckbox.h
    Created: 25 Oct 2016 9:20:01pm
    Author:  rory

  ==============================================================================
*/

#ifndef CABBAGECHECKBOX_H_INCLUDED
#define CABBAGECHECKBOX_H_INCLUDED

#include "../CabbageCommonHeaders.h"
#include "CabbageCustomWidgets.h"

class CabbagePluginEditor;
//==============================================================================
// custom checkbox component with optional surrounding groupbox
//==============================================================================
class CabbageCheckbox : public ToggleButton, public ValueTree::Listener, public CabbageWidgetBase
{
    int corners;

    bool isRect;
    String name, tooltipText, buttonText, colour, fontcolour, oncolour;

public:

    CabbageCheckbox(ValueTree widgetData);
    ~CabbageCheckbox(){};
    void valueTreePropertyChanged (ValueTree& valueTree, const Identifier&);
    void valueTreeChildAdded (ValueTree&, ValueTree&)override {};
    void valueTreeChildRemoved (ValueTree&, ValueTree&, int) override {}
    void valueTreeChildOrderChanged (ValueTree&, int, int) override {}
    void valueTreeParentChanged (ValueTree&) override {};

	String getTooltip()
	{
		return tooltipText;
	}

	ValueTree widgetData;
	
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (CabbageCheckbox);
};


#endif  // CABBAGECHECKBOX_H_INCLUDED
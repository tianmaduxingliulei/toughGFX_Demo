/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef DID_VIEW_BASE_HPP
#define DID_VIEW_BASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/did_screen/DIDPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>

class DIDViewBase : public touchgfx::View<DIDPresenter>
{
public:
    DIDViewBase();
    virtual ~DIDViewBase() {}

    virtual void setupScreen();

    /*
     * Custom Action Handlers
     */
    virtual void ReadDIDClicked()
    {
        // Override and implement this function in DIDView
    }

    virtual void ClearDIDClicked()
    {
        // Override and implement this function in DIDView
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box box1;
    touchgfx::ButtonWithLabel buttonWithReturn;
    touchgfx::ButtonWithLabel buttonWithRead;
    touchgfx::ButtonWithLabel buttonWithClear;
    touchgfx::Box box2;
    touchgfx::TextAreaWithOneWildcard textHWVersion;
    touchgfx::TextAreaWithOneWildcard textSWVersion;

    /*
     * Wildcard Buffers
     */
    static const uint16_t TEXTHWVERSION_SIZE = 25;
    touchgfx::Unicode::UnicodeChar textHWVersionBuffer[TEXTHWVERSION_SIZE];
    static const uint16_t TEXTSWVERSION_SIZE = 10;
    touchgfx::Unicode::UnicodeChar textSWVersionBuffer[TEXTSWVERSION_SIZE];

private:

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

    /*
     * Callback Declarations
     */
    touchgfx::Callback<DIDViewBase, const touchgfx::AbstractButton&> buttonCallback;

};

#endif // DID_VIEW_BASE_HPP

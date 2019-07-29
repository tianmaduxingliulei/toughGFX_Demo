// -alpha_dither yes -dither 2 -non_opaque_image_format ARGB8888 -opaque_image_format RGB888 0x4af28989
// Generated by imageconverter. Please, do not edit!

#include <touchgfx/Bitmap.hpp>
#include <BitmapDatabase.hpp>

#ifndef NO_USING_NAMESPACE_TOUCHGFX
using namespace touchgfx;
#endif

extern const unsigned char _b10[];
extern const unsigned char _b4[];
extern const unsigned char _b5[];
extern const unsigned char _b7[];
extern const unsigned char _blue_buttons_round_small[];
extern const unsigned char _blue_buttons_round_small_pressed[];
extern const unsigned char _blue_togglebars_toggle_round_large_button_off[];
extern const unsigned char _blue_togglebars_toggle_round_large_button_on[];
extern const unsigned char _btn[];
extern const unsigned char _btn_pressed[];

const touchgfx::Bitmap::BitmapData bitmap_database[] =
{
    { _b10, 0, 64, 64, 6, 28, 27, 4, touchgfx::Bitmap::ARGB8888 },
    { _b4, 0, 64, 64, 4, 47, 57, 4, touchgfx::Bitmap::ARGB8888 },
    { _b5, 0, 64, 64, 30, 26, 4, 32, touchgfx::Bitmap::ARGB8888 },
    { _b7, 0, 64, 64, 28, 28, 8, 36, touchgfx::Bitmap::ARGB8888 },
    { _blue_buttons_round_small, 0, 170, 60, 23, 5, 124, 48, touchgfx::Bitmap::ARGB8888 },
    { _blue_buttons_round_small_pressed, 0, 170, 60, 23, 5, 124, 48, touchgfx::Bitmap::ARGB8888 },
    { _blue_togglebars_toggle_round_large_button_off, 0, 128, 38, 13, 1, 102, 36, touchgfx::Bitmap::ARGB8888 },
    { _blue_togglebars_toggle_round_large_button_on, 0, 128, 38, 13, 1, 102, 36, touchgfx::Bitmap::ARGB8888 },
    { _btn, 0, 130, 56, 3, 0, 124, 55, touchgfx::Bitmap::ARGB8888 },
    { _btn_pressed, 0, 130, 56, 3, 0, 124, 55, touchgfx::Bitmap::ARGB8888 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}
uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
}


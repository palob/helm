/* =========================================================================================

   This is an auto-generated file: Any edits you make may be overwritten!

*/

#ifndef BINARYDATA_H_117127501_INCLUDED
#define BINARYDATA_H_117127501_INCLUDED

namespace BinaryData
{
    extern const char*   helm_icon_16_1x_png;
    const int            helm_icon_16_1x_pngSize = 1230;

    extern const char*   helm_icon_16_2x_png;
    const int            helm_icon_16_2x_pngSize = 2718;

    extern const char*   helm_icon_32_1x_png;
    const int            helm_icon_32_1x_pngSize = 2718;

    extern const char*   helm_icon_32_2x_png;
    const int            helm_icon_32_2x_pngSize = 6352;

    extern const char*   helm_icon_128_1x_png;
    const int            helm_icon_128_1x_pngSize = 15174;

    extern const char*   helm_icon_128_2x_png;
    const int            helm_icon_128_2x_pngSize = 39046;

    extern const char*   helm_icon_256_1x_png;
    const int            helm_icon_256_1x_pngSize = 39046;

    extern const char*   helm_icon_256_2x_png;
    const int            helm_icon_256_2x_pngSize = 70722;

    extern const char*   helm_icon_512_1x_png;
    const int            helm_icon_512_1x_pngSize = 70722;

    extern const char*   helm_icon_512_2x_png;
    const int            helm_icon_512_2x_pngSize = 137623;

    // Points to the start of a list of resource names.
    extern const char* namedResourceList[];

    // Number of elements in the namedResourceList array.
    const int namedResourceListSize = 10;

    // If you provide the name of one of the binary resource variables above, this function will
    // return the corresponding data and its size (or a null pointer if the name isn't found).
    const char* getNamedResource (const char* resourceNameUTF8, int& dataSizeInBytes) throw();
}

#endif
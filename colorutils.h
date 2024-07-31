#include "ColorPair.h"

namespace TelCoColorCoder {
    ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(MajorColor major, MinorColor minor);
    void testNumberToPair(int pairNumber, MajorColor expectedMajor, MinorColor expectedMinor);
    void testPairToNumber(MajorColor major, MinorColor minor, int expectedPairNumber);
    void printColorReferenceManual();
}
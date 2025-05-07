
#include "dmjsoncpp.h"

int main( int argc, char* argv[] ) {

    Idmjsoncpp* module = dmjsoncppGetModule();
    if (module)
    {
        module->Test();
        module->Release();
    }
    return 0;
}

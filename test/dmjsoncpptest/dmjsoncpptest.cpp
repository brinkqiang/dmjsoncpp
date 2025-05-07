
#include "json/json.h"
#include "dmformat.h"

int main( int argc, char* argv[] ) {

    Json::Value value;
    value["sourceId"] = 18423830;
    value["username"] = "zhang";
    value["usercode"] = "aabbcc";


    std::string strData = value.toStyledString();
    fmt::print("{}\n", strData);

    Json::Value value2;
    Json::Reader reader;
    bool parsingSuccess = reader.parse(strData, value2);
    if (!parsingSuccess) {
        fmt::print("解析失败: {}\n", reader.getFormattedErrorMessages());
        return 1;
    }

    fmt::print("{}\n", value2["sourceId"]);
    
    return 0;
}

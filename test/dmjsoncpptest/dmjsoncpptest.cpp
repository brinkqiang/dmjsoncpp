
#include "json/json.h"
#include "dmformat.h"

int main( int argc, char* argv[] ) {

    Json::Value value;
    value["sourceId"] = 123321;
    value["username"] = "千里江山图";
    value["usercode"] = "随机CODE";


    std::string strData = value.toStyledString();
    fmt::print("{}\n", strData);

    Json::Value value2;
    Json::Reader reader;
    bool parsingSuccess = reader.parse(strData, value2);
    if (!parsingSuccess) {
        fmt::print("解析失败: {}\n", reader.getFormattedErrorMessages());
        return 1;
    }
    auto sourceId = value2["sourceId"];
    fmt::print("{}\n", sourceId.asInt64());
    
    return 0;
}

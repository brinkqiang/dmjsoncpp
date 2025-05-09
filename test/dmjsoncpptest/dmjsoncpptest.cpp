
#include "json/json.h"
#include "dmformat.h"
#include "dmfix_win_utf8.h"

int main( int argc, char* argv[] ) {

    Json::Value value;
    value["sourceId"] = 123321;
    value["username"] = "超级管理员";
    value["usercode"] = "随机CODE";


    fmt::print("{}\n", value["username"]);
    fmt::print("{}\n", value["username"].asCString());
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

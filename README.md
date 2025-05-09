# dmjsoncpp

Copyright (c) 2013-2018 brinkqiang (brink.qiang@gmail.com)

[![dmjsoncpp](https://img.shields.io/badge/brinkqiang-dmjsoncpp-blue.svg?style=flat-square)](https://github.com/brinkqiang/dmjsoncpp)
[![License](https://img.shields.io/badge/license-MIT-brightgreen.svg)](https://github.com/brinkqiang/dmjsoncpp/blob/master/LICENSE)
[![blog](https://img.shields.io/badge/Author-Blog-7AD6FD.svg)](https://brinkqiang.github.io/)
[![Open Source Love](https://badges.frapsoft.com/os/v3/open-source.png)](https://github.com/brinkqiang)
[![GitHub stars](https://img.shields.io/github/stars/brinkqiang/dmjsoncpp.svg?label=Stars)](https://github.com/brinkqiang/dmjsoncpp) 
[![GitHub forks](https://img.shields.io/github/forks/brinkqiang/dmjsoncpp.svg?label=Fork)](https://github.com/brinkqiang/dmjsoncpp)

## Build status
| [Linux][lin-link] | [Mac][mac-link] | [Windows][win-link] |
| :---------------: | :----------------: | :-----------------: |
| ![lin-badge]      | ![mac-badge]       | ![win-badge]        |

[lin-badge]: https://github.com/brinkqiang/dmjsoncpp/workflows/linux/badge.svg "linux build status"
[lin-link]:  https://github.com/brinkqiang/dmjsoncpp/actions/workflows/linux.yml "linux build status"
[mac-badge]: https://github.com/brinkqiang/dmjsoncpp/workflows/mac/badge.svg "mac build status"
[mac-link]:  https://github.com/brinkqiang/dmjsoncpp/actions/workflows/mac.yml "mac build status"
[win-badge]: https://github.com/brinkqiang/dmjsoncpp/workflows/win/badge.svg "win build status"
[win-link]:  https://github.com/brinkqiang/dmjsoncpp/actions/workflows/win.yml "win build status"

## Intro
dmjsoncpp
```cpp

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
```
## Contacts

## Thanks

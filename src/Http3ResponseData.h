#ifndef UWS_H3RESPONSEDATA_H
#define UWS_H3RESPONSEDATA_H

#include "MoveOnlyFunction.h"
#include <string_view>

namespace uWS {
    struct Http3ResponseData {

        MoveOnlyFunction<void()> onAborted;
        MoveOnlyFunction<void(std::string_view, bool)> onData;

        // hasWrittenStatus

    };
}

#endif
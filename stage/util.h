//
// Created by 17203 on 2025/9/1.
//

#ifndef USD_CPP_STAGE_H
#define USD_CPP_STAGE_H
#include <pxr/usd/usd/stage.h>
#include <pxr/usd/usd/prim.h>


pxr::UsdStageRefPtr CreateStage(const char *path = nullptr);

#endif //USD_CPP_STAGE_H
//
// Created by 17203 on 2025/9/1.
//


#include "stage.h"

pxr::UsdStageRefPtr CreateStage(const char *path) {

    pxr::UsdStageRefPtr stage = nullptr;
    if (path) {
        stage = pxr::UsdStage::CreateNew(path);
    }else {
        stage = pxr::UsdStage::CreateInMemory();
    }
    if (!stage) {
        throw "stage creation failed";
    }

    return stage;

}

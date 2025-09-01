//
// Created by 17203 on 2025/9/1.
//


#include "util.h"

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

pxr::UsdStageRefPtr OpenStage(const char *path) {
    if (!path) {
        throw "path creation failed";
    }
    pxr::UsdStageRefPtr stage = pxr::UsdStage::Open(path);
    return stage;
}

void SetMetadata(pxr::UsdStageRefPtr stage, const pxr::TfToken &key, const pxr::VtValue &value) {
    if (!stage) {
        throw "root stage get failed";
    }
    stage->SetMetadata(key, value);
}


pxr::UsdPrim DefinePrim(pxr::UsdStageRefPtr stage, const pxr::SdfPath &primPath, const pxr::TfToken &typeName) {
    if (!stage) {
        return pxr::UsdPrim();
    }
    return stage->DefinePrim(primPath, typeName);
}



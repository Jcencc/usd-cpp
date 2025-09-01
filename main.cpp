//
// Created by 17203 on 2025/9/1.
//


#include "stage/util.h"



int main() {

    std::string filePath = "../HelloUsd.usda";

    pxr::UsdStageRefPtr stage = CreateStage(filePath.c_str());

    SetMetadata(stage,  pxr::TfToken("endTimeCode"), pxr::VtValue(100.0));

    auto xform = DefinePrim(stage, pxr::SdfPath("/hello"), pxr::TfToken("Xform"));
    auto sphere = DefinePrim(stage, pxr::SdfPath("/hello/world"), pxr::TfToken("Sphere"));
    stage->GetRootLayer()->Save();

    return 0;
}
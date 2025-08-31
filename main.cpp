//
// Created by 17203 on 2025/9/1.
//


#include <pxr/usd/usd/stage.h>
#include <pxr/usd/usd/prim.h>
#include <pxr/base/tf/token.h>
#include <string>
#include <pxr/usd/sdf/path.h>



int main() {

    std::string filePath = "../HelloUsd.usda";

    pxr::UsdStageRefPtr stage = pxr::UsdStage::CreateNew(filePath);
    auto xform = stage->DefinePrim(pxr::SdfPath("/hello"), pxr::TfToken("Xform"));
    auto sphere = stage->DefinePrim(pxr::SdfPath("/hello/world"), pxr::TfToken("Sphere"));
    stage->GetRootLayer()->Save();

    return 0;
}
//
// Created by 17203 on 2025/9/1.
//

#ifndef USD_CPP_STAGE_H
#define USD_CPP_STAGE_H
#include <pxr/usd/usd/stage.h>
#include <pxr/usd/usd/prim.h>
#include <pxr/usd/usd/tokens.h>
#include <pxr/base/tf/token.h>

#include <pxr/usd/sdf/schema.h>
#include <pxr/usd/sdf/types.h>
#include <pxr/base/vt/value.h>


pxr::UsdStageRefPtr CreateStage(const char *path = nullptr);

pxr::UsdStageRefPtr OpenStage(const char *path = nullptr);

void SetMetadata(pxr::UsdStageRefPtr stage, const pxr::TfToken& key, const pxr::VtValue& value);

pxr::UsdPrim DefinePrim(pxr::UsdStageRefPtr stage, const pxr::SdfPath& primPath, const pxr::TfToken& typeName);



#endif //USD_CPP_STAGE_H

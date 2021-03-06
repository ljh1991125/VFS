// Copyright 2018 Grass Valley, A Belden Brand

// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at

//     http://www.apache.org/licenses/LICENSE-2.0

// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

//cTrans2FindNext2.h

#pragma once

#include "ctrans2find.h"
#include "cTrans2Response.h"

class cSMBResponse;

class cTrans2FindNext2 : cTrans2Response, cTrans2Find
{
public:
  cTrans2FindNext2(cTrans2Find *pTrans2Find
    , const vfs::cPtr<iTreeResource> pTreeResource
    , PREQ_FIND_NEXT2 pReq
    , vfs::cPtr<cSMBResponse> response);
  ~cTrans2FindNext2(void);
};

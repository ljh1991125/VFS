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

//cCompositeDirLocation.cpp

#include "StdAfx.h"

#include ".\ccompositedirlocation.h"

using namespace vfs;

cCompositeDirLocation::cCompositeDirLocation(const vfs::cPtr<iComposite> pComposite
  , const vfs::cPtr<iRename> pRename)
: m_pComposite(pComposite)
, m_pRename(pRename)
{
}

cCompositeDirLocation::~cCompositeDirLocation(void)
{
}

vfs::cPtr<iComposite> cCompositeDirLocation::Create(const vfs::String& sName
  , DWORD dwDesiredAccess
  , DWORD dwShareMode
  , LPSECURITY_ATTRIBUTES lpAtts
  , DWORD dwCreationDisposition
  , DWORD dwFlagsAndAtts
  , HANDLE hTemplateFile
  , DWORD& dwRet
  , cPtr<iFileProcessingCallback> pCallback)
{
  if (CREATE_NEW == dwCreationDisposition)
  {
    dwRet = ERROR_ACCESS_DENIED;
    return cPtr<iComposite>();
  }

  dwRet = ERROR_SUCCESS;
  return m_pComposite;
}

vfs::cPtr<iRename> cCompositeDirLocation::Rename()
{
  return m_pRename;
}

DWORD cCompositeDirLocation::Rename(const vfs::cPtr<iRename> pSourceRename
  , const vfs::String& sNewName
  , const vfs::String& sUserName)
{
  return ERROR_ACCESS_DENIED;
}

void cCompositeDirLocation::Rename(const vfs::String& sNewName)
{
}

DWORD cCompositeDirLocation::writeInfo(const PfileInfo pFileInfo, ULONGLONG fid)
{
  return m_pComposite->writeInfo(pFileInfo, fid);
}

void cCompositeDirLocation::refreshCache()
{
}
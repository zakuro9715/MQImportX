#pragma once

#include <windows.h>
#include "../mqsdk/MQBasePlugin.h"

constexpr auto PRODUCT_ID = 1033963492;
constexpr auto PLUGIN_ID = 2188573864;

extern MQBasePlugin *GetPluginClass();

class MQImportX :public MQImportPlugin
{
public:
  MQImportX() = default;
  ~MQImportX() override = default;
  void GetPlugInID(DWORD *Product, DWORD *ID) override ;
  const char * GetPlugInName() override;
  BOOL ImportFile(int index, const char *filename, MQDocument doc) override;
  const char * EnumFileType(int index) override;
  const char * EnumFileExt(int index) override;
};
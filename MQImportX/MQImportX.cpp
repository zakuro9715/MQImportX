#include "MQImportX.hpp"

extern MQBasePlugin *GetPluginClass() {
  return new MQImportX();
}

void MQImportX::GetPlugInID(DWORD *Product, DWORD *ID)
{
  *Product = PRODUCT_ID;
  *ID = PLUGIN_ID;
}

const char * MQImportX::GetPlugInName() {
  return "ImportX";
}

BOOL MQImportX::ImportFile(int index, const char *filename, MQDocument doc)
{
  return FALSE;
}

const char * MQImportX::EnumFileType(int index)
{
  if (index > 0)
    return NULL;
  return "Direct3D Retained Mode (*.x)";
}

const char * MQImportX::EnumFileExt(int index)
{
  if (index > 0)
    return NULL;
  return "x";
}
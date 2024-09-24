#ifndef _DOWNLOAD_H_
#define _DOWNLOAD_H_

#define FRENEZY_PACK_URL     "https://github.com/FrenezyFr/Update-Switch/releases/download/Switch.Update/Pack.Switch.zip"
#define APP_URL         "https://github.com/FrenezyFr/Frenezy-Updater/releases/download/Frenezy-Updater/Frenezy-Updater.nro"
#define TEMP_FILE       "/switch/Frenezy-Updater/temp"

#include <stdbool.h>
#include <switch.h>

typedef bool(*DlProgressCallback)(u32 dltotal, u32 dlnow, u32 ultotal, u32 ulnow);

//
bool downloadFile(const char *url, const char *output, DlProgressCallback pcall);

#endif

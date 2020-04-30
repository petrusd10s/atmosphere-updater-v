#ifndef _DOWNLOAD_H_
#define _DOWNLOAD_H_

#define AMS_URL     "https://api.github.com/repos/petrusd10s/Atmosphere/releases"
#define HEKATE_URL  "https://api.github.com/repos/petrusd10s/hekate/releases"
#define PATCHES_URL "https://api.github.com/repos/petrusd10s/vanillapatches/releases"
#define APP_URL     "https://github.com/ITotalJustice/atmosphere-updater/releases/latest/download/atmosphere-updater.nro"

int downloadFile(const char *url, const char *output, int api_mode);

#endif

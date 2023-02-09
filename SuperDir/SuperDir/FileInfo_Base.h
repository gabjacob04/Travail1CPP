#include "IFileInfo.h";

class FileInfor_Base {
	char mFolder[512];
	char MFile[256];

	virtual void Init(const char* aFolder, const char* aFile);
};
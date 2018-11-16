#ifndef DOWNLOADITEM_H
#define DOWNLOADITEM_H

#include <ListItem.h>

class DownloadItem : public BListItem
{
	public:
		DownloadItem(BString name, BString mod, BString size);
		virtual void DrawItem(BView *owner, BRect frame, bool complete=false);
		virtual void Update(BView *owner, const BFont *font);
		virtual const char *GetName();
		virtual void SetOrigSize(float size);
		virtual float GetOrigSize();
		
	private:
		BString myName, myModDate, mySize;
		float myOrigSize;
};

const unsigned char ZipIconOff [] = {
	0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3f,
	0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x00,0xf9,0xf9,0xf9,0xf9,0xf9,0xf9,0x00,0x3f,
	0x3f,0x3f,0x3f,0x3f,0x3f,0x00,0x00,0x00,0xf9,0xf9,0xf9,0xf9,0xf9,0xf9,0x00,0x3f,
	0x3f,0x3f,0x3f,0x3f,0x00,0xd9,0xd9,0x00,0xf9,0xf9,0xf9,0xf9,0xf9,0xf9,0x00,0x3f,
	0x3f,0x3f,0x3f,0x00,0xd9,0xd9,0xd9,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3f,
	0x3f,0x3f,0x00,0x00,0x00,0x00,0x00,0x00,0xd9,0x00,0xd9,0xd9,0xd9,0x00,0x00,0x3f,
	0x3f,0x00,0xd9,0xd9,0x00,0xd9,0xd9,0x00,0x00,0x00,0x00,0xd9,0xd9,0xd9,0x83,0x00,
	0x00,0xd9,0xd9,0xd9,0xd9,0x01,0x00,0x00,0xd9,0xd9,0xd9,0x00,0xd9,0x3f,0x83,0x00,
	0x00,0x3f,0x3f,0xd9,0xd9,0xd9,0x00,0x00,0x00,0x00,0x00,0xd9,0x3f,0x83,0x83,0x00,
	0x00,0xd9,0xd9,0x3f,0x3f,0x00,0xd9,0x00,0xd9,0xd9,0xd9,0x00,0x00,0x83,0x00,0x3f,
	0x00,0x00,0xd9,0xd9,0x00,0x3f,0x3f,0x00,0xd9,0xd9,0x3f,0x83,0x00,0x00,0x3f,0x3f,
	0x3f,0x3f,0x00,0x00,0x00,0xd9,0xd9,0x3f,0x3f,0x3f,0x83,0x83,0x00,0x3f,0x3f,0x3f,
	0x3f,0x3f,0x3f,0x3f,0x00,0x00,0xd9,0xd9,0xd9,0x83,0x83,0x01,0x3f,0x3f,0x3f,0x3f,
	0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x00,0x00,0xd9,0x83,0x01,0x3f,0x3f,0x3f,0x3f,0x3f,
	0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x00,0x00,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,
	0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f
};

const unsigned char ZipIconOn [] = {
	0x13,0x13,0x13,0x13,0x13,0x13,0x13,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x13,
	0x13,0x13,0x13,0x13,0x13,0x13,0x13,0x00,0xf9,0xf9,0xf9,0xf9,0xf9,0xf9,0x00,0x13,
	0x13,0x13,0x13,0x13,0x13,0x00,0x00,0x00,0xf9,0xf9,0xf9,0xf9,0xf9,0xf9,0x00,0x13,
	0x13,0x13,0x13,0x13,0x00,0xd9,0xd9,0x00,0xf9,0xf9,0xf9,0xf9,0xf9,0xf9,0x00,0x13,
	0x13,0x13,0x13,0x00,0xd9,0xd9,0xd9,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x13,
	0x13,0x13,0x00,0x00,0x00,0x00,0x00,0x00,0xd9,0x00,0xd9,0xd9,0xd9,0x00,0x00,0x13,
	0x13,0x00,0xd9,0xd9,0x00,0xd9,0xd9,0x00,0x00,0x00,0x00,0xd9,0xd9,0xd9,0x83,0x00,
	0x00,0xd9,0xd9,0xd9,0xd9,0x01,0x00,0x00,0xd9,0xd9,0xd9,0x00,0xd9,0x3f,0x83,0x00,
	0x00,0x3f,0x3f,0xd9,0xd9,0xd9,0x00,0x00,0x00,0x00,0x00,0xd9,0x3f,0x83,0x83,0x00,
	0x00,0xd9,0xd9,0x3f,0x3f,0x00,0xd9,0x00,0xd9,0xd9,0xd9,0x00,0x00,0x83,0x00,0x13,
	0x00,0x00,0xd9,0xd9,0x00,0x3f,0x3f,0x00,0xd9,0xd9,0x3f,0x83,0x00,0x00,0x13,0x13,
	0x13,0x13,0x00,0x00,0x00,0xd9,0xd9,0x3f,0x3f,0x3f,0x83,0x83,0x00,0x13,0x13,0x13,
	0x13,0x13,0x13,0x13,0x00,0x00,0xd9,0xd9,0xd9,0x83,0x83,0x01,0x13,0x13,0x13,0x13,
	0x13,0x13,0x13,0x13,0x13,0x13,0x00,0x00,0xd9,0x83,0x01,0x13,0x13,0x13,0x13,0x13,
	0x13,0x13,0x13,0x13,0x13,0x13,0x13,0x13,0x00,0x00,0x13,0x13,0x13,0x13,0x13,0x13,
	0x13,0x13,0x13,0x13,0x13,0x13,0x13,0x13,0x13,0x13,0x13,0x13,0x13,0x13,0x13,0x13
};

#endif
#ifndef _HELPERS_7F097B6B_1667_474A_AD3E_B3005E27F7A7_
#define _HELPERS_7F097B6B_1667_474A_AD3E_B3005E27F7A7_


static void __tracemsg(LPCSTR msg)
{
ATLTRACE(msg);ATLTRACE("\n");
MessageBoxA(NULL,msg,NULL, MB_OK | MB_SYSTEMMODAL);
}

static void __tracefolderflags(IFolderView2* pfv2)
{
	DWORD ff;
	if FAILED(pfv2->GetCurrentFolderFlags(&ff)) return;
ATLTRACE("FWF_NONE=%d\n",((ff & FWF_NONE) ? 1 : 0));
ATLTRACE("FWF_AUTOARRANGE=%d\n",((ff & FWF_AUTOARRANGE) ? 1 : 0));
ATLTRACE("FWF_ABBREVIATEDNAMES=%d\n",((ff & FWF_ABBREVIATEDNAMES) ? 1 : 0));
ATLTRACE("FWF_SNAPTOGRID=%d\n",((ff & FWF_SNAPTOGRID) ? 1 : 0));
ATLTRACE("FWF_OWNERDATA=%d\n",((ff & FWF_OWNERDATA) ? 1 : 0));
ATLTRACE("FWF_BESTFITWINDOW=%d\n",((ff & FWF_BESTFITWINDOW) ? 1 : 0));
ATLTRACE("FWF_DESKTOP=%d\n",((ff & FWF_DESKTOP) ? 1 : 0));
ATLTRACE("FWF_SINGLESEL=%d\n",((ff & FWF_SINGLESEL) ? 1 : 0));
ATLTRACE("FWF_NOSUBFOLDERS=%d\n",((ff & FWF_NOSUBFOLDERS) ? 1 : 0));
ATLTRACE("FWF_TRANSPARENT=%d\n",((ff & FWF_TRANSPARENT) ? 1 : 0));
ATLTRACE("FWF_NOCLIENTEDGE=%d\n",((ff & FWF_NOCLIENTEDGE) ? 1 : 0));
ATLTRACE("FWF_NOSCROLL=%d\n",((ff & FWF_NOSCROLL) ? 1 : 0));
ATLTRACE("FWF_ALIGNLEFT=%d\n",((ff & FWF_ALIGNLEFT) ? 1 : 0));
ATLTRACE("FWF_NOICONS=%d\n",((ff & FWF_NOICONS) ? 1 : 0));
ATLTRACE("FWF_SHOWSELALWAYS=%d\n",((ff & FWF_SHOWSELALWAYS) ? 1 : 0));
ATLTRACE("FWF_NOVISIBLE=%d\n",((ff & FWF_NOVISIBLE) ? 1 : 0));
ATLTRACE("FWF_SINGLECLICKACTIVATE=%d\n",((ff & FWF_SINGLECLICKACTIVATE) ? 1 : 0));
ATLTRACE("FWF_NOWEBVIEW=%d\n",((ff & FWF_NOWEBVIEW) ? 1 : 0));
ATLTRACE("FWF_HIDEFILENAMES=%d\n",((ff & FWF_HIDEFILENAMES) ? 1 : 0));
ATLTRACE("FWF_CHECKSELECT=%d\n",((ff & FWF_CHECKSELECT) ? 1 : 0));
ATLTRACE("FWF_NOENUMREFRES =%d\n",((ff & FWF_NOENUMREFRESH) ? 1 : 0));
ATLTRACE("FWF_NOGROUPING=%d\n",((ff & FWF_NOGROUPING) ? 1 : 0));
ATLTRACE("FWF_FULLROWSELECT=%d\n",((ff & FWF_FULLROWSELECT) ? 1 : 0));
ATLTRACE("FWF_NOFILTERS=%d\n",((ff & FWF_NOFILTERS) ? 1 : 0));
ATLTRACE("FWF_NOCOLUMNHEADER=%d\n",((ff & FWF_NOCOLUMNHEADER) ? 1 : 0));
ATLTRACE("FWF_NOHEADERINALLVIEWS=%d\n",((ff & FWF_NOHEADERINALLVIEWS) ? 1 : 0));
ATLTRACE("FWF_EXTENDEDTILES=%d\n",((ff & FWF_EXTENDEDTILES) ? 1 : 0));
ATLTRACE("FWF_TRICHECKSELECT=%d\n",((ff & FWF_TRICHECKSELECT) ? 1 : 0));
ATLTRACE("FWF_AUTOCHECKSELECT=%d\n",((ff & FWF_AUTOCHECKSELECT) ? 1 : 0));
ATLTRACE("FWF_NOBROWSERVIEWSTATE=%d\n",((ff & FWF_NOBROWSERVIEWSTATE) ? 1 : 0));
ATLTRACE("FWF_SUBSETGROUPS=%d\n",((ff & FWF_SUBSETGROUPS) ? 1 : 0));
ATLTRACE("FWF_USESEARCHFOLDER=%d\n",((ff & FWF_USESEARCHFOLDER) ? 1 : 0));
ATLTRACE("FWF_ALLOWRTLREADING=%d\n",((ff & FWF_ALLOWRTLREADING) ? 1 : 0));
}

static void __tracefolderflags2(IFolderView2* pfv2)
{
	DWORD ff;
	if FAILED(pfv2->GetCurrentFolderFlags(&ff)) return;
if (ff & FWF_NONE)	ATLTRACE("FWF_NONE");
if (ff & FWF_AUTOARRANGE)	ATLTRACE(" | FWF_AUTOARRANGE");
if (ff & FWF_ABBREVIATEDNAMES)	ATLTRACE(" | FWF_ABBREVIATEDNAMES");
if (ff & FWF_SNAPTOGRID)	ATLTRACE(" | FWF_SNAPTOGRID");
if (ff & FWF_OWNERDATA)	ATLTRACE(" | FWF_OWNERDATA");
if (ff & FWF_BESTFITWINDOW)	ATLTRACE(" | FWF_BESTFITWINDOW");
if (ff & FWF_DESKTOP)	ATLTRACE(" | FWF_DESKTOP");
if (ff & FWF_SINGLESEL)	ATLTRACE(" | FWF_SINGLESEL");
if (ff & FWF_NOSUBFOLDERS)	ATLTRACE(" | FWF_NOSUBFOLDERS");
if (ff & FWF_TRANSPARENT)	ATLTRACE(" | FWF_TRANSPARENT");
if (ff & FWF_NOCLIENTEDGE)	ATLTRACE(" | FWF_NOCLIENTEDGE");
if (ff & FWF_NOSCROLL)	ATLTRACE(" | FWF_NOSCROLL");
if (ff & FWF_ALIGNLEFT)	ATLTRACE(" | FWF_ALIGNLEFT");
if (ff & FWF_NOICONS)	ATLTRACE(" | FWF_NOICONS");
if (ff & FWF_SHOWSELALWAYS)	ATLTRACE(" | FWF_SHOWSELALWAYS");
if (ff & FWF_NOVISIBLE)	ATLTRACE(" | FWF_NOVISIBLE");
if (ff & FWF_SINGLECLICKACTIVATE)	ATLTRACE(" | FWF_SINGLECLICKACTIVATE");
if (ff & FWF_NOWEBVIEW)	ATLTRACE(" | FWF_NOWEBVIEW");
if (ff & FWF_HIDEFILENAMES)	ATLTRACE(" | FWF_HIDEFILENAMES");
if (ff & FWF_CHECKSELECT)	ATLTRACE(" | FWF_CHECKSELECT");
if (ff & FWF_NOENUMREFRESH)	ATLTRACE(" | FWF_NOENUMREFRES ");
if (ff & FWF_NOGROUPING)	ATLTRACE(" | FWF_NOGROUPING");
if (ff & FWF_FULLROWSELECT)	ATLTRACE(" | FWF_FULLROWSELECT");
if (ff & FWF_NOFILTERS)	ATLTRACE(" | FWF_NOFILTERS");
if (ff & FWF_NOCOLUMNHEADER)	ATLTRACE(" | FWF_NOCOLUMNHEADER");
if (ff & FWF_NOHEADERINALLVIEWS)	ATLTRACE(" | FWF_NOHEADERINALLVIEWS");
if (ff & FWF_EXTENDEDTILES)	ATLTRACE(" | FWF_EXTENDEDTILES");
if (ff & FWF_TRICHECKSELECT)	ATLTRACE(" | FWF_TRICHECKSELECT");
if (ff & FWF_AUTOCHECKSELECT)	ATLTRACE(" | FWF_AUTOCHECKSELECT");
if (ff & FWF_NOBROWSERVIEWSTATE)	ATLTRACE(" | FWF_NOBROWSERVIEWSTATE");
if (ff & FWF_SUBSETGROUPS)	ATLTRACE(" | FWF_SUBSETGROUPS");
if (ff & FWF_USESEARCHFOLDER)	ATLTRACE(" | FWF_USESEARCHFOLDER");
if (ff & FWF_ALLOWRTLREADING)	ATLTRACE(" | FWF_ALLOWRTLREADING");
ATLTRACE("\n");
}

#endif//_HELPERS_7F097B6B_1667_474A_AD3E_B3005E27F7A7_

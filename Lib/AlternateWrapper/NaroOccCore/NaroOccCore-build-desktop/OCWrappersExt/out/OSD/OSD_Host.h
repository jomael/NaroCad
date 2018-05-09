// File generated by CPPExt (MPV)
//
#ifndef _OSD_Host_OCWrappers_HeaderFile
#define _OSD_Host_OCWrappers_HeaderFile

// include native header
#include <OSD_Host.hxx>
#include "../Converter.h"


#include "../TCollection/TCollection_AsciiString.h"
#include "OSD_Error.h"
#include "OSD_SysType.h"
#include "OSD_OEMType.h"


namespace OCNaroWrappers
{

ref class OCTCollection_AsciiString;


//! Carries information about a Host <br>
public ref class OCOSD_Host  {

protected:
  OSD_Host* nativeHandle;
  OCOSD_Host(OCDummy^) {};

public:
  property OSD_Host* Handle
  {
    OSD_Host* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCOSD_Host(OSD_Host* nativeHandle);

// Methods PUBLIC

//! Initializes current host by default. <br>
OCOSD_Host();

//! Returns system name and version <br>
 /*instead*/  OCTCollection_AsciiString^ SystemVersion() ;

//! Returns the system type (UNIX System V, UNIX BSD, MS-DOS...) <br>
 /*instead*/  OCOSD_SysType SystemId() ;

//! Returns host name. <br>
 /*instead*/  OCTCollection_AsciiString^ HostName() ;

//! Returns available memory in Kilobytes. <br>
 /*instead*/  Standard_Integer AvailableMemory() ;

//! Returns Internet address of current host. <br>
 /*instead*/  OCTCollection_AsciiString^ InternetAddress() ;

//! Returns type of current machine. <br>
 /*instead*/  OCOSD_OEMType MachineType() ;

//! Returns TRUE if an error occurs <br>
 /*instead*/  System::Boolean Failed() ;

//! Resets error counter to zero <br>
 /*instead*/  void Reset() ;

//! Raises OSD_Error <br>
 /*instead*/  void Perror() ;

//! Returns error number if 'Failed' is TRUE. <br>
 /*instead*/  Standard_Integer Error() ;

~OCOSD_Host()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif

typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long long    GUID;
typedef pointer32 ImageBaseOffset32;

typedef long long    longlong;
typedef unsigned long long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long long    uint64_t;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    wchar16;
typedef short    wchar_t;
typedef unsigned short    word;
#define unkbyte9   unsigned long long
#define unkbyte10   unsigned long long
#define unkbyte11   unsigned long long
#define unkbyte12   unsigned long long
#define unkbyte13   unsigned long long
#define unkbyte14   unsigned long long
#define unkbyte15   unsigned long long
#define unkbyte16   unsigned long long

#define unkuint9   unsigned long long
#define unkuint10   unsigned long long
#define unkuint11   unsigned long long
#define unkuint12   unsigned long long
#define unkuint13   unsigned long long
#define unkuint14   unsigned long long
#define unkuint15   unsigned long long
#define unkuint16   unsigned long long

#define unkint9   long long
#define unkint10   long long
#define unkint11   long long
#define unkint12   long long
#define unkint13   long long
#define unkint14   long long
#define unkint15   long long
#define unkint16   long long

#define unkfloat1   float
#define unkfloat2   float
#define unkfloat3   float
#define unkfloat5   double
#define unkfloat6   double
#define unkfloat7   double
#define unkfloat9   long double
#define unkfloat11   long double
#define unkfloat12   long double
#define unkfloat13   long double
#define unkfloat14   long double
#define unkfloat15   long double
#define unkfloat16   long double

#define BADSPACEBASE   void
#define code   void

typedef struct _s__RTTIBaseClassDescriptor _s__RTTIBaseClassDescriptor, *P_s__RTTIBaseClassDescriptor;

typedef struct _s__RTTIBaseClassDescriptor RTTIBaseClassDescriptor;

typedef RTTIBaseClassDescriptor *RTTIBaseClassDescriptor *32 __((image-base-relative));

typedef RTTIBaseClassDescriptor *32 __((image-base-relative)) *RTTIBaseClassDescriptor *32 __((image-base-relative)) *32 __((image-base-relative));

typedef struct PMD PMD, *PPMD;

struct PMD {
    int mdisp;
    int pdisp;
    int vdisp;
};

struct _s__RTTIBaseClassDescriptor {
    ImageBaseOffset32 pTypeDescriptor; // ref to TypeDescriptor (RTTI 0) for class
    dword numContainedBases; // count of extended classes in BaseClassArray (RTTI 2)
    struct PMD where; // member displacement structure
    dword attributes; // bit flags
    ImageBaseOffset32 pClassHierarchyDescriptor; // ref to ClassHierarchyDescriptor (RTTI 3) for class
};

typedef struct _s_IPToStateMapEntry _s_IPToStateMapEntry, *P_s_IPToStateMapEntry;

typedef struct _s_IPToStateMapEntry IPToStateMapEntry;

typedef int __ehstate_t;

struct _s_IPToStateMapEntry {
    ImageBaseOffset32 Ip;
    __ehstate_t state;
};

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion;

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct {
    dword OffsetToDirectory:31;
    dword DataIsDirectory:1;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion {
    dword OffsetToData;
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;
};

typedef struct _s__RTTIClassHierarchyDescriptor _s__RTTIClassHierarchyDescriptor, *P_s__RTTIClassHierarchyDescriptor;

struct _s__RTTIClassHierarchyDescriptor {
    dword signature;
    dword attributes; // bit flags
    dword numBaseClasses; // number of base classes (i.e. rtti1Count)
    RTTIBaseClassDescriptor *32 __((image-base-relative)) *32 __((image-base-relative)) pBaseClassArray; // ref to BaseClassArray (RTTI 2)
};

typedef struct _s_UnwindMapEntry _s_UnwindMapEntry, *P_s_UnwindMapEntry;

struct _s_UnwindMapEntry {
    __ehstate_t toState;
    ImageBaseOffset32 action;
};

typedef struct _s__RTTICompleteObjectLocator _s__RTTICompleteObjectLocator, *P_s__RTTICompleteObjectLocator;

struct _s__RTTICompleteObjectLocator {
    dword signature;
    dword offset; // offset of vbtable within class
    dword cdOffset; // constructor displacement offset
    ImageBaseOffset32 pTypeDescriptor; // ref to TypeDescriptor (RTTI 0) for class
    ImageBaseOffset32 pClassDescriptor; // ref to ClassHierarchyDescriptor (RTTI 3)
};

typedef struct _s_UnwindMapEntry UnwindMapEntry;

typedef struct CLIENT_ID CLIENT_ID, *PCLIENT_ID;

struct CLIENT_ID {
    void *UniqueProcess;
    void *UniqueThread;
};

typedef struct _s__RTTIClassHierarchyDescriptor RTTIClassHierarchyDescriptor;

typedef struct _s_FuncInfo _s_FuncInfo, *P_s_FuncInfo;

typedef struct _s_FuncInfo FuncInfo;

struct _s_FuncInfo {
    uint magicNumber_and_bbtFlags;
    __ehstate_t maxState;
    ImageBaseOffset32 dispUnwindMap;
    uint nTryBlocks;
    ImageBaseOffset32 dispTryBlockMap;
    uint nIPMapEntries;
    ImageBaseOffset32 dispIPToStateMap;
    int dispUnwindHelp;
    ImageBaseOffset32 dispESTypeList;
    int EHFlags;
};

typedef struct _s__RTTICompleteObjectLocator RTTICompleteObjectLocator;

typedef uint64_t __uint64;

typedef struct _cpinfo _cpinfo, *P_cpinfo;

typedef uint UINT;

typedef uchar BYTE;

struct _cpinfo {
    UINT MaxCharSize;
    BYTE DefaultChar[2];
    BYTE LeadByte[12];
};

typedef struct _cpinfo *LPCPINFO;

typedef struct _nlsversioninfo _nlsversioninfo, *P_nlsversioninfo;

typedef struct _nlsversioninfo *LPNLSVERSIONINFO;

typedef ulong DWORD;

struct _nlsversioninfo {
    DWORD dwNLSVersionInfoSize;
    DWORD dwNLSVersion;
    DWORD dwDefinedVersion;
};

typedef DWORD LCTYPE;

typedef struct _TIME_ZONE_INFORMATION _TIME_ZONE_INFORMATION, *P_TIME_ZONE_INFORMATION;

typedef struct _TIME_ZONE_INFORMATION TIME_ZONE_INFORMATION;

typedef long LONG;

typedef wchar_t WCHAR;

typedef struct _SYSTEMTIME _SYSTEMTIME, *P_SYSTEMTIME;

typedef struct _SYSTEMTIME SYSTEMTIME;

typedef ushort WORD;

struct _TIME_ZONE_INFORMATION {
    LONG Bias;
    WCHAR StandardName[32];
    SYSTEMTIME StandardDate;
    LONG StandardBias;
    WCHAR DaylightName[32];
    SYSTEMTIME DaylightDate;
    LONG DaylightBias;
};

struct _SYSTEMTIME {
    WORD wYear;
    WORD wMonth;
    WORD wDayOfWeek;
    WORD wDay;
    WORD wHour;
    WORD wMinute;
    WORD wSecond;
    WORD wMilliseconds;
};

typedef struct _OVERLAPPED _OVERLAPPED, *P_OVERLAPPED;

typedef ulonglong ULONG_PTR;

typedef union _union_540 _union_540, *P_union_540;

typedef void *HANDLE;

typedef struct _struct_541 _struct_541, *P_struct_541;

typedef void *PVOID;

struct _struct_541 {
    DWORD Offset;
    DWORD OffsetHigh;
};

union _union_540 {
    struct _struct_541 s;
    PVOID Pointer;
};

struct _OVERLAPPED {
    ULONG_PTR Internal;
    ULONG_PTR InternalHigh;
    union _union_540 u;
    HANDLE hEvent;
};

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

typedef void *LPVOID;

typedef int BOOL;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
};

typedef enum _FINDEX_INFO_LEVELS {
    FindExInfoStandard=0,
    FindExInfoBasic=1,
    FindExInfoMaxInfoLevel=2
} _FINDEX_INFO_LEVELS;

typedef struct _STARTUPINFOW _STARTUPINFOW, *P_STARTUPINFOW;

typedef WCHAR *LPWSTR;

typedef BYTE *LPBYTE;

struct _STARTUPINFOW {
    DWORD cb;
    LPWSTR lpReserved;
    LPWSTR lpDesktop;
    LPWSTR lpTitle;
    DWORD dwX;
    DWORD dwY;
    DWORD dwXSize;
    DWORD dwYSize;
    DWORD dwXCountChars;
    DWORD dwYCountChars;
    DWORD dwFillAttribute;
    DWORD dwFlags;
    WORD wShowWindow;
    WORD cbReserved2;
    LPBYTE lpReserved2;
    HANDLE hStdInput;
    HANDLE hStdOutput;
    HANDLE hStdError;
};

typedef struct _STARTUPINFOW *LPSTARTUPINFOW;

typedef struct _WIN32_FIND_DATAW _WIN32_FIND_DATAW, *P_WIN32_FIND_DATAW;

typedef struct _WIN32_FIND_DATAW *LPWIN32_FIND_DATAW;

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME FILETIME;

struct _WIN32_FIND_DATAW {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    DWORD dwReserved0;
    DWORD dwReserved1;
    WCHAR cFileName[260];
    WCHAR cAlternateFileName[14];
};

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef enum _FILE_INFO_BY_HANDLE_CLASS {
    FileBasicInfo=0,
    FileStandardInfo=1,
    FileNameInfo=2,
    FileRenameInfo=3,
    FileDispositionInfo=4,
    FileAllocationInfo=5,
    FileEndOfFileInfo=6,
    FileStreamInfo=7,
    FileCompressionInfo=8,
    FileAttributeTagInfo=9,
    FileIdBothDirectoryInfo=10,
    FileIdBothDirectoryRestartInfo=11,
    FileIoPriorityHintInfo=12,
    FileRemoteProtocolInfo=13,
    MaximumFileInfoByHandleClass=14
} _FILE_INFO_BY_HANDLE_CLASS;

typedef enum _FILE_INFO_BY_HANDLE_CLASS FILE_INFO_BY_HANDLE_CLASS;

typedef DWORD (*PTHREAD_START_ROUTINE)(LPVOID);

typedef PTHREAD_START_ROUTINE LPTHREAD_START_ROUTINE;

typedef struct _OVERLAPPED *LPOVERLAPPED;

typedef enum _FINDEX_SEARCH_OPS {
    FindExSearchNameMatch=0,
    FindExSearchLimitToDirectories=1,
    FindExSearchLimitToDevices=2,
    FindExSearchMaxSearchOp=3
} _FINDEX_SEARCH_OPS;

typedef enum _FINDEX_SEARCH_OPS FINDEX_SEARCH_OPS;

typedef struct _SECURITY_ATTRIBUTES *LPSECURITY_ATTRIBUTES;

typedef struct _PROCESS_INFORMATION _PROCESS_INFORMATION, *P_PROCESS_INFORMATION;

struct _PROCESS_INFORMATION {
    HANDLE hProcess;
    HANDLE hThread;
    DWORD dwProcessId;
    DWORD dwThreadId;
};

typedef enum _FINDEX_INFO_LEVELS FINDEX_INFO_LEVELS;

typedef enum _GET_FILEEX_INFO_LEVELS {
    GetFileExInfoStandard=0,
    GetFileExMaxInfoLevel=1
} _GET_FILEEX_INFO_LEVELS;

typedef struct _RTL_CONDITION_VARIABLE _RTL_CONDITION_VARIABLE, *P_RTL_CONDITION_VARIABLE;

typedef struct _RTL_CONDITION_VARIABLE RTL_CONDITION_VARIABLE;

typedef RTL_CONDITION_VARIABLE *PCONDITION_VARIABLE;

struct _RTL_CONDITION_VARIABLE {
    PVOID Ptr;
};

typedef struct _RTL_SRWLOCK _RTL_SRWLOCK, *P_RTL_SRWLOCK;

typedef struct _RTL_SRWLOCK RTL_SRWLOCK;

typedef RTL_SRWLOCK *PSRWLOCK;

struct _RTL_SRWLOCK {
    PVOID Ptr;
};

typedef enum _GET_FILEEX_INFO_LEVELS GET_FILEEX_INFO_LEVELS;

typedef struct _PROCESS_INFORMATION *LPPROCESS_INFORMATION;

typedef struct _RTL_CRITICAL_SECTION _RTL_CRITICAL_SECTION, *P_RTL_CRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION *PRTL_CRITICAL_SECTION;

typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION_DEBUG _RTL_CRITICAL_SECTION_DEBUG, *P_RTL_CRITICAL_SECTION_DEBUG;

typedef struct _RTL_CRITICAL_SECTION_DEBUG *PRTL_CRITICAL_SECTION_DEBUG;

typedef struct _LIST_ENTRY _LIST_ENTRY, *P_LIST_ENTRY;

typedef struct _LIST_ENTRY LIST_ENTRY;

struct _RTL_CRITICAL_SECTION {
    PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
    LONG LockCount;
    LONG RecursionCount;
    HANDLE OwningThread;
    HANDLE LockSemaphore;
    ULONG_PTR SpinCount;
};

struct _RTL_CRITICAL_SECTION_DEBUG {
    WORD Type;
    WORD CreatorBackTraceIndex;
    struct _RTL_CRITICAL_SECTION *CriticalSection;
    LIST_ENTRY ProcessLocksList;
    DWORD EntryCount;
    DWORD ContentionCount;
    DWORD Flags;
    WORD CreatorBackTraceIndexHigh;
    WORD SpareWORD;
};

struct _LIST_ENTRY {
    struct _LIST_ENTRY *Flink;
    struct _LIST_ENTRY *Blink;
};

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

typedef LONG (*PTOP_LEVEL_EXCEPTION_FILTER)(struct _EXCEPTION_POINTERS *);

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD *PEXCEPTION_RECORD;

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _CONTEXT *PCONTEXT;

typedef ulonglong DWORD64;

typedef union _union_54 _union_54, *P_union_54;

typedef struct _M128A _M128A, *P_M128A;

typedef struct _M128A M128A;

typedef struct _XSAVE_FORMAT _XSAVE_FORMAT, *P_XSAVE_FORMAT;

typedef struct _XSAVE_FORMAT XSAVE_FORMAT;

typedef XSAVE_FORMAT XMM_SAVE_AREA32;

typedef struct _struct_55 _struct_55, *P_struct_55;

typedef ulonglong ULONGLONG;

typedef longlong LONGLONG;

struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
};

struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    struct _EXCEPTION_RECORD *ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR ExceptionInformation[15];
};

struct _struct_55 {
    M128A Header[2];
    M128A Legacy[8];
    M128A Xmm0;
    M128A Xmm1;
    M128A Xmm2;
    M128A Xmm3;
    M128A Xmm4;
    M128A Xmm5;
    M128A Xmm6;
    M128A Xmm7;
    M128A Xmm8;
    M128A Xmm9;
    M128A Xmm10;
    M128A Xmm11;
    M128A Xmm12;
    M128A Xmm13;
    M128A Xmm14;
    M128A Xmm15;
};

struct _M128A {
    ULONGLONG Low;
    LONGLONG High;
};

struct _XSAVE_FORMAT {
    WORD ControlWord;
    WORD StatusWord;
    BYTE TagWord;
    BYTE Reserved1;
    WORD ErrorOpcode;
    DWORD ErrorOffset;
    WORD ErrorSelector;
    WORD Reserved2;
    DWORD DataOffset;
    WORD DataSelector;
    WORD Reserved3;
    DWORD MxCsr;
    DWORD MxCsr_Mask;
    M128A FloatRegisters[8];
    M128A XmmRegisters[16];
    BYTE Reserved4[96];
};

union _union_54 {
    XMM_SAVE_AREA32 FltSave;
    struct _struct_55 s;
};

struct _CONTEXT {
    DWORD64 P1Home;
    DWORD64 P2Home;
    DWORD64 P3Home;
    DWORD64 P4Home;
    DWORD64 P5Home;
    DWORD64 P6Home;
    DWORD ContextFlags;
    DWORD MxCsr;
    WORD SegCs;
    WORD SegDs;
    WORD SegEs;
    WORD SegFs;
    WORD SegGs;
    WORD SegSs;
    DWORD EFlags;
    DWORD64 Dr0;
    DWORD64 Dr1;
    DWORD64 Dr2;
    DWORD64 Dr3;
    DWORD64 Dr6;
    DWORD64 Dr7;
    DWORD64 Rax;
    DWORD64 Rcx;
    DWORD64 Rdx;
    DWORD64 Rbx;
    DWORD64 Rsp;
    DWORD64 Rbp;
    DWORD64 Rsi;
    DWORD64 Rdi;
    DWORD64 R8;
    DWORD64 R9;
    DWORD64 R10;
    DWORD64 R11;
    DWORD64 R12;
    DWORD64 R13;
    DWORD64 R14;
    DWORD64 R15;
    DWORD64 Rip;
    union _union_54 u;
    M128A VectorRegister[26];
    DWORD64 VectorControl;
    DWORD64 DebugControl;
    DWORD64 LastBranchToRip;
    DWORD64 LastBranchFromRip;
    DWORD64 LastExceptionToRip;
    DWORD64 LastExceptionFromRip;
};

typedef void (*PTIMERAPCROUTINE)(LPVOID, DWORD, DWORD);

typedef struct _SYSTEMTIME *LPSYSTEMTIME;

typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;

typedef struct tagFUNCDESC tagFUNCDESC, *PtagFUNCDESC;

typedef LONG DISPID;

typedef DISPID MEMBERID;

typedef LONG SCODE;

typedef struct tagELEMDESC tagELEMDESC, *PtagELEMDESC;

typedef struct tagELEMDESC ELEMDESC;

typedef enum tagFUNCKIND {
    FUNC_VIRTUAL=0,
    FUNC_PUREVIRTUAL=1,
    FUNC_NONVIRTUAL=2,
    FUNC_STATIC=3,
    FUNC_DISPATCH=4
} tagFUNCKIND;

typedef enum tagFUNCKIND FUNCKIND;

typedef enum tagINVOKEKIND {
    INVOKE_FUNC=1,
    INVOKE_PROPERTYGET=2,
    INVOKE_PROPERTYPUT=4,
    INVOKE_PROPERTYPUTREF=8
} tagINVOKEKIND;

typedef enum tagINVOKEKIND INVOKEKIND;

typedef enum tagCALLCONV {
    CC_FASTCALL=0,
    CC_CDECL=1,
    CC_MSCPASCAL=2,
    CC_PASCAL=3,
    CC_MACPASCAL=4,
    CC_STDCALL=5,
    CC_FPFASTCALL=6,
    CC_SYSCALL=7,
    CC_MPWCDECL=8,
    CC_MPWPASCAL=9,
    CC_MAX=10
} tagCALLCONV;

typedef enum tagCALLCONV CALLCONV;

typedef short SHORT;

typedef struct tagTYPEDESC tagTYPEDESC, *PtagTYPEDESC;

typedef struct tagTYPEDESC TYPEDESC;

typedef union _union_2726 _union_2726, *P_union_2726;

typedef union _union_2715 _union_2715, *P_union_2715;

typedef ushort VARTYPE;

typedef struct tagIDLDESC tagIDLDESC, *PtagIDLDESC;

typedef struct tagIDLDESC IDLDESC;

typedef struct tagPARAMDESC tagPARAMDESC, *PtagPARAMDESC;

typedef struct tagPARAMDESC PARAMDESC;

typedef struct tagARRAYDESC tagARRAYDESC, *PtagARRAYDESC;

typedef DWORD HREFTYPE;

typedef ushort USHORT;

typedef struct tagPARAMDESCEX tagPARAMDESCEX, *PtagPARAMDESCEX;

typedef struct tagPARAMDESCEX *LPPARAMDESCEX;

typedef struct tagSAFEARRAYBOUND tagSAFEARRAYBOUND, *PtagSAFEARRAYBOUND;

typedef struct tagSAFEARRAYBOUND SAFEARRAYBOUND;

typedef DWORD ULONG;

typedef struct tagVARIANT tagVARIANT, *PtagVARIANT;

typedef struct tagVARIANT VARIANT;

typedef VARIANT VARIANTARG;

typedef union _union_2707 _union_2707, *P_union_2707;

typedef struct __tagVARIANT __tagVARIANT, *P__tagVARIANT;

typedef struct tagDEC tagDEC, *PtagDEC;

typedef struct tagDEC DECIMAL;

typedef union _union_2709 _union_2709, *P_union_2709;

typedef union _union_1717 _union_1717, *P_union_1717;

typedef union _union_1719 _union_1719, *P_union_1719;

typedef float FLOAT;

typedef double DOUBLE;

typedef short VARIANT_BOOL;

typedef union tagCY tagCY, *PtagCY;

typedef union tagCY CY;

typedef double DATE;

typedef WCHAR OLECHAR;

typedef OLECHAR *BSTR;

typedef struct IUnknown IUnknown, *PIUnknown;

typedef struct IDispatch IDispatch, *PIDispatch;

typedef struct tagSAFEARRAY tagSAFEARRAY, *PtagSAFEARRAY;

typedef struct tagSAFEARRAY SAFEARRAY;

typedef char CHAR;

typedef int INT;

typedef struct __tagBRECORD __tagBRECORD, *P__tagBRECORD;

typedef struct _struct_1718 _struct_1718, *P_struct_1718;

typedef struct _struct_1720 _struct_1720, *P_struct_1720;

typedef struct _struct_1715 _struct_1715, *P_struct_1715;

typedef struct IUnknownVtbl IUnknownVtbl, *PIUnknownVtbl;

typedef struct IDispatchVtbl IDispatchVtbl, *PIDispatchVtbl;

typedef struct IRecordInfo IRecordInfo, *PIRecordInfo;

typedef struct IRecordInfoVtbl IRecordInfoVtbl, *PIRecordInfoVtbl;

struct tagFUNCDESC {
    MEMBERID memid;
    SCODE *lprgscode;
    ELEMDESC *lprgelemdescParam;
    FUNCKIND funckind;
    INVOKEKIND invkind;
    CALLCONV callconv;
    SHORT cParams;
    SHORT cParamsOpt;
    SHORT oVft;
    SHORT cScodes;
    ELEMDESC elemdescFunc;
    WORD wFuncFlags;
};

union _union_2726 {
    IDLDESC idldesc;
    PARAMDESC paramdesc;
};

union _union_2715 {
    struct tagTYPEDESC *lptdesc;
    struct tagARRAYDESC *lpadesc;
    HREFTYPE hreftype;
};

struct tagIDLDESC {
    ULONG_PTR dwReserved;
    USHORT wIDLFlags;
};

struct tagPARAMDESC {
    LPPARAMDESCEX pparamdescex;
    USHORT wParamFlags;
};

struct tagARRAYDESC {
    TYPEDESC tdescElem;
    USHORT cDims;
    SAFEARRAYBOUND rgbounds[1];
};

struct tagPARAMDESCEX {
    ULONG cBytes;
    VARIANTARG varDefaultValue;
};

struct tagSAFEARRAYBOUND {
    ULONG cElements;
    LONG lLbound;
};

struct __tagBRECORD {
    PVOID pvRecord;
    struct IRecordInfo *pRecInfo;
};

struct _struct_1718 {
    BYTE scale;
    BYTE sign;
};

struct _struct_1720 {
    ULONG Lo32;
    ULONG Mid32;
};

struct _struct_1715 {
    ulong Lo;
    long Hi;
};

struct IUnknown {
    struct IUnknownVtbl *lpVtbl;
};

struct IDispatch {
    struct IDispatchVtbl *lpVtbl;
};

struct tagSAFEARRAY {
    USHORT cDims;
    USHORT fFeatures;
    ULONG cbElements;
    ULONG cLocks;
    PVOID pvData;
    SAFEARRAYBOUND rgsabound[1];
};

struct IUnknownVtbl {
    HRESULT (*QueryInterface)(struct IUnknown *, IID *, void **);
    ULONG (*AddRef)(struct IUnknown *);
    ULONG (*Release)(struct IUnknown *);
};

struct IDispatchVtbl {
    HRESULT (*QueryInterface)(struct IDispatch *, IID *, void **);
    ULONG (*AddRef)(struct IDispatch *);
    ULONG (*Release)(struct IDispatch *);
    HRESULT (*GetTypeInfoCount)(struct IDispatch *, UINT *);
    HRESULT (*GetTypeInfo)(struct IDispatch *, UINT, LCID, struct ITypeInfo **);
    HRESULT (*GetIDsOfNames)(struct IDispatch *, IID *, LPOLESTR *, UINT, LCID, DISPID *);
    HRESULT (*Invoke)(struct IDispatch *, DISPID, IID *, LCID, WORD, DISPPARAMS *, VARIANT *, EXCEPINFO *, UINT *);
};

struct IRecordInfo {
    struct IRecordInfoVtbl *lpVtbl;
};

struct IRecordInfoVtbl {
    HRESULT (*QueryInterface)(struct IRecordInfo *, IID *, void **);
    ULONG (*AddRef)(struct IRecordInfo *);
    ULONG (*Release)(struct IRecordInfo *);
    HRESULT (*RecordInit)(struct IRecordInfo *, PVOID);
    HRESULT (*RecordClear)(struct IRecordInfo *, PVOID);
    HRESULT (*RecordCopy)(struct IRecordInfo *, PVOID, PVOID);
    HRESULT (*GetGuid)(struct IRecordInfo *, GUID *);
    HRESULT (*GetName)(struct IRecordInfo *, BSTR *);
    HRESULT (*GetSize)(struct IRecordInfo *, ULONG *);
    HRESULT (*GetTypeInfo)(struct IRecordInfo *, struct ITypeInfo **);
    HRESULT (*GetField)(struct IRecordInfo *, PVOID, LPCOLESTR, VARIANT *);
    HRESULT (*GetFieldNoCopy)(struct IRecordInfo *, PVOID, LPCOLESTR, VARIANT *, PVOID *);
    HRESULT (*PutField)(struct IRecordInfo *, ULONG, PVOID, LPCOLESTR, VARIANT *);
    HRESULT (*PutFieldNoCopy)(struct IRecordInfo *, ULONG, PVOID, LPCOLESTR, VARIANT *);
    HRESULT (*GetFieldNames)(struct IRecordInfo *, ULONG *, BSTR *);
    BOOL (*IsMatchingType)(struct IRecordInfo *, struct IRecordInfo *);
    PVOID (*RecordCreate)(struct IRecordInfo *);
    HRESULT (*RecordCreateCopy)(struct IRecordInfo *, PVOID, PVOID *);
    HRESULT (*RecordDestroy)(struct IRecordInfo *, PVOID);
};

struct tagELEMDESC {
    TYPEDESC tdesc;
    union _union_2726 u;
};

struct tagTYPEDESC {
    union _union_2715 u;
    VARTYPE vt;
};

union _union_2709 {
    LONGLONG llVal;
    LONG lVal;
    BYTE bVal;
    SHORT iVal;
    FLOAT fltVal;
    DOUBLE dblVal;
    VARIANT_BOOL boolVal;
    SCODE scode;
    CY cyVal;
    DATE date;
    BSTR bstrVal;
    struct IUnknown *punkVal;
    struct IDispatch *pdispVal;
    SAFEARRAY *parray;
    BYTE *pbVal;
    SHORT *piVal;
    LONG *plVal;
    LONGLONG *pllVal;
    FLOAT *pfltVal;
    DOUBLE *pdblVal;
    VARIANT_BOOL *pboolVal;
    SCODE *pscode;
    CY *pcyVal;
    DATE *pdate;
    BSTR *pbstrVal;
    struct IUnknown **ppunkVal;
    struct IDispatch **ppdispVal;
    SAFEARRAY **pparray;
    VARIANT *pvarVal;
    PVOID byref;
    CHAR cVal;
    USHORT uiVal;
    ULONG ulVal;
    ULONGLONG ullVal;
    INT intVal;
    UINT uintVal;
    DECIMAL *pdecVal;
    CHAR *pcVal;
    USHORT *puiVal;
    ULONG *pulVal;
    ULONGLONG *pullVal;
    INT *pintVal;
    UINT *puintVal;
    struct __tagBRECORD brecVal;
};

union _union_1717 {
    struct _struct_1718 s;
    USHORT signscale;
};

union _union_1719 {
    struct _struct_1720 s2;
    ULONGLONG Lo64;
};

union tagCY {
    struct _struct_1715 s;
    LONGLONG int64;
};

struct __tagVARIANT {
    VARTYPE vt;
    WORD wReserved1;
    WORD wReserved2;
    WORD wReserved3;
    union _union_2709 n3;
};

struct tagDEC {
    USHORT wReserved;
    union _union_1717 u;
    ULONG Hi32;
    union _union_1719 u2;
};

union _union_2707 {
    struct __tagVARIANT n2;
    DECIMAL decVal;
};

struct tagVARIANT {
    union _union_2707 n1;
};

typedef struct tagVARDESC tagVARDESC, *PtagVARDESC;

typedef struct tagVARDESC VARDESC;

typedef OLECHAR *LPOLESTR;

typedef union _union_2735 _union_2735, *P_union_2735;

typedef enum tagVARKIND {
    VAR_PERINSTANCE=0,
    VAR_STATIC=1,
    VAR_CONST=2,
    VAR_DISPATCH=3
} tagVARKIND;

typedef enum tagVARKIND VARKIND;

union _union_2735 {
    ULONG oInst;
    VARIANT *lpvarValue;
};

struct tagVARDESC {
    MEMBERID memid;
    LPOLESTR lpstrSchema;
    union _union_2735 u;
    ELEMDESC elemdescVar;
    WORD wVarFlags;
    VARKIND varkind;
};

typedef struct ITypeCompVtbl ITypeCompVtbl, *PITypeCompVtbl;

struct ITypeCompVtbl {
    HRESULT (*QueryInterface)(struct ITypeComp *, IID *, void **);
    ULONG (*AddRef)(struct ITypeComp *);
    ULONG (*Release)(struct ITypeComp *);
    HRESULT (*Bind)(struct ITypeComp *, LPOLESTR, ULONG, WORD, struct ITypeInfo **, DESCKIND *, BINDPTR *);
    HRESULT (*BindType)(struct ITypeComp *, LPOLESTR, ULONG, struct ITypeInfo **, struct ITypeComp **);
};

typedef struct ITypeInfoVtbl ITypeInfoVtbl, *PITypeInfoVtbl;

struct ITypeInfoVtbl {
    HRESULT (*QueryInterface)(struct ITypeInfo *, IID *, void **);
    ULONG (*AddRef)(struct ITypeInfo *);
    ULONG (*Release)(struct ITypeInfo *);
    HRESULT (*GetTypeAttr)(struct ITypeInfo *, TYPEATTR **);
    HRESULT (*GetTypeComp)(struct ITypeInfo *, struct ITypeComp **);
    HRESULT (*GetFuncDesc)(struct ITypeInfo *, UINT, FUNCDESC **);
    HRESULT (*GetVarDesc)(struct ITypeInfo *, UINT, VARDESC **);
    HRESULT (*GetNames)(struct ITypeInfo *, MEMBERID, BSTR *, UINT, UINT *);
    HRESULT (*GetRefTypeOfImplType)(struct ITypeInfo *, UINT, HREFTYPE *);
    HRESULT (*GetImplTypeFlags)(struct ITypeInfo *, UINT, INT *);
    HRESULT (*GetIDsOfNames)(struct ITypeInfo *, LPOLESTR *, UINT, MEMBERID *);
    HRESULT (*Invoke)(struct ITypeInfo *, PVOID, MEMBERID, WORD, DISPPARAMS *, VARIANT *, EXCEPINFO *, UINT *);
    HRESULT (*GetDocumentation)(struct ITypeInfo *, MEMBERID, BSTR *, BSTR *, DWORD *, BSTR *);
    HRESULT (*GetDllEntry)(struct ITypeInfo *, MEMBERID, INVOKEKIND, BSTR *, BSTR *, WORD *);
    HRESULT (*GetRefTypeInfo)(struct ITypeInfo *, HREFTYPE, struct ITypeInfo **);
    HRESULT (*AddressOfMember)(struct ITypeInfo *, MEMBERID, INVOKEKIND, PVOID *);
    HRESULT (*CreateInstance)(struct ITypeInfo *, struct IUnknown *, IID *, PVOID *);
    HRESULT (*GetMops)(struct ITypeInfo *, MEMBERID, BSTR *);
    HRESULT (*GetContainingTypeLib)(struct ITypeInfo *, struct ITypeLib **, UINT *);
    void (*ReleaseTypeAttr)(struct ITypeInfo *, TYPEATTR *);
    void (*ReleaseFuncDesc)(struct ITypeInfo *, FUNCDESC *);
    void (*ReleaseVarDesc)(struct ITypeInfo *, VARDESC *);
};

typedef struct tagTLIBATTR tagTLIBATTR, *PtagTLIBATTR;


// WARNING! conflicting data type names: /guiddef.h/GUID - /GUID

typedef DWORD LCID;

typedef enum tagSYSKIND {
    SYS_WIN16=0,
    SYS_WIN32=1,
    SYS_MAC=2,
    SYS_WIN64=3
} tagSYSKIND;

typedef enum tagSYSKIND SYSKIND;

struct tagTLIBATTR {
    GUID guid;
    LCID lcid;
    SYSKIND syskind;
    WORD wMajorVerNum;
    WORD wMinorVerNum;
    WORD wLibFlags;
};

typedef struct tagTLIBATTR TLIBATTR;

typedef struct IErrorInfo IErrorInfo, *PIErrorInfo;

typedef struct IErrorInfoVtbl IErrorInfoVtbl, *PIErrorInfoVtbl;

struct IErrorInfo {
    struct IErrorInfoVtbl *lpVtbl;
};

struct IErrorInfoVtbl {
    HRESULT (*QueryInterface)(struct IErrorInfo *, IID *, void **);
    ULONG (*AddRef)(struct IErrorInfo *);
    ULONG (*Release)(struct IErrorInfo *);
    HRESULT (*GetGUID)(struct IErrorInfo *, GUID *);
    HRESULT (*GetSource)(struct IErrorInfo *, BSTR *);
    HRESULT (*GetDescription)(struct IErrorInfo *, BSTR *);
    HRESULT (*GetHelpFile)(struct IErrorInfo *, BSTR *);
    HRESULT (*GetHelpContext)(struct IErrorInfo *, DWORD *);
};

typedef struct tagDISPPARAMS tagDISPPARAMS, *PtagDISPPARAMS;

struct tagDISPPARAMS {
    VARIANTARG *rgvarg;
    DISPID *rgdispidNamedArgs;
    UINT cArgs;
    UINT cNamedArgs;
};

typedef union tagBINDPTR tagBINDPTR, *PtagBINDPTR;

typedef union tagBINDPTR BINDPTR;

typedef struct tagFUNCDESC FUNCDESC;

typedef struct ITypeComp ITypeComp, *PITypeComp;

union tagBINDPTR {
    FUNCDESC *lpfuncdesc;
    VARDESC *lpvardesc;
    struct ITypeComp *lptcomp;
};

struct ITypeComp {
    struct ITypeCompVtbl *lpVtbl;
};

typedef enum tagTYPEKIND {
    TKIND_ENUM=0,
    TKIND_RECORD=1,
    TKIND_MODULE=2,
    TKIND_INTERFACE=3,
    TKIND_DISPATCH=4,
    TKIND_COCLASS=5,
    TKIND_ALIAS=6,
    TKIND_UNION=7,
    TKIND_MAX=8
} tagTYPEKIND;

typedef enum tagTYPEKIND TYPEKIND;

typedef enum tagDESCKIND {
    DESCKIND_NONE=0,
    DESCKIND_FUNCDESC=1,
    DESCKIND_VARDESC=2,
    DESCKIND_TYPECOMP=3,
    DESCKIND_IMPLICITAPPOBJ=4,
    DESCKIND_MAX=5
} tagDESCKIND;

typedef enum tagDESCKIND DESCKIND;

typedef struct ITypeLibVtbl ITypeLibVtbl, *PITypeLibVtbl;

struct ITypeLibVtbl {
    HRESULT (*QueryInterface)(struct ITypeLib *, IID *, void **);
    ULONG (*AddRef)(struct ITypeLib *);
    ULONG (*Release)(struct ITypeLib *);
    UINT (*GetTypeInfoCount)(struct ITypeLib *);
    HRESULT (*GetTypeInfo)(struct ITypeLib *, UINT, struct ITypeInfo **);
    HRESULT (*GetTypeInfoType)(struct ITypeLib *, UINT, TYPEKIND *);
    HRESULT (*GetTypeInfoOfGuid)(struct ITypeLib *, GUID *, struct ITypeInfo **);
    HRESULT (*GetLibAttr)(struct ITypeLib *, TLIBATTR **);
    HRESULT (*GetTypeComp)(struct ITypeLib *, struct ITypeComp **);
    HRESULT (*GetDocumentation)(struct ITypeLib *, INT, BSTR *, BSTR *, DWORD *, BSTR *);
    HRESULT (*IsName)(struct ITypeLib *, LPOLESTR, ULONG, BOOL *);
    HRESULT (*FindName)(struct ITypeLib *, LPOLESTR, ULONG, struct ITypeInfo **, MEMBERID *, USHORT *);
    void (*ReleaseTLibAttr)(struct ITypeLib *, TLIBATTR *);
};

typedef struct tagTYPEATTR tagTYPEATTR, *PtagTYPEATTR;

typedef struct tagTYPEATTR TYPEATTR;

struct tagTYPEATTR {
    GUID guid;
    LCID lcid;
    DWORD dwReserved;
    MEMBERID memidConstructor;
    MEMBERID memidDestructor;
    LPOLESTR lpstrSchema;
    ULONG cbSizeInstance;
    TYPEKIND typekind;
    WORD cFuncs;
    WORD cVars;
    WORD cImplTypes;
    WORD cbSizeVft;
    WORD cbAlignment;
    WORD wTypeFlags;
    WORD wMajorVerNum;
    WORD wMinorVerNum;
    TYPEDESC tdescAlias;
    IDLDESC idldescType;
};

typedef struct ITypeInfo ITypeInfo, *PITypeInfo;

struct ITypeInfo {
    struct ITypeInfoVtbl *lpVtbl;
};

typedef struct tagEXCEPINFO tagEXCEPINFO, *PtagEXCEPINFO;

struct tagEXCEPINFO {
    WORD wCode;
    WORD wReserved;
    BSTR bstrSource;
    BSTR bstrDescription;
    BSTR bstrHelpFile;
    DWORD dwHelpContext;
    PVOID pvReserved;
    HRESULT (*pfnDeferredFillIn)(struct tagEXCEPINFO *);
    SCODE scode;
};

typedef struct tagDISPPARAMS DISPPARAMS;

typedef struct tagEXCEPINFO EXCEPINFO;

typedef struct ITypeLib ITypeLib, *PITypeLib;

struct ITypeLib {
    struct ITypeLibVtbl *lpVtbl;
};

typedef enum _EXCEPTION_DISPOSITION {
    ExceptionContinueExecution=0,
    ExceptionContinueSearch=1,
    ExceptionNestedException=2,
    ExceptionCollidedUnwind=3
} _EXCEPTION_DISPOSITION;

typedef enum _EXCEPTION_DISPOSITION EXCEPTION_DISPOSITION;

typedef OLECHAR *LPCOLESTR;

typedef struct DotNetPdbInfo DotNetPdbInfo, *PDotNetPdbInfo;

struct DotNetPdbInfo {
    char signature[4];
    GUID guid;
    dword age;
    char pdbpath[63];
};

typedef struct IMFAsyncResultVtbl IMFAsyncResultVtbl, *PIMFAsyncResultVtbl;

struct IMFAsyncResultVtbl {
    HRESULT (*QueryInterface)(struct IMFAsyncResult *, IID *, void **);
    ULONG (*AddRef)(struct IMFAsyncResult *);
    ULONG (*Release)(struct IMFAsyncResult *);
    HRESULT (*GetState)(struct IMFAsyncResult *, struct IUnknown **);
    HRESULT (*GetStatus)(struct IMFAsyncResult *);
    HRESULT (*SetStatus)(struct IMFAsyncResult *, HRESULT);
    HRESULT (*GetObjectA)(struct IMFAsyncResult *, struct IUnknown **);
    IUnknown * (*GetStateNoAddRef)(struct IMFAsyncResult *);
};

typedef struct IMFMediaBuffer IMFMediaBuffer, *PIMFMediaBuffer;

typedef struct IMFMediaBufferVtbl IMFMediaBufferVtbl, *PIMFMediaBufferVtbl;

struct IMFMediaBuffer {
    struct IMFMediaBufferVtbl *lpVtbl;
};

struct IMFMediaBufferVtbl {
    HRESULT (*QueryInterface)(struct IMFMediaBuffer *, IID *, void **);
    ULONG (*AddRef)(struct IMFMediaBuffer *);
    ULONG (*Release)(struct IMFMediaBuffer *);
    HRESULT (*Lock)(struct IMFMediaBuffer *, BYTE **, DWORD *, DWORD *);
    HRESULT (*Unlock)(struct IMFMediaBuffer *);
    HRESULT (*GetCurrentLength)(struct IMFMediaBuffer *, DWORD *);
    HRESULT (*SetCurrentLength)(struct IMFMediaBuffer *, DWORD);
    HRESULT (*GetMaxLength)(struct IMFMediaBuffer *, DWORD *);
};

typedef struct IMFMediaTypeVtbl IMFMediaTypeVtbl, *PIMFMediaTypeVtbl;

struct IMFMediaTypeVtbl {
    HRESULT (*QueryInterface)(struct IMFMediaType *, IID *, void **);
    ULONG (*AddRef)(struct IMFMediaType *);
    ULONG (*Release)(struct IMFMediaType *);
    HRESULT (*GetItem)(struct IMFMediaType *, GUID *, PROPVARIANT *);
    HRESULT (*GetItemType)(struct IMFMediaType *, GUID *, MF_ATTRIBUTE_TYPE *);
    HRESULT (*CompareItem)(struct IMFMediaType *, GUID *, PROPVARIANT *, BOOL *);
    HRESULT (*Compare)(struct IMFMediaType *, struct IMFAttributes *, MF_ATTRIBUTES_MATCH_TYPE, BOOL *);
    HRESULT (*GetUINT32)(struct IMFMediaType *, GUID *, UINT32 *);
    HRESULT (*GetUINT64)(struct IMFMediaType *, GUID *, UINT64 *);
    HRESULT (*GetDouble)(struct IMFMediaType *, GUID *, double *);
    HRESULT (*GetGUID)(struct IMFMediaType *, GUID *, GUID *);
    HRESULT (*GetStringLength)(struct IMFMediaType *, GUID *, UINT32 *);
    HRESULT (*GetString)(struct IMFMediaType *, GUID *, LPWSTR, UINT32, UINT32 *);
    HRESULT (*GetAllocatedString)(struct IMFMediaType *, GUID *, LPWSTR *, UINT32 *);
    HRESULT (*GetBlobSize)(struct IMFMediaType *, GUID *, UINT32 *);
    HRESULT (*GetBlob)(struct IMFMediaType *, GUID *, UINT8 *, UINT32, UINT32 *);
    HRESULT (*GetAllocatedBlob)(struct IMFMediaType *, GUID *, UINT8 **, UINT32 *);
    HRESULT (*GetUnknown)(struct IMFMediaType *, GUID *, IID *, LPVOID *);
    HRESULT (*SetItem)(struct IMFMediaType *, GUID *, PROPVARIANT *);
    HRESULT (*DeleteItem)(struct IMFMediaType *, GUID *);
    HRESULT (*DeleteAllItems)(struct IMFMediaType *);
    HRESULT (*SetUINT32)(struct IMFMediaType *, GUID *, UINT32);
    HRESULT (*SetUINT64)(struct IMFMediaType *, GUID *, UINT64);
    HRESULT (*SetDouble)(struct IMFMediaType *, GUID *, double);
    HRESULT (*SetGUID)(struct IMFMediaType *, GUID *, GUID *);
    HRESULT (*SetString)(struct IMFMediaType *, GUID *, LPCWSTR);
    HRESULT (*SetBlob)(struct IMFMediaType *, GUID *, UINT8 *, UINT32);
    HRESULT (*SetUnknown)(struct IMFMediaType *, GUID *, struct IUnknown *);
    HRESULT (*LockStore)(struct IMFMediaType *);
    HRESULT (*UnlockStore)(struct IMFMediaType *);
    HRESULT (*GetCount)(struct IMFMediaType *, UINT32 *);
    HRESULT (*GetItemByIndex)(struct IMFMediaType *, UINT32, GUID *, PROPVARIANT *);
    HRESULT (*CopyAllItems)(struct IMFMediaType *, struct IMFAttributes *);
    HRESULT (*GetMajorType)(struct IMFMediaType *, GUID *);
    HRESULT (*IsCompressedFormat)(struct IMFMediaType *, BOOL *);
    HRESULT (*IsEqual)(struct IMFMediaType *, struct IMFMediaType *, DWORD *);
    HRESULT (*GetRepresentation)(struct IMFMediaType *, GUID, LPVOID *);
    HRESULT (*FreeRepresentation)(struct IMFMediaType *, GUID, LPVOID);
};

typedef struct IMFAsyncCallbackVtbl IMFAsyncCallbackVtbl, *PIMFAsyncCallbackVtbl;

struct IMFAsyncCallbackVtbl {
    HRESULT (*QueryInterface)(struct IMFAsyncCallback *, IID *, void **);
    ULONG (*AddRef)(struct IMFAsyncCallback *);
    ULONG (*Release)(struct IMFAsyncCallback *);
    HRESULT (*GetParameters)(struct IMFAsyncCallback *, DWORD *, DWORD *);
    HRESULT (*Invoke)(struct IMFAsyncCallback *, struct IMFAsyncResult *);
};

typedef struct IMFAttributes IMFAttributes, *PIMFAttributes;

typedef struct IMFAttributesVtbl IMFAttributesVtbl, *PIMFAttributesVtbl;

struct IMFAttributes {
    struct IMFAttributesVtbl *lpVtbl;
};

struct IMFAttributesVtbl {
    HRESULT (*QueryInterface)(struct IMFAttributes *, IID *, void **);
    ULONG (*AddRef)(struct IMFAttributes *);
    ULONG (*Release)(struct IMFAttributes *);
    HRESULT (*GetItem)(struct IMFAttributes *, GUID *, PROPVARIANT *);
    HRESULT (*GetItemType)(struct IMFAttributes *, GUID *, MF_ATTRIBUTE_TYPE *);
    HRESULT (*CompareItem)(struct IMFAttributes *, GUID *, PROPVARIANT *, BOOL *);
    HRESULT (*Compare)(struct IMFAttributes *, struct IMFAttributes *, MF_ATTRIBUTES_MATCH_TYPE, BOOL *);
    HRESULT (*GetUINT32)(struct IMFAttributes *, GUID *, UINT32 *);
    HRESULT (*GetUINT64)(struct IMFAttributes *, GUID *, UINT64 *);
    HRESULT (*GetDouble)(struct IMFAttributes *, GUID *, double *);
    HRESULT (*GetGUID)(struct IMFAttributes *, GUID *, GUID *);
    HRESULT (*GetStringLength)(struct IMFAttributes *, GUID *, UINT32 *);
    HRESULT (*GetString)(struct IMFAttributes *, GUID *, LPWSTR, UINT32, UINT32 *);
    HRESULT (*GetAllocatedString)(struct IMFAttributes *, GUID *, LPWSTR *, UINT32 *);
    HRESULT (*GetBlobSize)(struct IMFAttributes *, GUID *, UINT32 *);
    HRESULT (*GetBlob)(struct IMFAttributes *, GUID *, UINT8 *, UINT32, UINT32 *);
    HRESULT (*GetAllocatedBlob)(struct IMFAttributes *, GUID *, UINT8 **, UINT32 *);
    HRESULT (*GetUnknown)(struct IMFAttributes *, GUID *, IID *, LPVOID *);
    HRESULT (*SetItem)(struct IMFAttributes *, GUID *, PROPVARIANT *);
    HRESULT (*DeleteItem)(struct IMFAttributes *, GUID *);
    HRESULT (*DeleteAllItems)(struct IMFAttributes *);
    HRESULT (*SetUINT32)(struct IMFAttributes *, GUID *, UINT32);
    HRESULT (*SetUINT64)(struct IMFAttributes *, GUID *, UINT64);
    HRESULT (*SetDouble)(struct IMFAttributes *, GUID *, double);
    HRESULT (*SetGUID)(struct IMFAttributes *, GUID *, GUID *);
    HRESULT (*SetString)(struct IMFAttributes *, GUID *, LPCWSTR);
    HRESULT (*SetBlob)(struct IMFAttributes *, GUID *, UINT8 *, UINT32);
    HRESULT (*SetUnknown)(struct IMFAttributes *, GUID *, struct IUnknown *);
    HRESULT (*LockStore)(struct IMFAttributes *);
    HRESULT (*UnlockStore)(struct IMFAttributes *);
    HRESULT (*GetCount)(struct IMFAttributes *, UINT32 *);
    HRESULT (*GetItemByIndex)(struct IMFAttributes *, UINT32, GUID *, PROPVARIANT *);
    HRESULT (*CopyAllItems)(struct IMFAttributes *, struct IMFAttributes *);
};

typedef struct IMFAsyncCallback IMFAsyncCallback, *PIMFAsyncCallback;

struct IMFAsyncCallback {
    struct IMFAsyncCallbackVtbl *lpVtbl;
};

typedef struct IMFByteStream IMFByteStream, *PIMFByteStream;

typedef struct IMFByteStreamVtbl IMFByteStreamVtbl, *PIMFByteStreamVtbl;

struct IMFByteStream {
    struct IMFByteStreamVtbl *lpVtbl;
};

struct IMFByteStreamVtbl {
    HRESULT (*QueryInterface)(struct IMFByteStream *, IID *, void **);
    ULONG (*AddRef)(struct IMFByteStream *);
    ULONG (*Release)(struct IMFByteStream *);
    HRESULT (*GetCapabilities)(struct IMFByteStream *, DWORD *);
    HRESULT (*GetLength)(struct IMFByteStream *, QWORD *);
    HRESULT (*SetLength)(struct IMFByteStream *, QWORD);
    HRESULT (*GetCurrentPosition)(struct IMFByteStream *, QWORD *);
    HRESULT (*SetCurrentPosition)(struct IMFByteStream *, QWORD);
    HRESULT (*IsEndOfStream)(struct IMFByteStream *, BOOL *);
    HRESULT (*Read)(struct IMFByteStream *, BYTE *, ULONG, ULONG *);
    HRESULT (*BeginRead)(struct IMFByteStream *, BYTE *, ULONG, struct IMFAsyncCallback *, struct IUnknown *);
    HRESULT (*EndRead)(struct IMFByteStream *, struct IMFAsyncResult *, ULONG *);
    HRESULT (*Write)(struct IMFByteStream *, BYTE *, ULONG, ULONG *);
    HRESULT (*BeginWrite)(struct IMFByteStream *, BYTE *, ULONG, struct IMFAsyncCallback *, struct IUnknown *);
    HRESULT (*EndWrite)(struct IMFByteStream *, struct IMFAsyncResult *, ULONG *);
    HRESULT (*Seek)(struct IMFByteStream *, MFBYTESTREAM_SEEK_ORIGIN, LONGLONG, DWORD, QWORD *);
    HRESULT (*Flush)(struct IMFByteStream *);
    HRESULT (*Close)(struct IMFByteStream *);
};

typedef struct IMFSample IMFSample, *PIMFSample;

typedef struct IMFSampleVtbl IMFSampleVtbl, *PIMFSampleVtbl;

struct IMFSample {
    struct IMFSampleVtbl *lpVtbl;
};

struct IMFSampleVtbl {
    HRESULT (*QueryInterface)(struct IMFSample *, IID *, void **);
    ULONG (*AddRef)(struct IMFSample *);
    ULONG (*Release)(struct IMFSample *);
    HRESULT (*GetItem)(struct IMFSample *, GUID *, PROPVARIANT *);
    HRESULT (*GetItemType)(struct IMFSample *, GUID *, MF_ATTRIBUTE_TYPE *);
    HRESULT (*CompareItem)(struct IMFSample *, GUID *, PROPVARIANT *, BOOL *);
    HRESULT (*Compare)(struct IMFSample *, struct IMFAttributes *, MF_ATTRIBUTES_MATCH_TYPE, BOOL *);
    HRESULT (*GetUINT32)(struct IMFSample *, GUID *, UINT32 *);
    HRESULT (*GetUINT64)(struct IMFSample *, GUID *, UINT64 *);
    HRESULT (*GetDouble)(struct IMFSample *, GUID *, double *);
    HRESULT (*GetGUID)(struct IMFSample *, GUID *, GUID *);
    HRESULT (*GetStringLength)(struct IMFSample *, GUID *, UINT32 *);
    HRESULT (*GetString)(struct IMFSample *, GUID *, LPWSTR, UINT32, UINT32 *);
    HRESULT (*GetAllocatedString)(struct IMFSample *, GUID *, LPWSTR *, UINT32 *);
    HRESULT (*GetBlobSize)(struct IMFSample *, GUID *, UINT32 *);
    HRESULT (*GetBlob)(struct IMFSample *, GUID *, UINT8 *, UINT32, UINT32 *);
    HRESULT (*GetAllocatedBlob)(struct IMFSample *, GUID *, UINT8 **, UINT32 *);
    HRESULT (*GetUnknown)(struct IMFSample *, GUID *, IID *, LPVOID *);
    HRESULT (*SetItem)(struct IMFSample *, GUID *, PROPVARIANT *);
    HRESULT (*DeleteItem)(struct IMFSample *, GUID *);
    HRESULT (*DeleteAllItems)(struct IMFSample *);
    HRESULT (*SetUINT32)(struct IMFSample *, GUID *, UINT32);
    HRESULT (*SetUINT64)(struct IMFSample *, GUID *, UINT64);
    HRESULT (*SetDouble)(struct IMFSample *, GUID *, double);
    HRESULT (*SetGUID)(struct IMFSample *, GUID *, GUID *);
    HRESULT (*SetString)(struct IMFSample *, GUID *, LPCWSTR);
    HRESULT (*SetBlob)(struct IMFSample *, GUID *, UINT8 *, UINT32);
    HRESULT (*SetUnknown)(struct IMFSample *, GUID *, struct IUnknown *);
    HRESULT (*LockStore)(struct IMFSample *);
    HRESULT (*UnlockStore)(struct IMFSample *);
    HRESULT (*GetCount)(struct IMFSample *, UINT32 *);
    HRESULT (*GetItemByIndex)(struct IMFSample *, UINT32, GUID *, PROPVARIANT *);
    HRESULT (*CopyAllItems)(struct IMFSample *, struct IMFAttributes *);
    HRESULT (*GetSampleFlags)(struct IMFSample *, DWORD *);
    HRESULT (*SetSampleFlags)(struct IMFSample *, DWORD);
    HRESULT (*GetSampleTime)(struct IMFSample *, LONGLONG *);
    HRESULT (*SetSampleTime)(struct IMFSample *, LONGLONG);
    HRESULT (*GetSampleDuration)(struct IMFSample *, LONGLONG *);
    HRESULT (*SetSampleDuration)(struct IMFSample *, LONGLONG);
    HRESULT (*GetBufferCount)(struct IMFSample *, DWORD *);
    HRESULT (*GetBufferByIndex)(struct IMFSample *, DWORD, struct IMFMediaBuffer **);
    HRESULT (*ConvertToContiguousBuffer)(struct IMFSample *, struct IMFMediaBuffer **);
    HRESULT (*AddBuffer)(struct IMFSample *, struct IMFMediaBuffer *);
    HRESULT (*RemoveBufferByIndex)(struct IMFSample *, DWORD);
    HRESULT (*RemoveAllBuffers)(struct IMFSample *);
    HRESULT (*GetTotalLength)(struct IMFSample *, DWORD *);
    HRESULT (*CopyToBuffer)(struct IMFSample *, struct IMFMediaBuffer *);
};

typedef enum __MIDL___MIDL_itf_mfobjects_0000_0013_0001 {
    MF_ACCESSMODE_READ=1,
    MF_ACCESSMODE_WRITE=2,
    MF_ACCESSMODE_READWRITE=3
} __MIDL___MIDL_itf_mfobjects_0000_0013_0001;

typedef enum __MIDL___MIDL_itf_mfobjects_0000_0013_0002 {
    MF_OPENMODE_FAIL_IF_NOT_EXIST=0,
    MF_OPENMODE_FAIL_IF_EXIST=1,
    MF_OPENMODE_RESET_IF_EXIST=2,
    MF_OPENMODE_APPEND_IF_EXIST=3,
    MF_OPENMODE_DELETE_IF_EXIST=4
} __MIDL___MIDL_itf_mfobjects_0000_0013_0002;

typedef enum __MIDL___MIDL_itf_mfobjects_0000_0013_0003 {
    MF_FILEFLAGS_NONE=0,
    MF_FILEFLAGS_NOBUFFERING=1,
    MF_FILEFLAGS_ALLOW_WRITE_SHARING=2
} __MIDL___MIDL_itf_mfobjects_0000_0013_0003;

typedef enum _MFBYTESTREAM_SEEK_ORIGIN {
    msoBegin=0,
    msoCurrent=1
} _MFBYTESTREAM_SEEK_ORIGIN;

typedef enum _MF_ATTRIBUTE_TYPE {
    MF_ATTRIBUTE_UINT32=0,
    MF_ATTRIBUTE_UINT64=1,
    MF_ATTRIBUTE_DOUBLE=2,
    MF_ATTRIBUTE_GUID=3,
    MF_ATTRIBUTE_STRING=4,
    MF_ATTRIBUTE_BLOB=5,
    MF_ATTRIBUTE_IUNKNOWN=6
} _MF_ATTRIBUTE_TYPE;

typedef enum _MF_ATTRIBUTE_TYPE MF_ATTRIBUTE_TYPE;

typedef struct IMFAsyncResult IMFAsyncResult, *PIMFAsyncResult;

struct IMFAsyncResult {
    struct IMFAsyncResultVtbl *lpVtbl;
};

typedef struct IMFMediaType IMFMediaType, *PIMFMediaType;

struct IMFMediaType {
    struct IMFMediaTypeVtbl *lpVtbl;
};

typedef enum __MIDL___MIDL_itf_mfobjects_0000_0013_0003 MF_FILE_FLAGS;

typedef enum __MIDL___MIDL_itf_mfobjects_0000_0013_0001 MF_FILE_ACCESSMODE;

typedef enum _MF_ATTRIBUTES_MATCH_TYPE {
    MF_ATTRIBUTES_MATCH_OUR_ITEMS=0,
    MF_ATTRIBUTES_MATCH_THEIR_ITEMS=1,
    MF_ATTRIBUTES_MATCH_ALL_ITEMS=2,
    MF_ATTRIBUTES_MATCH_INTERSECTION=3,
    MF_ATTRIBUTES_MATCH_SMALLER=4
} _MF_ATTRIBUTES_MATCH_TYPE;

typedef ULONGLONG QWORD;

typedef enum _MF_ATTRIBUTES_MATCH_TYPE MF_ATTRIBUTES_MATCH_TYPE;

typedef enum _MFBYTESTREAM_SEEK_ORIGIN MFBYTESTREAM_SEEK_ORIGIN;

typedef enum __MIDL___MIDL_itf_mfobjects_0000_0013_0002 MF_FILE_OPENMODE;

typedef struct TypeDescriptor TypeDescriptor, *PTypeDescriptor;

struct TypeDescriptor {
    void *pVFTable;
    void *spare;
    char name[0];
};

typedef char *va_list;

typedef ulonglong uintptr_t;

typedef ulonglong UINT_PTR;

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ *HWND;

typedef UINT_PTR WPARAM;

typedef longlong LONG_PTR;

typedef LONG_PTR LPARAM;

typedef UINT_PTR (*LPCCHOOKPROC)(HWND, UINT, WPARAM, LPARAM);

struct HWND__ {
    int unused;
};

typedef struct tagCHOOSECOLORW tagCHOOSECOLORW, *PtagCHOOSECOLORW;

typedef DWORD COLORREF;

typedef WCHAR *LPCWSTR;

struct tagCHOOSECOLORW {
    DWORD lStructSize;
    HWND hwndOwner;
    HWND hInstance;
    COLORREF rgbResult;
    COLORREF *lpCustColors;
    DWORD Flags;
    LPARAM lCustData;
    LPCCHOOKPROC lpfnHook;
    LPCWSTR lpTemplateName;
};

typedef struct tagCHOOSECOLORW *LPCHOOSECOLORW;

typedef struct lconv lconv, *Plconv;

struct lconv {
    char *decimal_point;
    char *thousands_sep;
    char *grouping;
    char *int_curr_symbol;
    char *currency_symbol;
    char *mon_decimal_point;
    char *mon_thousands_sep;
    char *mon_grouping;
    char *positive_sign;
    char *negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
    wchar_t *_W_decimal_point;
    wchar_t *_W_thousands_sep;
    wchar_t *_W_int_curr_symbol;
    wchar_t *_W_currency_symbol;
    wchar_t *_W_mon_decimal_point;
    wchar_t *_W_mon_thousands_sep;
    wchar_t *_W_positive_sign;
    wchar_t *_W_negative_sign;
};

typedef ushort wint_t;

typedef struct threadlocaleinfostruct threadlocaleinfostruct, *Pthreadlocaleinfostruct;

typedef struct threadlocaleinfostruct *pthreadlocinfo;

typedef struct localerefcount localerefcount, *Plocalerefcount;

typedef struct localerefcount locrefcount;

typedef struct __lc_time_data __lc_time_data, *P__lc_time_data;

struct threadlocaleinfostruct {
    int refcount;
    uint lc_codepage;
    uint lc_collate_cp;
    uint lc_time_cp;
    locrefcount lc_category[6];
    int lc_clike;
    int mb_cur_max;
    int *lconv_intl_refcount;
    int *lconv_num_refcount;
    int *lconv_mon_refcount;
    struct lconv *lconv;
    int *ctype1_refcount;
    ushort *ctype1;
    ushort *pctype;
    uchar *pclmap;
    uchar *pcumap;
    struct __lc_time_data *lc_time_curr;
    wchar_t *locale_name[6];
};

struct localerefcount {
    char *locale;
    wchar_t *wlocale;
    int *refcount;
    int *wrefcount;
};

struct __lc_time_data {
    char *wday_abbr[7];
    char *wday[7];
    char *month_abbr[12];
    char *month[12];
    char *ampm[2];
    char *ww_sdatefmt;
    char *ww_ldatefmt;
    char *ww_timefmt;
    int ww_caltype;
    int refcount;
    wchar_t *_W_wday_abbr[7];
    wchar_t *_W_wday[7];
    wchar_t *_W_month_abbr[12];
    wchar_t *_W_month[12];
    wchar_t *_W_ampm[2];
    wchar_t *_W_ww_sdatefmt;
    wchar_t *_W_ww_ldatefmt;
    wchar_t *_W_ww_timefmt;
    wchar_t *_W_ww_locale_name;
};

typedef ulonglong size_t;

typedef int errno_t;

typedef struct localeinfo_struct localeinfo_struct, *Plocaleinfo_struct;

typedef struct threadmbcinfostruct threadmbcinfostruct, *Pthreadmbcinfostruct;

typedef struct threadmbcinfostruct *pthreadmbcinfo;

struct localeinfo_struct {
    pthreadlocinfo locinfo;
    pthreadmbcinfo mbcinfo;
};

struct threadmbcinfostruct {
    int refcount;
    int mbcodepage;
    int ismbcodepage;
    ushort mbulinfo[6];
    uchar mbctype[257];
    uchar mbcasemap[256];
    wchar_t *mblocalename;
};

typedef size_t rsize_t;

typedef struct localeinfo_struct *_locale_t;

typedef ushort wctype_t;

typedef struct _browseinfoW _browseinfoW, *P_browseinfoW;

typedef struct _ITEMIDLIST _ITEMIDLIST, *P_ITEMIDLIST;

typedef struct _ITEMIDLIST ITEMIDLIST;

typedef ITEMIDLIST *LPCITEMIDLIST;

typedef int (*BFFCALLBACK)(HWND, UINT, LPARAM, LPARAM);

typedef struct _SHITEMID _SHITEMID, *P_SHITEMID;

typedef struct _SHITEMID SHITEMID;

struct _browseinfoW {
    HWND hwndOwner;
    LPCITEMIDLIST pidlRoot;
    LPWSTR pszDisplayName;
    LPCWSTR lpszTitle;
    UINT ulFlags;
    BFFCALLBACK lpfn;
    LPARAM lParam;
    int iImage;
};

struct _ITEMIDLIST {
    SHITEMID mkid;
};

struct _SHITEMID {
    USHORT cb;
    BYTE abID[1];
};

typedef struct _browseinfoW *LPBROWSEINFOW;

typedef struct _MARGINS _MARGINS, *P_MARGINS;

struct _MARGINS {
    int cxLeftWidth;
    int cxRightWidth;
    int cyTopHeight;
    int cyBottomHeight;
};

typedef struct _MARGINS MARGINS;

typedef ITEMIDLIST *LPITEMIDLIST;

typedef struct tagSCROLLBARINFO tagSCROLLBARINFO, *PtagSCROLLBARINFO;

typedef struct tagRECT tagRECT, *PtagRECT;

typedef struct tagRECT RECT;

struct tagSCROLLBARINFO {
    DWORD cbSize;
    RECT rcScrollBar;
    int dxyLineButton;
    int xyThumbTop;
    int xyThumbBottom;
    int reserved;
    DWORD rgstate[6];
};

struct tagRECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
};

typedef struct tagTRACKMOUSEEVENT tagTRACKMOUSEEVENT, *PtagTRACKMOUSEEVENT;

struct tagTRACKMOUSEEVENT {
    DWORD cbSize;
    DWORD dwFlags;
    HWND hwndTrack;
    DWORD dwHoverTime;
};

typedef struct tagMONITORINFO tagMONITORINFO, *PtagMONITORINFO;

typedef struct tagMONITORINFO *LPMONITORINFO;

struct tagMONITORINFO {
    DWORD cbSize;
    RECT rcMonitor;
    RECT rcWork;
    DWORD dwFlags;
};

typedef struct tagMSG tagMSG, *PtagMSG;

typedef struct tagMSG *LPMSG;

typedef struct tagPOINT tagPOINT, *PtagPOINT;

typedef struct tagPOINT POINT;

struct tagMSG {
    HWND hwnd;
    UINT message;
    WPARAM wParam;
    LPARAM lParam;
    DWORD time;
    POINT pt;
};

struct tagPOINT {
    LONG x;
    LONG y;
};

typedef struct _ICONINFO _ICONINFO, *P_ICONINFO;

typedef struct _ICONINFO ICONINFO;

typedef struct HBITMAP__ HBITMAP__, *PHBITMAP__;

typedef struct HBITMAP__ *HBITMAP;

struct _ICONINFO {
    BOOL fIcon;
    DWORD xHotspot;
    DWORD yHotspot;
    HBITMAP hbmMask;
    HBITMAP hbmColor;
};

struct HBITMAP__ {
    int unused;
};

typedef struct tagMENUITEMINFOW tagMENUITEMINFOW, *PtagMENUITEMINFOW;

typedef struct HMENU__ HMENU__, *PHMENU__;

typedef struct HMENU__ *HMENU;

struct tagMENUITEMINFOW {
    UINT cbSize;
    UINT fMask;
    UINT fType;
    UINT fState;
    UINT wID;
    HMENU hSubMenu;
    HBITMAP hbmpChecked;
    HBITMAP hbmpUnchecked;
    ULONG_PTR dwItemData;
    LPWSTR dwTypeData;
    UINT cch;
    HBITMAP hbmpItem;
};

struct HMENU__ {
    int unused;
};

typedef struct tagSCROLLINFO tagSCROLLINFO, *PtagSCROLLINFO;

struct tagSCROLLINFO {
    UINT cbSize;
    UINT fMask;
    int nMin;
    int nMax;
    UINT nPage;
    int nPos;
    int nTrackPos;
};

typedef struct tagSCROLLINFO SCROLLINFO;

typedef LONG_PTR LRESULT;

typedef LRESULT (*HOOKPROC)(int, WPARAM, LPARAM);

typedef struct tagMENUITEMINFOW MENUITEMINFOW;

typedef MENUITEMINFOW *LPCMENUITEMINFOW;

typedef struct tagPAINTSTRUCT tagPAINTSTRUCT, *PtagPAINTSTRUCT;

typedef struct tagPAINTSTRUCT *LPPAINTSTRUCT;

typedef struct HDC__ HDC__, *PHDC__;

typedef struct HDC__ *HDC;

struct tagPAINTSTRUCT {
    HDC hdc;
    BOOL fErase;
    RECT rcPaint;
    BOOL fRestore;
    BOOL fIncUpdate;
    BYTE rgbReserved[32];
};

struct HDC__ {
    int unused;
};

typedef struct tagMENUINFO tagMENUINFO, *PtagMENUINFO;

typedef struct HBRUSH__ HBRUSH__, *PHBRUSH__;

typedef struct HBRUSH__ *HBRUSH;

struct tagMENUINFO {
    DWORD cbSize;
    DWORD fMask;
    DWORD dwStyle;
    UINT cyMax;
    HBRUSH hbrBack;
    DWORD dwContextHelpID;
    ULONG_PTR dwMenuData;
};

struct HBRUSH__ {
    int unused;
};

typedef LRESULT (*WNDPROC)(HWND, UINT, WPARAM, LPARAM);

typedef struct tagWNDCLASSEXW tagWNDCLASSEXW, *PtagWNDCLASSEXW;

typedef struct tagWNDCLASSEXW WNDCLASSEXW;

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ *HINSTANCE;

typedef struct HICON__ HICON__, *PHICON__;

typedef struct HICON__ *HICON;

typedef HICON HCURSOR;

struct tagWNDCLASSEXW {
    UINT cbSize;
    UINT style;
    WNDPROC lpfnWndProc;
    int cbClsExtra;
    int cbWndExtra;
    HINSTANCE hInstance;
    HICON hIcon;
    HCURSOR hCursor;
    HBRUSH hbrBackground;
    LPCWSTR lpszMenuName;
    LPCWSTR lpszClassName;
    HICON hIconSm;
};

struct HINSTANCE__ {
    int unused;
};

struct HICON__ {
    int unused;
};

typedef struct tagCOMBOBOXINFO tagCOMBOBOXINFO, *PtagCOMBOBOXINFO;

typedef struct tagCOMBOBOXINFO *PCOMBOBOXINFO;

struct tagCOMBOBOXINFO {
    DWORD cbSize;
    RECT rcItem;
    RECT rcButton;
    DWORD stateButton;
    HWND hwndCombo;
    HWND hwndItem;
    HWND hwndList;
};

typedef struct FLASHWINFO FLASHWINFO, *PFLASHWINFO;

struct FLASHWINFO {
    UINT cbSize;
    HWND hwnd;
    DWORD dwFlags;
    UINT uCount;
    DWORD dwTimeout;
};

typedef struct tagPAINTSTRUCT PAINTSTRUCT;

typedef struct tagWNDCLASSW tagWNDCLASSW, *PtagWNDCLASSW;

typedef struct tagWNDCLASSW WNDCLASSW;

struct tagWNDCLASSW {
    UINT style;
    WNDPROC lpfnWndProc;
    int cbClsExtra;
    int cbWndExtra;
    HINSTANCE hInstance;
    HICON hIcon;
    HCURSOR hCursor;
    HBRUSH hbrBackground;
    LPCWSTR lpszMenuName;
    LPCWSTR lpszClassName;
};

typedef BOOL (*WNDENUMPROC)(HWND, LPARAM);

typedef void (*TIMERPROC)(HWND, UINT, UINT_PTR, DWORD);

typedef struct tagSCROLLBARINFO *PSCROLLBARINFO;

typedef struct tagMENUINFO MENUINFO;

typedef MENUINFO *LPCMENUINFO;

typedef struct tagTPMPARAMS tagTPMPARAMS, *PtagTPMPARAMS;

typedef struct tagTPMPARAMS TPMPARAMS;

typedef TPMPARAMS *LPTPMPARAMS;

struct tagTPMPARAMS {
    UINT cbSize;
    RECT rcExclude;
};

typedef struct tagMSG MSG;

typedef SCROLLINFO *LPCSCROLLINFO;

typedef struct tagTRACKMOUSEEVENT *LPTRACKMOUSEEVENT;

typedef ICONINFO *PICONINFO;

typedef struct tagMENUITEMINFOW *LPMENUITEMINFOW;

typedef struct tagSCROLLINFO *LPSCROLLINFO;

typedef struct HWINEVENTHOOK__ HWINEVENTHOOK__, *PHWINEVENTHOOK__;

typedef struct HWINEVENTHOOK__ *HWINEVENTHOOK;

typedef void (*WINEVENTPROC)(HWINEVENTHOOK, DWORD, HWND, LONG, LONG, DWORD, DWORD);

struct HWINEVENTHOOK__ {
    int unused;
};

typedef struct tagMENUINFO *LPMENUINFO;

typedef HANDLE HDWP;

typedef struct HMONITOR__ HMONITOR__, *PHMONITOR__;

typedef struct HMONITOR__ *HMONITOR;

typedef struct tagRECT *LPRECT;

typedef BOOL (*MONITORENUMPROC)(HMONITOR, HDC, LPRECT, LPARAM);

struct HMONITOR__ {
    int unused;
};

typedef struct exception exception, *Pexception;

struct exception { // PlaceHolder Class Structure
};

typedef struct tagLOGBRUSH tagLOGBRUSH, *PtagLOGBRUSH;

typedef struct tagLOGBRUSH LOGBRUSH;

struct tagLOGBRUSH {
    UINT lbStyle;
    COLORREF lbColor;
    ULONG_PTR lbHatch;
};

typedef struct tagTEXTMETRICW tagTEXTMETRICW, *PtagTEXTMETRICW;

struct tagTEXTMETRICW {
    LONG tmHeight;
    LONG tmAscent;
    LONG tmDescent;
    LONG tmInternalLeading;
    LONG tmExternalLeading;
    LONG tmAveCharWidth;
    LONG tmMaxCharWidth;
    LONG tmWeight;
    LONG tmOverhang;
    LONG tmDigitizedAspectX;
    LONG tmDigitizedAspectY;
    WCHAR tmFirstChar;
    WCHAR tmLastChar;
    WCHAR tmDefaultChar;
    WCHAR tmBreakChar;
    BYTE tmItalic;
    BYTE tmUnderlined;
    BYTE tmStruckOut;
    BYTE tmPitchAndFamily;
    BYTE tmCharSet;
};

typedef struct _DISPLAY_DEVICEW _DISPLAY_DEVICEW, *P_DISPLAY_DEVICEW;

struct _DISPLAY_DEVICEW {
    DWORD cb;
    WCHAR DeviceName[32];
    WCHAR DeviceString[128];
    DWORD StateFlags;
    WCHAR DeviceID[128];
    WCHAR DeviceKey[128];
};

typedef struct tagRGBQUAD tagRGBQUAD, *PtagRGBQUAD;

struct tagRGBQUAD {
    BYTE rgbBlue;
    BYTE rgbGreen;
    BYTE rgbRed;
    BYTE rgbReserved;
};

typedef struct tagBITMAPINFO tagBITMAPINFO, *PtagBITMAPINFO;

typedef struct tagBITMAPINFO BITMAPINFO;

typedef struct tagBITMAPINFOHEADER tagBITMAPINFOHEADER, *PtagBITMAPINFOHEADER;

typedef struct tagBITMAPINFOHEADER BITMAPINFOHEADER;

typedef struct tagRGBQUAD RGBQUAD;

struct tagBITMAPINFO {
    BITMAPINFOHEADER bmiHeader;
    RGBQUAD bmiColors[1];
};

struct tagBITMAPINFOHEADER {
    DWORD biSize;
    LONG biWidth;
    LONG biHeight;
    WORD biPlanes;
    WORD biBitCount;
    DWORD biCompression;
    DWORD biSizeImage;
    LONG biXPelsPerMeter;
    LONG biYPelsPerMeter;
    DWORD biClrUsed;
    DWORD biClrImportant;
};

typedef struct tagLOGFONTW tagLOGFONTW, *PtagLOGFONTW;

typedef struct tagLOGFONTW LOGFONTW;

struct tagLOGFONTW {
    LONG lfHeight;
    LONG lfWidth;
    LONG lfEscapement;
    LONG lfOrientation;
    LONG lfWeight;
    BYTE lfItalic;
    BYTE lfUnderline;
    BYTE lfStrikeOut;
    BYTE lfCharSet;
    BYTE lfOutPrecision;
    BYTE lfClipPrecision;
    BYTE lfQuality;
    BYTE lfPitchAndFamily;
    WCHAR lfFaceName[32];
};

typedef struct _DISPLAY_DEVICEW *PDISPLAY_DEVICEW;

typedef struct tagTEXTMETRICW *LPTEXTMETRICW;

typedef struct tagBITMAPINFO *LPBITMAPINFO;

typedef GUID IID;

typedef struct _GUID _GUID, *P_GUID;

struct _GUID {
    ulong Data1;
    ushort Data2;
    ushort Data3;
    uchar Data4[8];
};

typedef PVOID BCRYPT_HASH_HANDLE;

typedef PVOID BCRYPT_ALG_HANDLE;

typedef LONG NTSTATUS;

typedef void *RPC_AUTH_IDENTITY_HANDLE;

typedef union _ULARGE_INTEGER _ULARGE_INTEGER, *P_ULARGE_INTEGER;

typedef union _ULARGE_INTEGER ULARGE_INTEGER;

typedef struct _struct_22 _struct_22, *P_struct_22;

typedef struct _struct_23 _struct_23, *P_struct_23;

struct _struct_22 {
    DWORD LowPart;
    DWORD HighPart;
};

struct _struct_23 {
    DWORD LowPart;
    DWORD HighPart;
};

union _ULARGE_INTEGER {
    struct _struct_22 s;
    struct _struct_23 u;
    ULONGLONG QuadPart;
};

typedef struct _struct_314 _struct_314, *P_struct_314;

struct _struct_314 {
    ULONGLONG Alignment;
    ULONGLONG Region;
};

typedef struct _struct_317 _struct_317, *P_struct_317;

struct _struct_317 {
    ULONGLONG Depth:16;
    ULONGLONG Sequence:48;
    ULONGLONG HeaderType:1;
    ULONGLONG Reserved:3;
    ULONGLONG NextEntry:60;
};

typedef struct _struct_316 _struct_316, *P_struct_316;

struct _struct_316 {
    ULONGLONG Depth:16;
    ULONGLONG Sequence:48;
    ULONGLONG HeaderType:1;
    ULONGLONG Init:1;
    ULONGLONG Reserved:2;
    ULONGLONG NextEntry:60;
};

typedef struct _struct_315 _struct_315, *P_struct_315;

struct _struct_315 {
    ULONGLONG Depth:16;
    ULONGLONG Sequence:9;
    ULONGLONG NextEntry:39;
    ULONGLONG HeaderType:1;
    ULONGLONG Init:1;
    ULONGLONG Reserved:59;
    ULONGLONG Region:3;
};

typedef struct _RUNTIME_FUNCTION _RUNTIME_FUNCTION, *P_RUNTIME_FUNCTION;

struct _RUNTIME_FUNCTION {
    DWORD BeginAddress;
    DWORD EndAddress;
    DWORD UnwindData;
};

typedef struct _RUNTIME_FUNCTION *PRUNTIME_FUNCTION;

typedef struct _SLIST_ENTRY _SLIST_ENTRY, *P_SLIST_ENTRY;

typedef struct _SLIST_ENTRY *PSLIST_ENTRY;

struct _SLIST_ENTRY {
    PSLIST_ENTRY Next;
};

typedef struct _UNWIND_HISTORY_TABLE_ENTRY _UNWIND_HISTORY_TABLE_ENTRY, *P_UNWIND_HISTORY_TABLE_ENTRY;

typedef struct _UNWIND_HISTORY_TABLE_ENTRY UNWIND_HISTORY_TABLE_ENTRY;

struct _UNWIND_HISTORY_TABLE_ENTRY {
    DWORD64 ImageBase;
    PRUNTIME_FUNCTION FunctionEntry;
};

typedef union _union_61 _union_61, *P_union_61;

typedef struct _M128A *PM128A;

typedef struct _struct_62 _struct_62, *P_struct_62;

struct _struct_62 {
    PM128A Xmm0;
    PM128A Xmm1;
    PM128A Xmm2;
    PM128A Xmm3;
    PM128A Xmm4;
    PM128A Xmm5;
    PM128A Xmm6;
    PM128A Xmm7;
    PM128A Xmm8;
    PM128A Xmm9;
    PM128A Xmm10;
    PM128A Xmm11;
    PM128A Xmm12;
    PM128A Xmm13;
    PM128A Xmm14;
    PM128A Xmm15;
};

union _union_61 {
    PM128A FloatingContext[16];
    struct _struct_62 s;
};

typedef struct _struct_64 _struct_64, *P_struct_64;

typedef ulonglong *PDWORD64;

struct _struct_64 {
    PDWORD64 Rax;
    PDWORD64 Rcx;
    PDWORD64 Rdx;
    PDWORD64 Rbx;
    PDWORD64 Rsp;
    PDWORD64 Rbp;
    PDWORD64 Rsi;
    PDWORD64 Rdi;
    PDWORD64 R8;
    PDWORD64 R9;
    PDWORD64 R10;
    PDWORD64 R11;
    PDWORD64 R12;
    PDWORD64 R13;
    PDWORD64 R14;
    PDWORD64 R15;
};

typedef union _union_63 _union_63, *P_union_63;

struct _struct_64 {
    PDWORD64 Rax;
    PDWORD64 Rcx;
    PDWORD64 Rdx;
    PDWORD64 Rbx;
    PDWORD64 Rsp;
    PDWORD64 Rbp;
    PDWORD64 Rsi;
    PDWORD64 Rdi;
    PDWORD64 R8;
    PDWORD64 R9;
    PDWORD64 R10;
    PDWORD64 R11;
    PDWORD64 R12;
    PDWORD64 R13;
    PDWORD64 R14;
    PDWORD64 R15;
};

union _union_63 {
    PDWORD64 IntegerContext[16];
    struct _struct_64 s;
};

typedef EXCEPTION_DISPOSITION (EXCEPTION_ROUTINE)(struct _EXCEPTION_RECORD *, PVOID, struct _CONTEXT *, PVOID);

typedef union _SLIST_HEADER _SLIST_HEADER, *P_SLIST_HEADER;

struct _struct_314 {
    ULONGLONG Alignment;
    ULONGLONG Region;
};

struct _struct_315 {
    ULONGLONG Depth:16;
    ULONGLONG Sequence:9;
    ULONGLONG NextEntry:39;
    ULONGLONG HeaderType:1;
    ULONGLONG Init:1;
    ULONGLONG Reserved:59;
    ULONGLONG Region:3;
};

struct _struct_316 {
    ULONGLONG Depth:16;
    ULONGLONG Sequence:48;
    ULONGLONG HeaderType:1;
    ULONGLONG Init:1;
    ULONGLONG Reserved:2;
    ULONGLONG NextEntry:60;
};

struct _struct_317 {
    ULONGLONG Depth:16;
    ULONGLONG Sequence:48;
    ULONGLONG HeaderType:1;
    ULONGLONG Reserved:3;
    ULONGLONG NextEntry:60;
};

union _SLIST_HEADER {
    struct _struct_314 s;
    struct _struct_315 Header8;
    struct _struct_316 Header16;
    struct _struct_317 HeaderX64;
};

typedef struct _UNWIND_HISTORY_TABLE _UNWIND_HISTORY_TABLE, *P_UNWIND_HISTORY_TABLE;

struct _UNWIND_HISTORY_TABLE {
    DWORD Count;
    BYTE LocalHint;
    BYTE GlobalHint;
    BYTE Search;
    BYTE Once;
    DWORD64 LowAddress;
    DWORD64 HighAddress;
    UNWIND_HISTORY_TABLE_ENTRY Entry[12];
};

typedef CHAR *LPCSTR;

typedef ULARGE_INTEGER *PULARGE_INTEGER;

typedef CHAR *LPSTR;

typedef DWORD ACCESS_MASK;

typedef struct _KNONVOLATILE_CONTEXT_POINTERS _KNONVOLATILE_CONTEXT_POINTERS, *P_KNONVOLATILE_CONTEXT_POINTERS;

union _union_61 {
    PM128A FloatingContext[16];
    struct _struct_62 s;
};

union _union_63 {
    PDWORD64 IntegerContext[16];
    struct _struct_64 s;
};

struct _KNONVOLATILE_CONTEXT_POINTERS {
    union _union_61 u;
    union _union_63 u2;
};

typedef union _LARGE_INTEGER _LARGE_INTEGER, *P_LARGE_INTEGER;

typedef struct _struct_19 _struct_19, *P_struct_19;

typedef struct _struct_20 _struct_20, *P_struct_20;

struct _struct_19 {
    DWORD LowPart;
    LONG HighPart;
};

struct _struct_20 {
    DWORD LowPart;
    LONG HighPart;
};

union _LARGE_INTEGER {
    struct _struct_19 s;
    struct _struct_20 u;
    LONGLONG QuadPart;
};

typedef union _LARGE_INTEGER LARGE_INTEGER;

typedef struct _SLIST_ENTRY *PSLIST_ENTRY.conflict;

typedef WCHAR *LPWCH;

typedef struct _UNWIND_HISTORY_TABLE *PUNWIND_HISTORY_TABLE;

typedef union _SLIST_HEADER *PSLIST_HEADER;

typedef long HRESULT;

typedef void (*PFLS_CALLBACK_FUNCTION)(PVOID);

typedef LARGE_INTEGER *PLARGE_INTEGER;

typedef struct _KNONVOLATILE_CONTEXT_POINTERS *PKNONVOLATILE_CONTEXT_POINTERS;

typedef EXCEPTION_ROUTINE *PEXCEPTION_ROUTINE;

typedef struct IMAGE_DOS_HEADER IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;

struct IMAGE_DOS_HEADER {
    char e_magic[2]; // Magic number
    word e_cblp; // Bytes of last page
    word e_cp; // Pages in file
    word e_crlc; // Relocations
    word e_cparhdr; // Size of header in paragraphs
    word e_minalloc; // Minimum extra paragraphs needed
    word e_maxalloc; // Maximum extra paragraphs needed
    word e_ss; // Initial (relative) SS value
    word e_sp; // Initial SP value
    word e_csum; // Checksum
    word e_ip; // Initial IP value
    word e_cs; // Initial (relative) CS value
    word e_lfarlc; // File address of relocation table
    word e_ovno; // Overlay number
    word e_res[4][4]; // Reserved words
    word e_oemid; // OEM identifier (for e_oeminfo)
    word e_oeminfo; // OEM information; e_oemid specific
    word e_res2[10][10]; // Reserved words
    dword e_lfanew; // File address of new exe header
    byte e_program[64]; // Actual DOS program
};

typedef uchar UINT8;

typedef ULONG_PTR DWORD_PTR;

typedef ULONG_PTR SIZE_T;

typedef uint UINT32;

typedef ulonglong UINT64;

typedef longlong INT_PTR;

typedef LRESULT (*SUBCLASSPROC)(HWND, UINT, WPARAM, LPARAM, UINT_PTR, DWORD_PTR);

typedef struct tagPOINT *LPPOINT;

typedef struct HFONT__ HFONT__, *PHFONT__;

struct HFONT__ {
    int unused;
};

typedef struct HKEY__ HKEY__, *PHKEY__;

struct HKEY__ {
    int unused;
};

typedef RECT *LPCRECT;

typedef struct tagSIZE tagSIZE, *PtagSIZE;

struct tagSIZE {
    LONG cx;
    LONG cy;
};

typedef HINSTANCE HMODULE;

typedef HANDLE HLOCAL;

typedef struct HPEN__ HPEN__, *PHPEN__;

struct HPEN__ {
    int unused;
};

typedef INT_PTR (*FARPROC)(void);

typedef WORD ATOM;

typedef struct HRGN__ HRGN__, *PHRGN__;

typedef struct HRGN__ *HRGN;

struct HRGN__ {
    int unused;
};

typedef BOOL *LPBOOL;

typedef void *HGDIOBJ;

typedef struct HKEY__ *HKEY;

typedef struct HHOOK__ HHOOK__, *PHHOOK__;

struct HHOOK__ {
    int unused;
};

typedef struct HHOOK__ *HHOOK;


// WARNING! conflicting data type names: /WinDef.h/ULONG - /wtypes.h/ULONG

typedef struct HFONT__ *HFONT;

typedef uchar UCHAR;

typedef UCHAR *PUCHAR;

typedef DWORD *LPDWORD;

typedef struct HPEN__ *HPEN;

typedef DWORD *PDWORD;

typedef int *LPINT;

typedef struct tagSIZE *LPSIZE;

typedef BOOL *PBOOL;

typedef struct _FILETIME *LPFILETIME;

typedef WORD *LPWORD;

typedef HKEY *PHKEY;

typedef HANDLE HGLOBAL;

typedef void *LPCVOID;

typedef struct _IMAGE_RUNTIME_FUNCTION_ENTRY _IMAGE_RUNTIME_FUNCTION_ENTRY, *P_IMAGE_RUNTIME_FUNCTION_ENTRY;

struct _IMAGE_RUNTIME_FUNCTION_ENTRY {
    ImageBaseOffset32 BeginAddress;
    dword EndAddress; // Apply ImageBaseOffset32 to see reference
    ImageBaseOffset32 UnwindInfoAddressOrData;
};

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct {
    dword NameOffset:31;
    dword NameIsString:1;
};

typedef struct IMAGE_LOAD_CONFIG_CODE_INTEGRITY IMAGE_LOAD_CONFIG_CODE_INTEGRITY, *PIMAGE_LOAD_CONFIG_CODE_INTEGRITY;

struct IMAGE_LOAD_CONFIG_CODE_INTEGRITY {
    word Flags;
    word Catalog;
    dword CatalogOffset;
    dword Reserved;
};

typedef struct IMAGE_DEBUG_DIRECTORY IMAGE_DEBUG_DIRECTORY, *PIMAGE_DEBUG_DIRECTORY;

struct IMAGE_DEBUG_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword Type;
    dword SizeOfData;
    dword AddressOfRawData;
    dword PointerToRawData;
};

typedef struct IMAGE_FILE_HEADER IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;

struct IMAGE_FILE_HEADER {
    word Machine; // 34404
    word NumberOfSections;
    dword TimeDateStamp;
    dword PointerToSymbolTable;
    dword NumberOfSymbols;
    word SizeOfOptionalHeader;
    word Characteristics;
};

typedef struct IMAGE_LOAD_CONFIG_DIRECTORY64 IMAGE_LOAD_CONFIG_DIRECTORY64, *PIMAGE_LOAD_CONFIG_DIRECTORY64;

typedef enum IMAGE_GUARD_FLAGS {
    IMAGE_GUARD_CF_INSTRUMENTED=256,
    IMAGE_GUARD_CFW_INSTRUMENTED=512,
    IMAGE_GUARD_CF_FUNCTION_TABLE_PRESENT=1024,
    IMAGE_GUARD_SECURITY_COOKIE_UNUSED=2048,
    IMAGE_GUARD_PROTECT_DELAYLOAD_IAT=4096,
    IMAGE_GUARD_DELAYLOAD_IAT_IN_ITS_OWN_SECTION=8192,
    IMAGE_GUARD_CF_EXPORT_SUPPRESSION_INFO_PRESENT=16384,
    IMAGE_GUARD_CF_ENABLE_EXPORT_SUPPRESSION=32768,
    IMAGE_GUARD_CF_LONGJUMP_TABLE_PRESENT=65536,
    IMAGE_GUARD_RF_INSTRUMENTED=131072,
    IMAGE_GUARD_RF_ENABLE=262144,
    IMAGE_GUARD_RF_STRICT=524288,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_1=268435456,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_2=536870912,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_4=1073741824,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_8=2147483648
} IMAGE_GUARD_FLAGS;

struct IMAGE_LOAD_CONFIG_CODE_INTEGRITY {
    word Flags;
    word Catalog;
    dword CatalogOffset;
    dword Reserved;
};

struct IMAGE_LOAD_CONFIG_DIRECTORY64 {
    dword Size;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword GlobalFlagsClear;
    dword GlobalFlagsSet;
    dword CriticalSectionDefaultTimeout;
    qword DeCommitFreeBlockThreshold;
    qword DeCommitTotalFreeThreshold;
    pointer64 LockPrefixTable;
    qword MaximumAllocationSize;
    qword VirtualMemoryThreshold;
    qword ProcessAffinityMask;
    dword ProcessHeapFlags;
    word CsdVersion;
    word DependentLoadFlags;
    pointer64 EditList;
    pointer64 SecurityCookie;
    pointer64 SEHandlerTable;
    qword SEHandlerCount;
    pointer64 GuardCFCCheckFunctionPointer;
    pointer64 GuardCFDispatchFunctionPointer;
    pointer64 GuardCFFunctionTable;
    qword GuardCFFunctionCount;
    enum IMAGE_GUARD_FLAGS GuardFlags;
    struct IMAGE_LOAD_CONFIG_CODE_INTEGRITY CodeIntegrity;
    pointer64 GuardAddressTakenIatEntryTable;
    qword GuardAddressTakenIatEntryCount;
    pointer64 GuardLongJumpTargetTable;
    qword GuardLongJumpTargetCount;
    pointer64 DynamicValueRelocTable;
    pointer64 CHPEMetadataPointer;
    pointer64 GuardRFFailureRoutine;
    pointer64 GuardRFFailureRoutineFunctionPointer;
    dword DynamicValueRelocTableOffset;
    word DynamicValueRelocTableSection;
    word Reserved2;
    pointer64 GuardRFVerifyStackPointerFunctionPointer;
    dword HotPatchTableOffset;
    dword Reserved3;
    pointer64 EnclaveConfigurationPointer;
    pointer64 VolatileMetadataPointer;
    pointer64 GuardEHContinuationTable;
    qword GuardEHContinuationCount;
    pointer64 GuardXFGCheckFunctionPointer;
    pointer64 GuardXFGDispatchFunctionPointer;
    pointer64 GuardXFGTableDispatchFunctionPointer;
    pointer64 CastGuardOsDeterminedFailureMode;
    pointer64 GuardMemcpyFunctionPointer;
};

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY IMAGE_RESOURCE_DIRECTORY_ENTRY, *PIMAGE_RESOURCE_DIRECTORY_ENTRY;

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion;

union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion {
    dword OffsetToData;
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;
};

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct {
    dword NameOffset:31;
    dword NameIsString:1;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion {
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;
    dword Name;
    word Id;
};

struct IMAGE_RESOURCE_DIRECTORY_ENTRY {
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion NameUnion;
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion DirectoryUnion;
};

typedef struct IMAGE_OPTIONAL_HEADER64 IMAGE_OPTIONAL_HEADER64, *PIMAGE_OPTIONAL_HEADER64;

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_OPTIONAL_HEADER64 {
    word Magic;
    byte MajorLinkerVersion;
    byte MinorLinkerVersion;
    dword SizeOfCode;
    dword SizeOfInitializedData;
    dword SizeOfUninitializedData;
    ImageBaseOffset32 AddressOfEntryPoint;
    ImageBaseOffset32 BaseOfCode;
    pointer64 ImageBase;
    dword SectionAlignment;
    dword FileAlignment;
    word MajorOperatingSystemVersion;
    word MinorOperatingSystemVersion;
    word MajorImageVersion;
    word MinorImageVersion;
    word MajorSubsystemVersion;
    word MinorSubsystemVersion;
    dword Win32VersionValue;
    dword SizeOfImage;
    dword SizeOfHeaders;
    dword CheckSum;
    word Subsystem;
    word DllCharacteristics;
    qword SizeOfStackReserve;
    qword SizeOfStackCommit;
    qword SizeOfHeapReserve;
    qword SizeOfHeapCommit;
    dword LoaderFlags;
    dword NumberOfRvaAndSizes;
    struct IMAGE_DATA_DIRECTORY DataDirectory[16];
};

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

typedef struct IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER;

typedef union Misc Misc, *PMisc;

typedef enum SectionFlags {
    IMAGE_SCN_TYPE_NO_PAD=8,
    IMAGE_SCN_RESERVED_0001=16,
    IMAGE_SCN_CNT_CODE=32,
    IMAGE_SCN_CNT_INITIALIZED_DATA=64,
    IMAGE_SCN_CNT_UNINITIALIZED_DATA=128,
    IMAGE_SCN_LNK_OTHER=256,
    IMAGE_SCN_LNK_INFO=512,
    IMAGE_SCN_RESERVED_0040=1024,
    IMAGE_SCN_LNK_REMOVE=2048,
    IMAGE_SCN_LNK_COMDAT=4096,
    IMAGE_SCN_GPREL=32768,
    IMAGE_SCN_MEM_16BIT=131072,
    IMAGE_SCN_MEM_PURGEABLE=131072,
    IMAGE_SCN_MEM_LOCKED=262144,
    IMAGE_SCN_MEM_PRELOAD=524288,
    IMAGE_SCN_ALIGN_1BYTES=1048576,
    IMAGE_SCN_ALIGN_2BYTES=2097152,
    IMAGE_SCN_ALIGN_4BYTES=3145728,
    IMAGE_SCN_ALIGN_8BYTES=4194304,
    IMAGE_SCN_ALIGN_16BYTES=5242880,
    IMAGE_SCN_ALIGN_32BYTES=6291456,
    IMAGE_SCN_ALIGN_64BYTES=7340032,
    IMAGE_SCN_ALIGN_128BYTES=8388608,
    IMAGE_SCN_ALIGN_256BYTES=9437184,
    IMAGE_SCN_ALIGN_512BYTES=10485760,
    IMAGE_SCN_ALIGN_1024BYTES=11534336,
    IMAGE_SCN_ALIGN_2048BYTES=12582912,
    IMAGE_SCN_ALIGN_4096BYTES=13631488,
    IMAGE_SCN_ALIGN_8192BYTES=14680064,
    IMAGE_SCN_LNK_NRELOC_OVFL=16777216,
    IMAGE_SCN_MEM_DISCARDABLE=33554432,
    IMAGE_SCN_MEM_NOT_CACHED=67108864,
    IMAGE_SCN_MEM_NOT_PAGED=134217728,
    IMAGE_SCN_MEM_SHARED=268435456,
    IMAGE_SCN_MEM_EXECUTE=536870912,
    IMAGE_SCN_MEM_READ=1073741824,
    IMAGE_SCN_MEM_WRITE=2147483648
} SectionFlags;

union Misc {
    dword PhysicalAddress;
    dword VirtualSize;
};

struct IMAGE_SECTION_HEADER {
    char Name[8];
    union Misc Misc;
    ImageBaseOffset32 VirtualAddress;
    dword SizeOfRawData;
    dword PointerToRawData;
    dword PointerToRelocations;
    dword PointerToLinenumbers;
    word NumberOfRelocations;
    word NumberOfLinenumbers;
    enum SectionFlags Characteristics;
};

typedef struct IMAGE_NT_HEADERS64 IMAGE_NT_HEADERS64, *PIMAGE_NT_HEADERS64;

struct IMAGE_FILE_HEADER {
    word Machine; // 34404
    word NumberOfSections;
    dword TimeDateStamp;
    dword PointerToSymbolTable;
    dword NumberOfSymbols;
    word SizeOfOptionalHeader;
    word Characteristics;
};

struct IMAGE_OPTIONAL_HEADER64 {
    word Magic;
    byte MajorLinkerVersion;
    byte MinorLinkerVersion;
    dword SizeOfCode;
    dword SizeOfInitializedData;
    dword SizeOfUninitializedData;
    ImageBaseOffset32 AddressOfEntryPoint;
    ImageBaseOffset32 BaseOfCode;
    pointer64 ImageBase;
    dword SectionAlignment;
    dword FileAlignment;
    word MajorOperatingSystemVersion;
    word MinorOperatingSystemVersion;
    word MajorImageVersion;
    word MinorImageVersion;
    word MajorSubsystemVersion;
    word MinorSubsystemVersion;
    dword Win32VersionValue;
    dword SizeOfImage;
    dword SizeOfHeaders;
    dword CheckSum;
    word Subsystem;
    word DllCharacteristics;
    qword SizeOfStackReserve;
    qword SizeOfStackCommit;
    qword SizeOfHeapReserve;
    qword SizeOfHeapCommit;
    dword LoaderFlags;
    dword NumberOfRvaAndSizes;
    struct IMAGE_DATA_DIRECTORY DataDirectory[16];
};

struct IMAGE_NT_HEADERS64 {
    char Signature[4];
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER64 OptionalHeader;
};

typedef struct IMAGE_BASE_RELOCATION IMAGE_BASE_RELOCATION, *PIMAGE_BASE_RELOCATION;

struct IMAGE_BASE_RELOCATION {
    dword VirtualAddress;
    dword SizeOfBlock;
};

typedef struct IMAGE_THUNK_DATA64 IMAGE_THUNK_DATA64, *PIMAGE_THUNK_DATA64;

struct IMAGE_THUNK_DATA64 {
    qword StartAddressOfRawData;
    qword EndAddressOfRawData;
    qword AddressOfIndex;
    qword AddressOfCallBacks;
    dword SizeOfZeroFill;
    dword Characteristics;
};

typedef struct IMAGE_RESOURCE_DATA_ENTRY IMAGE_RESOURCE_DATA_ENTRY, *PIMAGE_RESOURCE_DATA_ENTRY;

struct IMAGE_RESOURCE_DATA_ENTRY {
    dword OffsetToData;
    dword Size;
    dword CodePage;
    dword Reserved;
};

typedef struct IMAGE_RESOURCE_DIRECTORY IMAGE_RESOURCE_DIRECTORY, *PIMAGE_RESOURCE_DIRECTORY;

struct IMAGE_RESOURCE_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    word NumberOfNamedEntries;
    word NumberOfIdEntries;
};

typedef struct tagPROPVARIANT tagPROPVARIANT, *PtagPROPVARIANT;

typedef struct tagPROPVARIANT PROPVARIANT;

struct tagPROPVARIANT {
};

typedef LONG LSTATUS;

typedef ACCESS_MASK REGSAM;

typedef struct __crt_multibyte_data __crt_multibyte_data, *P__crt_multibyte_data;

struct __crt_multibyte_data { // PlaceHolder Structure
};

typedef struct __crt_locale_data __crt_locale_data, *P__crt_locale_data;

struct __crt_locale_data { // PlaceHolder Structure
};

typedef struct __acrt_ptd __acrt_ptd, *P__acrt_ptd;

struct __acrt_ptd { // PlaceHolder Structure
};

typedef struct __crt_deferred_errno_cache __crt_deferred_errno_cache, *P__crt_deferred_errno_cache;

struct __crt_deferred_errno_cache { // PlaceHolder Structure
};

typedef struct __crt_locale_pointers __crt_locale_pointers, *P__crt_locale_pointers;

struct __crt_locale_pointers { // PlaceHolder Structure
};

typedef enum SLD_STATUS {
} SLD_STATUS;

typedef struct <lambda_38119f0e861e05405d8a144b9b982f0a> <lambda_38119f0e861e05405d8a144b9b982f0a>, *P<lambda_38119f0e861e05405d8a144b9b982f0a>;

struct <lambda_38119f0e861e05405d8a144b9b982f0a> { // PlaceHolder Structure
};

typedef struct EHExceptionRecord EHExceptionRecord, *PEHExceptionRecord;

struct EHExceptionRecord { // PlaceHolder Structure
};

typedef struct <lambda_3e16ef9562a7dcce91392c22ab16ea36> <lambda_3e16ef9562a7dcce91392c22ab16ea36>, *P<lambda_3e16ef9562a7dcce91392c22ab16ea36>;

struct <lambda_3e16ef9562a7dcce91392c22ab16ea36> { // PlaceHolder Structure
};

typedef enum __acrt_rounding_mode {
} __acrt_rounding_mode;

typedef struct __crt_seh_guarded_call<void> __crt_seh_guarded_call<void>, *P__crt_seh_guarded_call<void>;

struct __crt_seh_guarded_call<void> { // PlaceHolder Structure
};

typedef struct _LocaleUpdate _LocaleUpdate, *P_LocaleUpdate;

struct _LocaleUpdate { // PlaceHolder Structure
};

typedef struct <lambda_410d79af7f07d98d83a3f525b3859a53> <lambda_410d79af7f07d98d83a3f525b3859a53>, *P<lambda_410d79af7f07d98d83a3f525b3859a53>;

struct <lambda_410d79af7f07d98d83a3f525b3859a53> { // PlaceHolder Structure
};

typedef enum length_modifier {
} length_modifier;

typedef struct string_output_adapter<wchar_t> string_output_adapter<wchar_t>, *Pstring_output_adapter<wchar_t>;

struct string_output_adapter<wchar_t> { // PlaceHolder Structure
};

typedef struct string_output_adapter<char> string_output_adapter<char>, *Pstring_output_adapter<char>;

struct string_output_adapter<char> { // PlaceHolder Structure
};

typedef struct floating_point_string floating_point_string, *Pfloating_point_string;

struct floating_point_string { // PlaceHolder Structure
};

typedef struct floating_point_value floating_point_value, *Pfloating_point_value;

struct floating_point_value { // PlaceHolder Structure
};

typedef struct _SHFILEOPSTRUCTW _SHFILEOPSTRUCTW, *P_SHFILEOPSTRUCTW;

typedef struct _SHFILEOPSTRUCTW *LPSHFILEOPSTRUCTW;

typedef WORD FILEOP_FLAGS;

struct _SHFILEOPSTRUCTW {
    HWND hwnd;
    UINT wFunc;
    LPCWSTR pFrom;
    LPCWSTR pTo;
    FILEOP_FLAGS fFlags;
    BOOL fAnyOperationsAborted;
    LPVOID hNameMappings;
    LPCWSTR lpszProgressTitle;
};

typedef struct IUnknown *LPUNKNOWN;




void FUN_140001130(void);
void FUN_140001d40(void);
void FUN_140001dd0(void);
void FUN_140001f40(void);
void FUN_140002060(void);
void FUN_140002150(void);
void FUN_140002190(void);
void FUN_1400021c0(void);
void FUN_140002250(void);
void FUN_1400022b0(void);
void FUN_1400022f0(void);
undefined8 FUN_140002360(HWND param_1,undefined8 *param_2);
undefined1 FUN_1400023d0(undefined8 *param_1);
longlong * FUN_140002430(longlong *param_1,undefined8 param_2);
longlong * FUN_1400024b0(longlong *param_1,int *param_2);
ulonglong * FUN_1400024c0(ulonglong *param_1,longlong param_2,longlong param_3);
ulonglong * FUN_1400025f0(ulonglong *param_1,longlong param_2,longlong param_3);
short * FUN_140002760(short *param_1,char *param_2,char *param_3);
longlong * FUN_1400028c0(longlong *param_1,longlong *param_2);
ulonglong FUN_140002900(undefined8 *param_1,undefined8 *param_2);
undefined8 FUN_1400029a0(undefined8 *param_1,undefined8 *param_2);
ulonglong FUN_140002a80(undefined8 *param_1,undefined8 *param_2);
ulonglong FUN_140002b20(undefined8 *param_1,undefined8 *param_2);
bool FUN_140002bc0(undefined8 *param_1,undefined8 *param_2);
bool FUN_140002c10(undefined8 *param_1,undefined8 param_2);
bool FUN_140002c80(undefined8 *param_1,undefined8 *param_2);
bool FUN_140002ce0(undefined8 *param_1,undefined8 param_2);
ulonglong FUN_140002d50(ulonglong param_1,undefined8 param_2,undefined8 param_3);
undefined8 * FUN_140002d80(undefined8 *param_1,undefined8 param_2,undefined8 param_3);
undefined8 FUN_140002df0(undefined8 param_1,undefined8 *param_2,undefined8 param_3);
undefined8 * FUN_140002e70(undefined8 *param_1,undefined8 param_2,undefined8 param_3);
undefined8 FUN_140002ee0(undefined8 param_1,undefined8 param_2,undefined8 *param_3);
void FUN_140002f70(undefined8 *param_1,longlong *param_2);
longlong * FUN_140002fc0(longlong param_1,longlong *param_2,undefined8 *param_3);
longlong * FUN_140003340(longlong param_1,longlong *param_2,undefined8 *param_3);
void FUN_1400036c0(longlong *param_1,longlong param_2,undefined8 param_3);
undefined8 FUN_140003b00(longlong param_1,undefined8 param_2);
longlong * FUN_140003cb0(longlong *param_1);
ulonglong FUN_140003ce0(HDC param_1,int *param_2,undefined4 *param_3,undefined8 *param_4);
ulonglong FUN_140004140(HDC param_1,int *param_2,undefined4 *param_3,undefined8 param_4);
undefined ** FUN_140004560(longlong param_1,undefined8 param_2);
undefined8 FUN_140004aa0(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4,longlong param_5,char param_6,undefined8 param_7);
undefined8 * FUN_140004de0(undefined8 *param_1,undefined8 param_2,ulonglong param_3);
undefined8 * FUN_140004e70(undefined8 *param_1,undefined8 param_2,ulonglong param_3);
ulonglong * FUN_140004f00(ulonglong *param_1,undefined8 param_2,ulonglong param_3);
ulonglong * FUN_140005060(ulonglong *param_1,undefined8 param_2,ulonglong param_3);
void FUN_1400051f0(ulonglong *param_1,longlong param_2,ulonglong param_3);
void FUN_140005340(ulonglong *param_1,undefined8 *param_2,ulonglong param_3);
void FUN_140005610(ulonglong *param_1,undefined8 *param_2,ulonglong param_3);
void FUN_140005930(ulonglong *param_1,undefined8 *param_2,ulonglong param_3);
void FUN_140005c60(ulonglong *param_1,longlong param_2,ulonglong param_3);
void FUN_140005e00(ulonglong *param_1,undefined4 *param_2,ulonglong param_3);
void FUN_1400060b0(ulonglong *param_1,undefined8 *param_2,ulonglong param_3);
void FUN_140006340(ulonglong *param_1,undefined8 param_2,ulonglong param_3);
void FUN_140006440(ulonglong *param_1,undefined8 param_2,ulonglong param_3);
void FUN_140006580(undefined8 *param_1,undefined2 param_2,ulonglong param_3);
undefined8 * FUN_1400066c0(undefined8 *param_1,undefined4 param_2,undefined8 *param_3);
void FUN_1400067b0(longlong param_1,longlong param_2);
void FUN_140006810(longlong param_1,longlong param_2);
void FUN_140006890(longlong *param_1,longlong *param_2);
undefined8 * FUN_1400068f0(longlong *param_1,undefined8 *param_2);
undefined8 *FUN_140006aa0(longlong *param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4);
undefined4 * FUN_140006cd0(ulonglong *param_1,ulonglong param_2,undefined8 param_3);
undefined4 * FUN_140006f80(longlong *param_1,longlong param_2,undefined4 *param_3);
longlong FUN_140007110(longlong *param_1,undefined4 *param_2,undefined8 param_3);
longlong FUN_140007340(longlong *param_1,undefined4 *param_2,undefined8 param_3);
undefined4 * FUN_140007570(longlong *param_1,longlong param_2,undefined4 *param_3);
undefined8 * FUN_140007710(longlong *param_1,undefined8 *param_2,undefined8 *param_3);
undefined8 * FUN_140007940(ulonglong *param_1,ulonglong param_2,undefined8 *param_3);
undefined8 * FUN_140007b60(ulonglong *param_1,ulonglong param_2,undefined8 *param_3);
undefined8 * FUN_140007de0(ulonglong *param_1,ulonglong param_2,undefined8 *param_3);
undefined8 * FUN_140008090(longlong *param_1,undefined8 *param_2,undefined8 *param_3);
undefined8 * FUN_1400082d0(ulonglong *param_1,undefined8 *param_2,undefined8 *param_3);
undefined8 * FUN_1400085b0(longlong *param_1,longlong param_2,undefined8 *param_3);
undefined1 * FUN_140008820(ulonglong *param_1,ulonglong param_2,undefined1 *param_3);
undefined4 * FUN_140008af0(ulonglong *param_1,ulonglong param_2,undefined4 *param_3);
undefined8 * FUN_140008d60(ulonglong *param_1,ulonglong param_2,undefined8 *param_3);
undefined4 * FUN_140008fc0(longlong *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * FUN_140009270(ulonglong *param_1,ulonglong param_2,undefined4 *param_3);
undefined8 * FUN_140009500(longlong *param_1,longlong param_2,undefined4 *param_3);
undefined8 * FUN_140009720(ulonglong *param_1,ulonglong param_2,undefined8 *param_3);
longlong FUN_140009950(ulonglong *param_1,ulonglong param_2,undefined8 param_3);
undefined8 * FUN_140009bf0(ulonglong *param_1,undefined4 *param_2,undefined4 *param_3);
ulonglong FUN_140009f20(ulonglong *param_1,ulonglong param_2,undefined4 *param_3);
longlong FUN_14000a0c0(longlong *param_1,longlong param_2,undefined8 *param_3);
undefined4 * FUN_14000a270(longlong *param_1,longlong param_2,undefined4 *param_3);
undefined8 * FUN_14000a490(ulonglong *param_1,ulonglong param_2,undefined8 *param_3);
undefined8 * FUN_14000a6f0(longlong *param_1,undefined4 *param_2,undefined4 *param_3);
undefined8 * FUN_14000a940(longlong *param_1,undefined4 *param_2,undefined4 *param_3);
undefined8 * FUN_14000ab90(longlong *param_1,undefined8 *param_2,undefined8 *param_3);
undefined8 * FUN_14000ada0(longlong *param_1,undefined8 *param_2,undefined8 *param_3);
undefined8 * FUN_14000afe0(longlong *param_1,undefined8 *param_2,undefined8 *param_3);
undefined8 * FUN_14000b1a0(ulonglong *param_1,undefined8 *param_2,undefined8 *param_3);
void FUN_14000b490(undefined8 param_1,undefined8 param_2,longlong *param_3);
longlong * FUN_14000b4e0(longlong param_1,longlong *param_2,undefined8 *param_3,ulonglong param_4);
void FUN_14000b5c0(undefined8 param_1,undefined8 *param_2);
void FUN_14000b650(uint *param_1,uint *param_2,uint *param_3);
void FUN_14000b7a0(longlong param_1,longlong param_2,longlong param_3);
int FUN_14000b990(undefined8 *param_1,undefined8 param_2,undefined4 param_3);
undefined8 *FUN_14000bb30(undefined8 *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4);
longlong * FUN_14000bc40(longlong *param_1,longlong *param_2);
undefined8 * FUN_14000be90(undefined8 *param_1,undefined8 *param_2);
LPCWSTR FUN_14000c0e0(LPCWSTR param_1,LPCWSTR param_2);
undefined8 FUN_14000c4a0(undefined8 *param_1);
undefined8 FUN_14000c4d0(undefined4 *param_1);
undefined8 FUN_14000c5b0(longlong param_1);
void FUN_14000c5e0(longlong param_1,longlong param_2);
void FUN_14000c920(longlong param_1,longlong param_2);
void FUN_14000cb50(longlong param_1,longlong param_2);
void FUN_14000cee0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3);
void FUN_14000cfc0(longlong param_1,longlong param_2,longlong param_3);
void FUN_14000d0a0(LPCWSTR param_1,LPCWSTR param_2,LPCWSTR param_3);
undefined8 * FUN_14000d220(undefined8 *param_1,uint *param_2,uint *param_3,uint *param_4);
void FUN_14000d380(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4);
void FUN_14000da60(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4);
void FUN_14000de70(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4);
ulonglong * FUN_14000e610(ulonglong *param_1,LPCWSTR param_2,LPCWSTR param_3,LPCWSTR param_4);
void FUN_14000ea90(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4);
void FUN_14000ec90(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4);
void FUN_14000edd0(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4);
void FUN_14000efc0(longlong param_1,ulonglong param_2,ulonglong param_3,LPCWSTR param_4);
ulonglong *FUN_14000f280(ulonglong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,longlong param_5);
ulonglong * FUN_14000f420(ulonglong *param_1,ulonglong param_2);
ulonglong *FUN_14000f590(ulonglong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,longlong param_5);
ulonglong *FUN_14000f750(ulonglong *param_1,ulonglong param_2,undefined8 param_3,longlong param_4,undefined2 param_5);
ulonglong *FUN_14000f910(ulonglong *param_1,ulonglong param_2,undefined8 param_3,longlong param_4,char param_5);
ulonglong *FUN_14000fab0(ulonglong *param_1,ulonglong param_2,undefined8 param_3,longlong param_4,longlong param_5,undefined8 param_6,longlong param_7);
ulonglong *FUN_14000fcc0(ulonglong *param_1,ulonglong param_2,undefined8 param_3,longlong param_4,undefined8 param_5,longlong param_6);
ulonglong *FUN_14000fed0(ulonglong *param_1,ulonglong param_2,undefined8 param_3,undefined1 param_4);
ulonglong *FUN_140010040(ulonglong *param_1,ulonglong param_2,undefined8 param_3,undefined2 param_4);
undefined8 *FUN_1400101d0(undefined8 *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,ulonglong param_5);
void FUN_1400103c0(longlong *param_1,ulonglong param_2,short *param_3);
void FUN_140010560(longlong *param_1,ulonglong param_2);
void FUN_1400106e0(longlong *param_1,ulonglong param_2);
void FUN_1400108b0(longlong *param_1,ulonglong param_2);
void FUN_140010a90(ulonglong *param_1,ulonglong param_2,undefined8 param_3);
void FUN_140010c20(longlong *param_1,ulonglong param_2);
void FUN_140010da0(longlong *param_1,ulonglong param_2);
void FUN_140010fa0(longlong *param_1,ulonglong param_2);
void FUN_140011120(uint *param_1,uint *param_2,longlong param_3,undefined1 param_4);
void FUN_140011410(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4);
void FUN_140011760(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined1 param_4);
void FUN_140011a70(undefined8 *param_1,longlong param_2,longlong param_3,undefined1 param_4);
void FUN_140011db0(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4);
ulonglong FUN_1400120e0(longlong param_1,ulonglong param_2,longlong param_3,ulonglong param_4);
undefined8 * FUN_140012160(float *param_1,undefined8 *param_2,byte *param_3);
short * FUN_140012420(short *param_1,uint param_2);
short * FUN_140012480(short *param_1,ulonglong param_2);
short * FUN_140012510(short *param_1,longlong param_2,short *param_3);
int * FUN_140012570(int *param_1,ulonglong param_2,int *param_3);
undefined8 * FUN_140012600(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3);
undefined8 * FUN_140012670(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3);
undefined8 * FUN_140012700(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3);
undefined1 * FUN_140012790(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3);
undefined8 * FUN_140012860(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3);
undefined8 * FUN_1400128c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3);
undefined8 * FUN_140012920(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3);
undefined8 * FUN_1400129d0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3);
undefined4 * FUN_140012a70(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined4 * FUN_140012ad0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
undefined8 * FUN_140012c10(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3);
undefined8 *FUN_140012c80(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4);
undefined8 * FUN_140012ce0(longlong *param_1,undefined8 *param_2);
longlong * FUN_140012d60(longlong *param_1,longlong *param_2,undefined8 *param_3);
undefined1 FUN_140012f20(longlong *param_1,undefined8 *param_2);
longlong * FUN_1400130b0(longlong *param_1,longlong *param_2);
longlong * FUN_140013220(longlong *param_1,longlong *param_2,undefined8 *param_3);
undefined1 FUN_1400133c0(longlong *param_1,undefined8 *param_2);
longlong * FUN_140013510(longlong *param_1,longlong *param_2,longlong *param_3);
void FUN_140013550(undefined8 param_1,undefined1 *param_2,undefined1 *param_3);
longlong * FUN_1400135f0(float *param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4);
undefined8 *FUN_140013840(longlong param_1,undefined8 *param_2,undefined1 *param_3,undefined1 *param_4);
void FUN_140013ae0(short *param_1,short *param_2,short *param_3);
void FUN_140013b90(int *param_1,int *param_2,int *param_3);
void FUN_140013c40(int *param_1,int *param_2,int *param_3);
void FUN_140013d00(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3);
void FUN_140013db0(int *param_1,int *param_2,int *param_3);
undefined8 *FUN_140013e70(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4);
int * FUN_140013f10(int *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4);
undefined8 *FUN_140014300(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4,undefined4 *param_5);
longlong *FUN_140014400(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4);
void FUN_1400144c0(longlong *param_1);
int FUN_1400145f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
void FUN_140014650(undefined4 *param_1,longlong param_2);
void FUN_140014700(undefined4 *param_1,longlong param_2);
void FUN_140014780(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4);
int FUN_140014850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
int FUN_1400148b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
int FUN_140014910(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
int FUN_140014970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
int FUN_1400149d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
int FUN_140014a30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
int FUN_140014a90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
longlong * FUN_140014af0(longlong *param_1,undefined8 *param_2);
undefined1 FUN_140014b80(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong param_4);
int FUN_140014d10(longlong *param_1);
undefined8 FUN_140014f40(undefined8 param_1);
ulonglong * FUN_140014f80(ulonglong *param_1,ulonglong *param_2);
undefined8 * FUN_1400150a0(undefined8 *param_1,char *param_2);
ulonglong *FUN_1400150f0(ulonglong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4);
undefined8 *FUN_1400152e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,longlong param_5,undefined8 param_6,longlong param_7);
ulonglong * FUN_140015400(ulonglong *param_1,ulonglong param_2,char param_3);
ulonglong * FUN_140015510(ulonglong *param_1,ulonglong *param_2);
undefined8 * FUN_140015650(undefined8 *param_1,undefined8 param_2);
ulonglong *FUN_1400156a0(ulonglong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4);
undefined8 *FUN_1400158c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,longlong param_5,undefined8 param_6,longlong param_7);
longlong * FUN_140015a10(longlong *param_1,longlong param_2);
longlong * FUN_140015a90(longlong *param_1,longlong *param_2);
undefined8 *FUN_140015b40(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4);
ulonglong * FUN_140015c20(ulonglong *param_1,ulonglong param_2);
undefined8 * FUN_140015ce0(undefined8 *param_1,longlong param_2);
undefined8 *FUN_140015d90(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4);
undefined8 * FUN_140015e70(undefined8 *param_1,longlong param_2);
undefined8 *FUN_140015f10(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,float param_4,undefined4 param_5);
longlong * FUN_140016050(longlong *param_1,longlong param_2);
undefined8 * FUN_1400161c0(undefined8 *param_1,HWND param_2);
longlong * FUN_140016290(longlong *param_1);
undefined8 * FUN_140016330(undefined8 *param_1,undefined8 *param_2);
undefined8 *FUN_1400163e0(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4);
undefined8 *FUN_1400165c0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,undefined4 param_5);
undefined1 * FUN_140016790(undefined1 *param_1,undefined1 *param_2);
undefined8 * FUN_140016840(undefined8 *param_1);
undefined4 * FUN_140016970(undefined4 *param_1,undefined4 *param_2);
undefined4 * FUN_140016a60(undefined4 *param_1,undefined4 *param_2);
longlong FUN_140016b00(longlong param_1,longlong param_2);
undefined4 * FUN_140016be0(undefined4 *param_1);
undefined8 * FUN_140016d40(undefined8 *param_1,longlong param_2);
undefined8 * FUN_140016db0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3);
undefined8 * FUN_140016f70(undefined8 *param_1,longlong param_2);
undefined8 * FUN_140016fc0(undefined8 *param_1,longlong param_2);
undefined8 * FUN_140017000(undefined8 *param_1);
undefined8 * FUN_140017030(undefined8 *param_1,longlong param_2);
undefined8 * FUN_140017070(undefined8 *param_1);
exception * __thiscall std::exception::exception(exception *this,exception *param_1);
undefined8 * FUN_1400170e0(undefined8 *param_1,longlong param_2);
undefined8 *FUN_140017170(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4);
undefined4 * FUN_140017250(undefined4 *param_1,undefined4 param_2);
undefined8 * FUN_140017260(undefined8 *param_1,longlong param_2);
undefined8 FUN_1400172a0(undefined8 param_1,undefined8 param_2,undefined8 param_3);
undefined8 * FUN_1400172d0(undefined8 *param_1,undefined8 param_2);
undefined8 FUN_140017310(undefined8 param_1,undefined8 param_2,undefined8 param_3);
undefined8 FUN_140017340(undefined8 param_1,undefined8 param_2,undefined8 param_3);
undefined8 FUN_140017370(undefined8 param_1,undefined8 param_2,undefined8 param_3);
undefined8 FUN_1400173a0(undefined8 param_1,undefined8 param_2,undefined8 param_3);
undefined8 * FUN_1400173d0(undefined8 *param_1,undefined4 param_2,undefined8 *param_3);
undefined8 *FUN_140017400(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4);
undefined8 FUN_140017670(undefined8 param_1,undefined8 param_2,undefined8 param_3);
undefined8 FUN_1400176a0(undefined8 param_1,undefined8 param_2,undefined8 param_3);
undefined8 FUN_1400176d0(undefined8 param_1,undefined8 param_2,undefined8 param_3);
undefined8 FUN_140017700(undefined8 param_1,undefined8 param_2,undefined8 param_3);
undefined8 FUN_140017730(undefined8 param_1,undefined8 param_2,undefined8 param_3);
undefined8 FUN_140017760(undefined8 param_1,undefined8 param_2,undefined8 param_3);
undefined8 FUN_140017790(undefined8 param_1,undefined8 param_2,undefined8 param_3);
undefined8 FUN_1400177c0(undefined8 param_1,undefined8 param_2,undefined8 param_3);
undefined8 * FUN_1400177f0(undefined8 *param_1,undefined8 *param_2);
undefined8 * FUN_140017800(undefined8 *param_1,longlong param_2);
undefined8 * FUN_140017870(undefined8 *param_1,longlong param_2);
undefined8 * FUN_1400178b0(undefined8 *param_1,undefined8 param_2);
undefined8 * FUN_140017920(undefined8 *param_1,longlong param_2);
undefined8 * FUN_140017960(undefined8 *param_1,longlong param_2);
undefined8 * FUN_1400179a0(undefined8 *param_1,undefined8 *param_2);
undefined8 * FUN_140017a20(undefined8 *param_1,longlong param_2);
undefined8 *FUN_140017a80(undefined8 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4);
void FUN_140017b30(longlong *param_1);
void FUN_140017bf0(ulonglong *param_1);
void FUN_140017c60(longlong param_1);
void FUN_140017cb0(longlong param_1);
void FUN_140017d30(longlong *param_1);
void FUN_140017d90(longlong *param_1);
void FUN_140017dd0(longlong *param_1);
void FUN_140017e10(longlong *param_1);
void FUN_140017e50(longlong *param_1);
void FUN_140017e90(longlong *param_1);
void thunk_FUN_1400bfc60(longlong *param_1);
void thunk_FUN_1400bfcd0(longlong *param_1);
void FUN_140017ef0(longlong *param_1);
void FUN_140017f10(undefined8 *param_1);
void FUN_140017f70(longlong *param_1);
void FUN_140017ff0(longlong *param_1);
void FUN_140018050(undefined8 *param_1);
void FUN_140018090(longlong param_1);
void FUN_1400180f0(longlong *param_1);
void FUN_140018150(longlong *param_1);
void FUN_140018190(longlong *param_1);
void FUN_1400181f0(longlong *param_1);
void FUN_140018260(longlong param_1);
void FUN_1400182c0(longlong param_1);
void FUN_140018300(longlong *param_1);
void FUN_140018360(ulonglong *param_1);
void thunk_FUN_1400183e0(ulonglong *param_1);
void FUN_1400183e0(ulonglong *param_1);
void thunk_FUN_140017bf0(ulonglong *param_1);
void FUN_140018460(longlong *param_1);
void FUN_140018500(ulonglong *param_1);
void thunk_FUN_1400bf510(ulonglong *param_1);
void FUN_140018590(longlong *param_1);
void thunk_FUN_1400bf5d0(ulonglong *param_1);
void FUN_140018600(ulonglong *param_1);
void FUN_1400186c0(longlong *param_1);
void FUN_140018760(ulonglong *param_1);
void FUN_140018820(ulonglong *param_1);
void FUN_1400188f0(longlong *param_1);
void FUN_140018950(ulonglong *param_1);
void thunk_FUN_1400bf970(ulonglong *param_1);
void thunk_FUN_1400bf9f0(ulonglong *param_1);
void FUN_140018a00(ulonglong *param_1);
void thunk_FUN_1400bfab0(longlong *param_1);
void FUN_140018ac0(longlong *param_1);
void FUN_140018b60(longlong *param_1);
void FUN_140018c50(longlong param_1);
void FUN_140018c90(longlong param_1);
void FUN_140018ca0(void);
void FUN_140018d00(longlong param_1);
void FUN_140018d60(longlong *param_1);
void FUN_140018dc0(longlong param_1);
void FUN_140018de0(longlong param_1);
void FUN_140018e20(longlong param_1);
void FUN_140018e40(longlong param_1);
void FUN_140018ee0(longlong param_1);
void FUN_140018f10(longlong param_1);
void FUN_140018f30(longlong param_1);
void FUN_140018f60(longlong param_1);
void FUN_140018f80(longlong param_1);
void FUN_140018fb0(longlong param_1);
void FUN_140019000(undefined8 *param_1);
void FUN_140019050(longlong param_1);
void FUN_140019090(undefined8 *param_1);
void FUN_1400190c0(longlong param_1);
void FUN_1400190f0(longlong param_1);
void FUN_140019110(undefined8 *param_1);
void FUN_140019140(longlong param_1);
void FUN_140019160(longlong param_1);
void thunk_FUN_1400bf8b0(ulonglong *param_1);
void FUN_1400191a0(longlong param_1);
void FUN_1400191e0(longlong param_1);
void FUN_140019220(longlong param_1);
void FUN_140019250(longlong param_1);
void FUN_1400192a0(longlong param_1);
void FUN_140019310(longlong param_1);
void FUN_140019350(longlong param_1);
void FUN_140019390(longlong param_1);
void FUN_140019520(longlong param_1);
void FUN_140019530(longlong param_1);
void FUN_140019580(longlong param_1);
void FUN_1400195d0(longlong param_1);
void FUN_1400195e0(longlong *param_1);
void FUN_1400196c0(longlong param_1);
void FUN_1400196f0(longlong param_1);
void FUN_140019750(longlong param_1);
void FUN_140019770(longlong param_1);
void FUN_1400197a0(longlong param_1);
void FUN_140019840(longlong param_1);
void FUN_1400198f0(undefined8 *param_1);
void FUN_140019970(longlong param_1);
void FUN_140019a00(longlong param_1);
void FUN_140019ae0(undefined8 *param_1);
void FUN_140019b20(undefined8 *param_1);
void FUN_140019b60(undefined8 *param_1);
void FUN_140019b90(longlong param_1);
undefined4 FUN_140019bb0(undefined4 *param_1,undefined4 param_2);
longlong * FUN_140019bc0(longlong *param_1,longlong *param_2);
longlong * FUN_140019c60(longlong *param_1,longlong *param_2);
undefined8 * FUN_140019d00(undefined8 *param_1,undefined8 *param_2);
void FUN_140019d40(undefined8 param_1,undefined8 param_2);
longlong * FUN_140019d70(longlong *param_1,longlong *param_2);
undefined8 * FUN_140019db0(undefined8 *param_1,undefined8 *param_2);
longlong * FUN_140019e30(longlong *param_1,longlong *param_2);
undefined8 * FUN_140019f00(undefined8 *param_1,undefined8 *param_2);
ulonglong * FUN_140019f50(ulonglong *param_1,ulonglong *param_2);
longlong * FUN_14001a020(longlong *param_1,longlong *param_2);
undefined8 * FUN_14001a100(undefined8 *param_1,undefined8 *param_2);
longlong * FUN_14001a200(longlong *param_1,longlong *param_2);
undefined8 * FUN_14001a240(undefined8 *param_1,undefined8 *param_2);
longlong FUN_14001a2c0(longlong param_1,longlong param_2);
longlong FUN_14001a320(longlong param_1,longlong param_2);
longlong FUN_14001a370(longlong param_1,longlong param_2);
undefined4 * FUN_14001a6b0(undefined4 *param_1,undefined4 *param_2);
undefined4 * FUN_14001a7f0(undefined4 *param_1,undefined4 *param_2);
undefined8 * FUN_14001a9c0(undefined8 *param_1,undefined8 *param_2);
longlong * FUN_14001aa70(undefined8 *param_1);
bool FUN_14001aaa0(longlong *param_1);
bool FUN_14001aab0(int *param_1);
undefined8 FUN_14001aac0(undefined8 *param_1);
undefined8 * FUN_14001aad0(undefined8 *param_1,uint *param_2,uint *param_3);
void FUN_14001ac70(undefined8 *param_1,undefined8 *param_2,float param_3,ulonglong param_4,undefined8 param_5);
void FUN_14001adb0(undefined8 *param_1,LPCWSTR param_2,int param_3,int param_4,int param_5,int param_6,COLORREF param_7,uint param_8);
void FUN_14001aee0(void);
bool FUN_14001b060(undefined8 param_1,HWND param_2,undefined8 *param_3);
HWND FUN_14001b340(undefined8 param_1,LPCWSTR param_2,LPCWSTR param_3,uint param_4,int param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,undefined1 param_11,int param_12);
undefined8 FUN_14001b4c0(undefined8 *param_1,float *param_2,int param_3,float param_4,float param_5);
void FUN_14001b7b0(undefined8 *param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5);
void FUN_14001b800(undefined8 *param_1);
longlong * FUN_14001b820(undefined8 param_1,longlong *param_2,undefined8 *param_3);
void FUN_14001baa0(undefined8 *param_1);
void FUN_14001be20(undefined8 *param_1);
void FUN_14001bf40(undefined8 *param_1,undefined8 param_2);
undefined8 FUN_14001bfb0(undefined8 param_1,HWND param_2,int *param_3);
undefined8 * FUN_14001c0a0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3);
undefined8 FUN_14001c140(undefined8 param_1,HWND param_2,undefined8 *param_3);
undefined1 FUN_14001c2e0(undefined8 *param_1,undefined8 *param_2);
void FUN_14001c350(undefined8 *param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
void FUN_14001c5b0(longlong *param_1);
void FUN_14001c790(longlong *param_1);
void FUN_14001cd00(longlong *param_1);
void FUN_14001cdc0(longlong *param_1,undefined8 param_2);
void FUN_14001ce50(undefined8 *param_1);
int FUN_14001cea0(undefined8 *param_1,int param_2,int param_3);
void FUN_14001d0a0(undefined8 *param_1,HDC param_2,RECT *param_3);
void FUN_14001d120(undefined8 *param_1,float *param_2,float param_3);
undefined8 * FUN_14001d2b0(undefined8 param_1,undefined8 *param_2,undefined8 param_3);
void FUN_14001d4c0(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,longlong *param_4);
void FUN_14001d5b0(undefined8 *param_1,longlong param_2);
undefined8 FUN_14001d660(undefined8 param_1,HWND param_2);
void FUN_14001d710(undefined8 *param_1,float param_2,float param_3,float param_4);
void FUN_14001d8b0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4);
undefined8 FUN_14001d9c0(undefined8 *param_1,undefined8 *param_2);
HWND FUN_14001dab0(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,char param_5);
void FUN_14001dde0(longlong *param_1);
void FUN_14001e0a0(undefined8 *param_1,int param_2);
void FUN_14001e1e0(undefined8 *param_1,float param_2,float param_3,float param_4,float param_5);
HWND FUN_14001e290(undefined8 param_1,int param_2,LPCWSTR param_3,undefined4 param_4,undefined4 param_5);
LPRECT FUN_14001e370(undefined8 *param_1,LPRECT param_2,undefined8 *param_3,HGDIOBJ param_4,LPCWSTR param_5);
void FUN_14001e780(undefined8 param_1,int param_2,int param_3,undefined8 *param_4,undefined8 *param_5,undefined8 *param_6,undefined4 param_7,undefined1 param_8);
char FUN_14001ea10(undefined8 param_1,HWND param_2,HWND param_3,int param_4,int param_5,int param_6,int param_7,char param_8);
undefined8 * FUN_14001eb50(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3);
void FUN_14001ebd0(undefined8 *param_1);
void FUN_14001ed90(undefined8 param_1,longlong *param_2);
void FUN_14001ee20(undefined8 param_1,longlong param_2);
void FUN_14001eec0(undefined8 param_1,undefined8 *param_2);
void FUN_14001eef0(undefined8 param_1,undefined8 param_2);
longlong * FUN_14001ef20(longlong *param_1,undefined2 param_2);
short * FUN_14001ef90(short *param_1,short *param_2);
undefined8 FUN_14001f0e0(undefined8 param_1,ulonglong param_2);
undefined8 * FUN_14001f110(undefined8 *param_1,ulonglong param_2);
undefined8 * FUN_14001f140(undefined8 *param_1,ulonglong param_2);
undefined8 * FUN_14001f170(undefined8 *param_1,ulonglong param_2);
undefined8 * FUN_14001f1a0(undefined8 *param_1,ulonglong param_2);
undefined8 * FUN_14001f1d0(undefined8 *param_1,ulonglong param_2);
undefined8 * FUN_14001f200(undefined8 *param_1,ulonglong param_2);
undefined8 * FUN_14001f230(undefined8 *param_1,ulonglong param_2);
longlong FUN_14001f260(longlong param_1,ulonglong param_2);
longlong FUN_14001f2f0(longlong param_1,ulonglong param_2);
undefined8 FUN_14001f380(undefined8 param_1,ulonglong param_2);
undefined8 FUN_14001f3c0(undefined8 param_1,ulonglong param_2);
longlong FUN_14001f400(longlong param_1,ulonglong param_2);
undefined8 FUN_14001f440(undefined8 param_1,ulonglong param_2);
longlong FUN_14001f480(longlong param_1,ulonglong param_2);
longlong FUN_14001f510(longlong param_1,uint param_2);
longlong FUN_14001f5d0(longlong param_1,uint param_2);
undefined8 FUN_14001f650(undefined8 param_1,ulonglong param_2);
undefined8 * FUN_14001f680(undefined8 *param_1,ulonglong param_2);
undefined8 * FUN_14001f6d0(undefined8 *param_1,ulonglong param_2);
undefined8 * FUN_14001f720(undefined8 *param_1,ulonglong param_2);
undefined8 FUN_14001f780(HWND param_1);
longlong FUN_14001faf0(longlong param_1);
void FUN_14001fb90(longlong param_1);
int FUN_14001fba0(longlong param_1);
int FUN_14001fbb0(longlong param_1);
int FUN_14001fbc0(longlong param_1);
void FUN_14001fbd0(float param_1);
void FUN_14001fd40(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4);
void FUN_14001fe60(HWND param_1);
undefined1 FUN_140020030(void);
undefined8 * FUN_140020080(undefined8 *param_1);
LRESULT FUN_140020120(HWND param_1,uint param_2,WPARAM param_3,LPCRECT param_4);
undefined8 *FUN_140020af0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
undefined8 * FUN_140020bd0(undefined8 *param_1);
void FUN_140020e00(LPARAM param_1);
ulonglong FUN_140020f80(uint param_1,undefined8 param_2);
void FUN_1400211d0(longlong param_1,longlong *param_2,uint param_3,uint param_4);
void FUN_140021550(void);
void FUN_140021640(undefined8 *param_1,char param_2);
void FUN_140021a20(HWND param_1,int param_2,int param_3);
void FUN_140021ba0(HWND param_1);
void FUN_140021c40(void);
void FUN_140021eb0(char param_1);
ulonglong FUN_140021f90(void);
void FUN_140022560(float param_1);
void FUN_140022700(void);
void FUN_140022d90(int param_1);
void FUN_140023040(void);
undefined8 FUN_1400230a0(longlong param_1,undefined8 *param_2);
longlong FUN_1400231b0(longlong *param_1,longlong param_2);
ulonglong FUN_1400231f0(int param_1);
void FUN_140023340(void);
void FUN_1400239a0(undefined8 param_1);
void FUN_140023ac0(void);
undefined8 FUN_140023b60(undefined8 param_1,int *param_2,uint param_3);
void FUN_140023da0(undefined4 *param_1,undefined4 *param_2);
undefined1 FUN_140024310(longlong param_1,uint param_2);
ulonglong FUN_1400243a0(HWND param_1,int *param_2);
undefined8 * FUN_140024560(longlong param_1,undefined8 *param_2,float *param_3);
undefined8 FUN_140025110(longlong param_1);
void FUN_1400254a0(void);
void FUN_140025590(void);
void FUN_1400256c0(void);
longlong * FUN_140025720(longlong *param_1,undefined8 *param_2);
longlong * FUN_140025a80(longlong param_1,longlong *param_2);
longlong * FUN_140025ca0(longlong param_1,longlong *param_2);
longlong * FUN_140026240(longlong param_1,longlong *param_2);
undefined8 * FUN_140026460(longlong param_1,undefined8 *param_2);
undefined8 * FUN_140026520(longlong param_1,undefined8 *param_2);
longlong * FUN_140026900(longlong param_1,longlong *param_2);
ulonglong FUN_140026b20(longlong param_1);
void FUN_140027e00(POINT param_1);
void FUN_140027e90(int *param_1);
void FUN_1400282a0(void);
ulonglong FUN_140028510(longlong param_1,undefined8 *param_2);
HBITMAP FUN_1400286a0(int *param_1);
ulonglong FUN_140028810(HWND param_1,undefined8 *param_2);
uint FUN_140028a70(HWND param_1,DWORD param_2);
undefined8 FUN_140028ba0(longlong *param_1);
void FUN_140028c10(int param_1);
void FUN_140028ed0(uint param_1);
void FUN_140029050(HWND param_1,longlong param_2,int param_3,char param_4);
int * FUN_140029120(int *param_1,undefined8 param_2,undefined8 param_3,int *param_4);
void FUN_140029220(void);
void FUN_140029300(longlong param_1);
void FUN_1400293b0(byte param_1);
void FUN_140029900(void);
void FUN_1400299a0(void);
void FUN_140029a50(HWND param_1,HDC param_2);
undefined8 * FUN_140029bc0(longlong param_1,undefined8 *param_2);
undefined8 * FUN_140029c90(undefined8 param_1,undefined8 *param_2);
undefined8 * FUN_140029cf0(longlong param_1,undefined8 *param_2);
undefined8 * FUN_140029d80(longlong param_1,undefined8 *param_2);
undefined8 * FUN_140029e30(longlong param_1,undefined8 *param_2);
undefined8 * FUN_140029ef0(longlong param_1,undefined8 *param_2);
undefined8 * FUN_14002a010(longlong param_1,undefined8 *param_2);
undefined8 * FUN_14002a0a0(longlong param_1,undefined8 *param_2);
undefined8 * FUN_14002a140(undefined8 param_1,undefined8 *param_2);
void FUN_14002a1b0(longlong *param_1);
void FUN_14002a260(longlong *param_1);
void FUN_14002a2d0(void);
void FUN_14002a380(char param_1);
void FUN_14002a450(char param_1);
void FUN_14002a4c0(void);
undefined1 FUN_14002a730(void);
ulonglong FUN_14002a7b0(undefined8 param_1,longlong param_2,char param_3,char param_4,char param_5);
undefined8 FUN_14002aad0(HMONITOR param_1,undefined8 param_2,undefined8 param_3,longlong param_4);
undefined8 FUN_14002ac50(HWND param_1,longlong *param_2);
int * FUN_14002af50(int *param_1,undefined8 param_2,int param_3);
int * FUN_14002b020(int *param_1,undefined8 param_2);
int * FUN_14002b0e0(int *param_1,undefined8 param_2);
void FUN_14002b1a0(undefined8 param_1,float *param_2,undefined8 param_3);
void FUN_14002b350(HWND param_1,undefined4 *param_2,int param_3);
int * FUN_14002b460(int *param_1,undefined8 param_2);
int * FUN_14002b520(int *param_1,undefined8 param_2);
int * FUN_14002b5e0(int *param_1,undefined8 param_2,int param_3);
void FUN_14002b6e0(void);
undefined8 * FUN_14002ba80(undefined8 *param_1);
LRESULT FUN_14002bcf0(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4);
void FUN_14002be30(HWND param_1,longlong *param_2,int param_3);
HGDIOBJ FUN_14002bf00(HWND param_1,uint param_2,HDC param_3,LONG_PTR *param_4);
bool FUN_14002d4b0(undefined8 *param_1);
undefined8 * FUN_14002d550(undefined8 *param_1,undefined8 *param_2);
void FUN_14002d7a0(void);
void FUN_14002e770(undefined8 *param_1);
void FUN_14002ea30(HWND param_1,longlong param_2,char param_3);
void FUN_14002ebe0(char param_1);
void FUN_14002ed90(void);
void FUN_14002f220(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
void FUN_14002f370(HWND param_1,UINT param_2,ulonglong param_3,LPARAM param_4,undefined8 param_5,longlong param_6);
void FUN_14002f500(longlong param_1,longlong *param_2,undefined8 param_3);
void FUN_14002f630(undefined8 *param_1,longlong *param_2,longlong *param_3);
void FUN_14002fbc0(longlong param_1,longlong *param_2,longlong *param_3);
longlong * FUN_140030050(longlong param_1,longlong *param_2,longlong *param_3);
HMENU FUN_140030440(longlong *param_1,byte param_2);
undefined8 * FUN_140030cf0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3);
longlong * FUN_140030d70(longlong param_1,longlong *param_2);
undefined8 * FUN_140030fb0(undefined8 *param_1,undefined8 param_2);
undefined8 FUN_140031170(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,undefined8 param_5);
HWND FUN_140031210(HWND param_1,LPCWSTR param_2,WNDPROC param_3,LPCWSTR param_4,int param_5,int param_6,LPVOID param_7);
HICON FUN_140031430(int *param_1);
undefined8 *FUN_1400316d0(undefined8 *param_1,undefined8 *param_2,longlong param_3,UINT32 *param_4,GUID *param_5,UINT32 param_6,UINT32 param_7,undefined4 *param_8,undefined4 *param_9,undefined1 *param_10);
undefined8 * FUN_1400323f0(undefined8 *param_1);
longlong * FUN_140032470(longlong *param_1);
ulonglong FUN_140032660(void);
void FUN_140032820(HDC param_1,RECT *param_2,COLORREF param_3);
void FUN_140032860(void);
void FUN_1400328b0(void);
float * FUN_1400329b0(longlong param_1,float *param_2);
undefined8 FUN_140032a50(longlong param_1);
undefined1 FUN_140032a70(void);
undefined1 FUN_140032ab0(void);
void FUN_140032b30(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4);
void FUN_140032ce0(longlong param_1,longlong *param_2,longlong *param_3);
void FUN_1400334d0(longlong param_1,longlong *param_2,longlong *param_3);
void FUN_1400335a0(longlong param_1,undefined8 param_2,longlong *param_3);
void FUN_140033600(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4);
void FUN_140033da0(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4);
void FUN_140033ec0(longlong param_1,longlong *param_2,longlong *param_3);
void FUN_140033f80(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4);
void FUN_140033ff0(longlong param_1,longlong *param_2,longlong *param_3);
void FUN_140034340(undefined8 param_1,int *param_2,undefined8 *param_3,undefined4 param_4,uint param_5);
undefined8 FUN_140034760(int *param_1);
int FUN_140034970(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,float param_5,undefined8 *param_6);
ulonglong FUN_140034b60(longlong *param_1,longlong *param_2,undefined8 param_3,int param_4,undefined8 param_5,float param_6);
void FUN_140034e20(longlong *param_1,longlong *param_2,longlong *param_3);
undefined8 FUN_140035380(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,longlong param_6,undefined8 param_7);
undefined8 FUN_140035650(void);
undefined8 FUN_140035660(void);
void FUN_140035670(longlong *param_1,longlong *param_2,undefined8 param_3);
void FUN_140035bf0(longlong *param_1);
void FUN_140035dd0(longlong *param_1,longlong *param_2);
undefined8 FUN_140036310(ulonglong *param_1,ulonglong param_2);
void FUN_1400366b0(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 param_4,float param_5,char param_6,undefined8 param_7);
void FUN_1400369a0(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,char param_5,float param_6,float param_7);
void FUN_140036bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3);
void FUN_140036e80(longlong param_1);
void FUN_140037d30(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 param_4,float param_5);
void FUN_140038040(HWND param_1,HDC param_2);
int * FUN_140038450(int *param_1,longlong param_2);
void FUN_140038860(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 *param_4);
void FUN_140039050(HDC param_1,int param_2,int *param_3,uint param_4,undefined4 param_5);
void FUN_14003a270(HDC param_1,RECT *param_2,uint param_3,undefined8 param_4,uint param_5,int param_6,int param_7,uint param_8);
void FUN_14003ad00(longlong *param_1,longlong *param_2,undefined8 param_3,longlong param_4);
void FUN_14003b3c0(undefined8 param_1,longlong param_2,HGDIOBJ param_3,char param_4);
void FUN_14003b6f0(longlong *param_1,longlong *param_2,undefined8 param_3,float param_4,undefined8 param_5);
undefined8 FUN_14003b980(longlong param_1,undefined8 param_2,float param_3,float param_4,float *param_5);
void FUN_14003ba60(longlong *param_1,longlong *param_2,longlong *param_3,float param_4,float param_5,float param_6,undefined8 *param_7);
void FUN_14003d370(longlong param_1);
void FUN_14003d7a0(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5);
undefined8 FUN_14003d8d0(ulonglong param_1);
undefined8 * FUN_14003da60(undefined8 *param_1);
void FUN_14003dc00(HWND param_1,longlong *param_2,int param_3);
uint FUN_14003dd90(POINT param_1);
int * FUN_14003de60(int *param_1,int param_2);
LRESULT FUN_14003dee0(HWND param_1,uint param_2,WPARAM param_3,HWND param_4);
void FUN_14003ea30(void);
longlong * FUN_14003ea80(longlong *param_1,longlong *param_2,undefined4 param_3);
void FUN_14003ebd0(char param_1);
byte FUN_14003ec40(void);
void FUN_14003ecb0(void);
undefined8 FUN_14003eda0(undefined8 param_1);
void FUN_14003efd0(void);
void FUN_14003f100(void);
void FUN_14003fcd0(HWND param_1);
longlong * FUN_14003fdf0(longlong *param_1);
undefined8 * FUN_14003fe70(undefined8 *param_1,HRESULT *param_2,byte param_3);
undefined8 FUN_1400405f0(undefined8 param_1,undefined8 param_2,char param_3);
void FUN_1400407e0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4);
undefined8 FUN_140040960(longlong param_1);
void FUN_140040970(HWND param_1);
void FUN_140040a90(HWND param_1,undefined8 *param_2);
void FUN_140040fa0(HWND param_1,undefined8 *param_2);
undefined8 *FUN_140041400(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4);
undefined8 FUN_140041480(HMONITOR param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4);
longlong FUN_140041540(LPCWSTR param_1);
void FUN_140041600(byte param_1);
void FUN_1400416a0(undefined4 param_1);
void FUN_140041700(char param_1);
void FUN_1400419a0(HWND param_1,int *param_2,char param_3);
void FUN_140041a30(char param_1);
uint FUN_140041c50(undefined8 param_1);
uint * FUN_140041c90(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5);
undefined8 FUN_140041d70(void);
void FUN_140042850(void);
void FUN_140042910(HWND param_1,longlong param_2);
void FUN_140042d10(HWND param_1,longlong param_2,LPCWSTR param_3);
undefined8 FUN_140042e60(undefined8 param_1,HWND param_2,longlong param_3);
undefined8 FUN_140043020(longlong param_1,undefined8 param_2,uint param_3);
float FUN_1400430d0(longlong param_1,uint param_2);
int FUN_140043190(longlong param_1,longlong *param_2,int param_3,float param_4,longlong *param_5);
longlong * FUN_1400435e0(longlong *param_1,uint param_2,ulonglong param_3);
undefined8 * FUN_140044000(undefined8 *param_1,float param_2);
undefined8 FUN_1400440c0(undefined8 param_1,int *param_2);
longlong * FUN_1400446b0(longlong param_1,longlong *param_2,longlong *param_3);
float * FUN_140044b40(longlong param_1,float *param_2);
float * FUN_140044ba0(longlong *param_1,float *param_2);
float * FUN_140044c20(longlong param_1,float *param_2);
float * FUN_140044c90(longlong param_1,float *param_2);
float * FUN_140044ce0(longlong param_1,float *param_2);
float * FUN_140044d40(longlong param_1,float *param_2);
float * FUN_140044df0(longlong *param_1,float *param_2);
int * FUN_140044e70(longlong param_1,int *param_2,int param_3,float param_4);
undefined8 FUN_140045350(longlong param_1,undefined8 param_2,undefined8 *param_3);
undefined8 FUN_1400453e0(undefined8 param_1,undefined8 param_2,undefined8 *param_3);
undefined8 FUN_140045410(longlong param_1);
undefined8 FUN_140045430(longlong param_1,undefined8 param_2,float *param_3);
undefined8 FUN_1400454c0(undefined8 param_1,undefined8 param_2,undefined4 *param_3);
longlong * FUN_1400454e0(longlong *param_1,float *param_2,float param_3);
float * FUN_1400457c0(longlong param_1,float *param_2);
undefined4 * FUN_140045810(longlong param_1,undefined4 *param_2);
float * FUN_140045840(longlong param_1,float *param_2);
undefined8 FUN_140045890(longlong *param_1,undefined8 param_2);
undefined8 * FUN_1400458b0(longlong param_1,undefined8 *param_2);
float * FUN_1400458d0(longlong param_1,float *param_2);
float * FUN_140045950(longlong param_1,float *param_2);
undefined8 FUN_140045a40(longlong param_1);
ulonglong FUN_140045a60(void);
bool FUN_140046810(void);
int * FUN_140046900(longlong param_1,longlong *param_2,longlong *param_3);
void FUN_140046cb0(HWND param_1);
undefined4 FUN_140046d60(undefined8 param_1,undefined8 param_2);
bool FUN_140046e50(longlong param_1,undefined8 param_2);
undefined1 FUN_140046f40(longlong param_1,undefined8 param_2);
bool FUN_140047140(longlong param_1,undefined8 param_2);
uint FUN_140047280(longlong *param_1,undefined8 param_2);
undefined1 FUN_140047330(longlong param_1,undefined8 param_2);
bool FUN_1400473d0(longlong param_1,undefined8 param_2);
bool FUN_1400475a0(longlong param_1,undefined8 param_2);
bool FUN_1400476c0(longlong param_1,undefined8 param_2);
undefined8 FUN_1400477b0(longlong *param_1,undefined8 param_2);
LRESULT FUN_140047830(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4);
undefined8 FUN_140047af0(int param_1,longlong param_2,uint *param_3);
undefined8 * FUN_140047cc0(undefined8 *param_1,ushort *param_2);
ulonglong FUN_1400481b0(float param_1,float param_2,float param_3);
longlong * FUN_140048340(longlong *param_1);
ulonglong FUN_1400484c0(uint *param_1,uint param_2);
HRESULT FUN_1400488f0(longlong *param_1,undefined8 *param_2);
HRESULT FUN_140048bb0(longlong *param_1,undefined8 *param_2);
void FUN_140048e50(longlong param_1);
void FUN_140048fb0(ulonglong param_1);
void FUN_140049840(HWND param_1,int param_2,undefined4 param_3,undefined4 param_4,HWND param_5);
void FUN_140049af0(HWND param_1,undefined8 *param_2,undefined8 *param_3);
undefined8 FUN_140049d20(longlong param_1,undefined8 param_2,undefined4 param_3);
undefined8 FUN_140049d40(longlong param_1);
ulonglong FUN_140049d70(uint param_1);
undefined8 FUN_14004a260(float *param_1);
undefined8 FUN_14004a3e0(undefined8 param_1,undefined8 param_2,undefined4 *param_3);
undefined8 FUN_14004a400(undefined8 param_1,undefined8 param_2,undefined4 *param_3);
undefined1 FUN_14004a420(HWND param_1);
undefined8 FUN_14004a460(HWND param_1);
undefined8 FUN_14004a510(float *param_1);
undefined1 FUN_14004a6b0(longlong param_1,uint param_2);
int FUN_14004a740(longlong param_1,longlong *param_2,int param_3,float param_4,ulonglong *****param_5,float param_6,float param_7,longlong *param_8);
void FUN_14004ae90(HWND param_1);
void FUN_14004b0d0(HWND param_1,int *param_2,undefined4 param_3);
void FUN_14004b1a0(HWND param_1,char param_2);
void FUN_14004cec0(void);
undefined8 FUN_14004e0e0(int param_1);
void FUN_14004e470(HWND param_1);
void FUN_14004e700(HWND param_1);
void FUN_14004ebd0(void);
void FUN_14004f8f0(void);
void FUN_14004fe00(void);
void FUN_1400503c0(void);
void FUN_140052080(void);
void FUN_140053270(longlong param_1);
undefined8 FUN_140053800(int param_1,longlong param_2,longlong param_3);
longlong * FUN_140053950(longlong *param_1,longlong param_2,longlong *param_3);
uint * FUN_140053f30(uint *param_1,int *param_2,uint param_3,uint param_4);
undefined8 FUN_140054250(longlong param_1);
float * FUN_140054270(longlong param_1,float *param_2,char param_3);
float * FUN_1400545a0(longlong param_1,float *param_2,longlong *param_3);
undefined8 FUN_1400548f0(HANDLE param_1);
void FUN_1400549e0(longlong param_1,float param_2,float param_3);
void FUN_140054a10(longlong param_1,undefined4 param_2,undefined4 param_3);
void FUN_140054a30(longlong param_1,float param_2,float param_3);
void FUN_140054a60(longlong param_1,float param_2,float param_3);
void FUN_140054aa0(longlong param_1,float param_2,float param_3);
void FUN_140054ad0(longlong param_1,float param_2,float param_3);
void FUN_140054b10(longlong param_1,float param_2,float param_3);
void FUN_140054b40(undefined8 *param_1,float *param_2,float param_3,float param_4);
float * FUN_140054ca0(float *param_1);
float * FUN_140054e70(float *param_1);
bool FUN_140054f50(undefined8 param_1,float param_2,float param_3,float param_4,float param_5);
void FUN_140055060(void);
longlong *FUN_140055540(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4);
void FUN_140055690(char param_1);
void FUN_1400557e0(longlong param_1);
longlong * FUN_140055830(longlong *param_1,longlong *param_2);
float FUN_140055a20(char *param_1,ulonglong param_2);
void FUN_140055ac0(void);
void FUN_140056260(HWND param_1);
void FUN_140056560(undefined8 param_1);
void FUN_1400569b0(HWND param_1);
void FUN_140056d60(void);
void FUN_140057460(void);
void FUN_140057b00(undefined4 param_1);
void FUN_140057ec0(HWND param_1,int param_2);
void FUN_140058340(void);
void FUN_14005ccb0(HWND param_1);
void FUN_14005cf10(void);
void FUN_14005d2a0(HWND param_1);
void FUN_14005de40(void);
void FUN_14005e3c0(byte param_1);
void FUN_14005f970(byte param_1);
float * FUN_14005fa60(float *param_1);
LRESULT FUN_14005fc70(tagPOINT param_1,UINT param_2,ulonglong param_3,tagPOINT param_4);
void FUN_140062cf0(longlong param_1,longlong *param_2,longlong *param_3);
void FUN_140063410(undefined8 param_1,undefined8 param_2,undefined8 param_3,HWND param_4);
void FUN_1400634d0(HWND param_1);
void FUN_140063ec0(HWND param_1,HDC param_2);
void FUN_140065960(HWND param_1);
void FUN_140065bb0(HWND param_1);
void FUN_140065ce0(HWND param_1,HDC param_2);
void FUN_140066c40(longlong param_1,HDC param_2,RECT *param_3,int param_4);
void FUN_140067110(HWND param_1,HDC param_2);
void FUN_1400673b0(HWND param_1,HDC param_2);
void FUN_1400674e0(HWND param_1,HDC param_2);
void FUN_140067840(HWND param_1,HDC param_2);
void FUN_140067ae0(undefined8 param_1,HDC param_2,RECT *param_3,LPCWSTR param_4,HGDIOBJ param_5);
void FUN_140067d50(HWND param_1,HDC param_2);
void FUN_140068480(HDC param_1,longlong param_2,RECT *param_3,int *param_4,byte param_5,char param_6,char param_7);
ulonglong FUN_1400688c0(float *param_1);
undefined8 * FUN_1400689d0(longlong param_1,undefined8 *param_2);
undefined4 * FUN_140068b70(undefined4 *param_1,short *param_2);
void FUN_140068c90(void);
void FUN_140068ee0(longlong param_1,undefined8 param_2);
undefined8 FUN_140068f00(longlong param_1,longlong param_2);
undefined8 FUN_140068f80(longlong param_1,ulonglong param_2);
undefined8 FUN_1400690a0(undefined8 param_1);
undefined8 * FUN_140069300(undefined8 *param_1);
void FUN_1400693c0(void);
void FUN_140069790(void);
LRESULT FUN_140069920(HWND param_1,uint param_2,WPARAM param_3,LPARAM param_4);
undefined8 FUN_140069c30(longlong *param_1);
ulonglong FUN_140069d50(longlong param_1,undefined8 param_2);
void FUN_140069df0(undefined8 param_1);
void FUN_140069ea0(HWND param_1,int *param_2,int param_3);
ulonglong FUN_140069ff0(longlong param_1,longlong *param_2);
void FUN_14006a460(void);
void FUN_14006a5b0(void);
void FUN_14006afa0(longlong param_1,HMENU param_2);
void FUN_14006b3c0(int *param_1);
LRESULT FUN_14006b5a0(HWND param_1,uint param_2,WPARAM param_3,longlong param_4);
void FUN_14006ba90(longlong param_1);
void FUN_14006bc10(longlong *param_1,longlong param_2,uint param_3,uint param_4,longlong param_5,float param_6);
longlong FUN_14006bf60(void);
void FUN_14006bfd0(longlong param_1,undefined8 param_2,undefined8 param_3);
void FUN_14006c000(longlong param_1,undefined8 param_2,undefined8 param_3);
undefined8 FUN_14006c030(longlong param_1,longlong *param_2,longlong *param_3);
undefined8 FUN_14006c0a0(longlong param_1,longlong *param_2,longlong *param_3);
undefined8 FUN_14006c110(longlong param_1,longlong *param_2,longlong *param_3);
undefined8 FUN_14006c140(HWND param_1,uint *param_2,uint *param_3);
void FUN_14006c350(char *param_1);
void FUN_14006c610(void);
int FUN_14006c650(undefined8 param_1,int param_2);
void FUN_14006c7b0(longlong param_1);
undefined4 *FUN_14006c8d0(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
undefined8 * FUN_14006cdb0(undefined8 *param_1,uint *param_2);
longlong * FUN_14006e730(longlong *param_1,HWND param_2);
undefined8 * FUN_14006e960(undefined8 *param_1,undefined8 param_2,undefined1 *param_3);
undefined4 * FUN_14006ea40(undefined4 *param_1);
void FUN_14006ec00(float param_1,float param_2);
longlong FUN_14006f120(void);
LRESULT FUN_14006f150(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4);
HGDIOBJ FUN_14006f4a0(HWND param_1,ulonglong param_2,HDC param_3,int *param_4);
int FUN_140070640(int *param_1,int param_2);
LRESULT FUN_1400706d0(HWND param_1,uint param_2,ulonglong param_3,ulonglong param_4);
undefined8 * FUN_140070aa0(undefined8 *param_1);
int FUN_140070d10(HWND param_1,POINT param_2);
int * FUN_140070e00(int *param_1,HWND param_2,int param_3);
LRESULT FUN_140070eb0(HWND param_1,uint param_2,ulonglong param_3,LPARAM param_4);
LRESULT FUN_140071880(HWND param_1,uint param_2,WPARAM param_3,LPARAM param_4);
ulonglong FUN_140071f20(HWND param_1);
ulonglong FUN_140071f90(void);
ulonglong FUN_140072040(void);
void FUN_140072190(void);
LRESULT FUN_140072210(HWND param_1,uint param_2,WPARAM param_3,LPARAM param_4);
void FUN_140072490(HWND param_1);
LRESULT FUN_140072630(HWND param_1,WPARAM param_2);
void FUN_140072670(void);
void FUN_140072e00(void);
void FUN_140072f00(void);
void FUN_140072f60(void);
void FUN_140073010(HWND param_1);
void FUN_140073350(HWND param_1,int param_2);
void FUN_140073490(void);
void FUN_140073ee0(void);
undefined1 FUN_140073f40(int *param_1,int *param_2);
void FUN_140073f90(void);
int FUN_140074530(longlong param_1);
int FUN_1400745a0(longlong param_1);
int FUN_140074600(undefined8 *param_1);
int FUN_140074660(longlong param_1);
int FUN_140074690(longlong param_1);
void FUN_140074700(char param_1);
undefined8 FUN_1400748e0(longlong param_1);
int * FUN_140074900(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
void FUN_140075d70(void);
void FUN_140076870(HWND param_1);
void FUN_140076ba0(void);
void FUN_14007a6c0(HWND param_1,LPCRECT param_2,undefined8 *param_3,undefined8 *param_4);
void FUN_14007b7e0(void);
void FUN_14007b8d0(longlong param_1);
LPCWSTR FUN_14007b9b0(LPCWSTR param_1,undefined8 *param_2);
void FUN_14007c230(longlong param_1);
void FUN_14007c330(undefined8 *param_1,float *param_2,uint param_3,float param_4,float param_5);
void FUN_14007c610(longlong param_1,float *param_2,float *param_3);
void FUN_14007c6c0(longlong param_1,float *param_2,float *param_3);
void FUN_14007c900(longlong param_1,float *param_2,float *param_3);
void FUN_14007c9b0(longlong param_1,float *param_2,float *param_3);
void FUN_14007cb50(longlong param_1,float *param_2,float *param_3);
void FUN_14007cca0(longlong param_1,float *param_2,float *param_3);
void FUN_14007cd80(longlong param_1,float *param_2,float *param_3);
ulonglong FUN_14007d740(int *param_1,longlong *param_2,uint *param_3,LPRECT param_4,char param_5);
undefined8 * FUN_14007e0c0(undefined8 *param_1,undefined8 *param_2);
undefined8 * FUN_14007e590(undefined8 *param_1,longlong param_2,longlong param_3);
void FUN_14007e770(void);
void FUN_14007e9c0(void);
void FUN_14007f230(void);
void FUN_14007f2a0(int param_1);
undefined1 * FUN_14007fbe0(longlong param_1,undefined1 *param_2);
void FUN_14007fd60(longlong param_1,longlong param_2);
undefined8 FUN_14007fd80(longlong param_1,undefined8 param_2,longlong param_3);
void FUN_14007fe40(uint param_1,float *param_2,float *param_3,float *param_4);
ulonglong FUN_14007ffc0(HWND param_1,undefined4 *param_2,undefined4 *param_3);
void FUN_1400801f0(HWND param_1);
void FUN_140080240(longlong param_1,int *param_2,int *param_3);
void FUN_140085770(HWND param_1,HWND param_2,char *param_3);
ulonglong FUN_140085b20(float *param_1,float *param_2);
undefined8 FUN_140085bb0(longlong param_1,longlong param_2,char param_3);
ulonglong FUN_140086550(undefined8 param_1);
undefined8 FUN_140086790(void);
float FUN_140086830(void);
ulonglong FUN_1400868a0(longlong param_1,undefined8 param_2);
void FUN_1400869a0(void);
undefined2 *FUN_140086d30(undefined2 *param_1,HBITMAP param_2,int param_3,UINT param_4,undefined8 *param_5);
short ******* FUN_140087550(short *******param_1,undefined8 *param_2);
void FUN_1400885d0(void);
void FUN_140089110(void);
void FUN_14008aaa0(void);
void FUN_14008ab60(void);
void FUN_14008abc0(void);
void FUN_14008b5b0(void);
void FUN_14008bc80(longlong param_1);
undefined8 * FUN_14008c010(undefined8 *param_1);
void FUN_14008c270(HWND param_1,int param_2);
HGDIOBJ FUN_14008c450(HWND param_1,uint param_2,HDC param_3,LONG_PTR *param_4);
void FUN_14008d660(int param_1);
void FUN_14008db60(int param_1);
undefined8 FUN_14008dbf0(HWND param_1,char param_2);
void FUN_14008e2c0(int param_1);
longlong *FUN_14008e610(longlong *param_1,longlong *param_2,ulonglong param_3,undefined8 *param_4,undefined8 param_5);
void FUN_14008e8d0(int param_1);
void FUN_14008e920(char param_1);
void FUN_14008e9f0(uint param_1);
void FUN_14008eaa0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4);
void FUN_14008eb40(longlong param_1,int param_2);
void FUN_14008ebf0(char param_1);
void FUN_14008edc0(int param_1);
void FUN_14008eef0(HWND param_1,char param_2);
undefined4 * FUN_14008ef80(undefined4 *param_1,HWND param_2);
LRESULT FUN_14008f090(HWND param_1,uint param_2,WPARAM param_3,LPARAM param_4);
LRESULT FUN_14008f580(HWND param_1,uint param_2,WPARAM param_3,HWND param_4);
LPRECT FUN_14008fae0(LPRECT param_1,HWND param_2);
undefined8 * FUN_14008fc10(undefined8 *param_1,HWND param_2,uint param_3);
ulonglong FUN_14008fd80(HWND param_1,uint param_2,WPARAM param_3,LPARAM param_4,undefined8 param_5,longlong param_6);
void FUN_1400916a0(HWND param_1);
HGDIOBJ FUN_140091ca0(HWND param_1,uint param_2,HDC param_3,HWND param_4);
ulonglong FUN_140092070(void);
int FUN_1400924f0(longlong param_1,POINT param_2);
int * FUN_1400927d0(int *param_1,longlong param_2,int param_3);
undefined4 * FUN_140092a10(int param_1);
void FUN_140092a60(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4,uint param_5,int param_6,int param_7,uint param_8);
undefined1 * FUN_140092b60(HWND param_1,uint param_2,HDC param_3,LPRECT param_4);
undefined8 FUN_140096250(HWND param_1);
void FUN_1400963d0(HWND param_1,longlong param_2);
void FUN_140096520(undefined8 *param_1,undefined8 param_2);
void FUN_1400965a0(void);
void FUN_140096900(void);
void FUN_140097040(void);
undefined1 FUN_140097520(undefined8 param_1,undefined4 *param_2,undefined8 param_3);
undefined1 FUN_140097b80(HWND param_1,LPCWSTR param_2,undefined8 *param_3,undefined *param_4,LPCWSTR ***param_5,int param_6);
ulonglong FUN_1400988f0(undefined8 param_1,wchar_t *param_2,undefined8 *****param_3);
char FUN_1400998f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 ****param_4);
void FUN_140099ca0(HWND param_1,RECT *param_2,undefined8 *param_3,undefined8 *param_4);
void FUN_140099f30(longlong param_1);
uint * FUN_140099ff0(uint *param_1,longlong param_2,uint param_3,longlong param_4,longlong param_5,longlong param_6,longlong param_7);
undefined8 FUN_14009a310(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4);
void FUN_14009a770(void);
void FUN_14009a910(tagPOINT param_1,undefined8 param_2,undefined4 param_3,longlong param_4);
undefined1 FUN_14009bad0(char param_1);
void FUN_14009bd50(HWND param_1);
void FUN_14009be60(HWND param_1,int param_2);
undefined8 * FUN_14009c0d0(undefined8 *param_1,undefined8 *param_2);
void FUN_14009c140(int param_1);
void FUN_14009c300(void);
void FUN_14009c4f0(longlong *param_1,undefined8 param_2);
void FUN_14009c560(longlong *param_1,undefined8 *param_2);
LRESULT FUN_14009c5f0(HWND param_1,uint param_2,WPARAM param_3,HWND param_4);
LRESULT FUN_14009ca40(HWND param_1,UINT param_2,ulonglong param_3,LPARAM param_4);
int FUN_14009cd60(float param_1);
HGDIOBJ FUN_14009cde0(HWND param_1,UINT param_2,HDC param_3,LPARAM param_4,undefined8 param_5,longlong param_6);
int FUN_14009d100(POINT param_1);
HGDIOBJ FUN_14009d1c0(LPPAINTSTRUCT param_1,uint param_2,HPEN param_3,LPPAINTSTRUCT param_4);
void FUN_14009f200(HWND param_1,int param_2,int param_3,int param_4);
void FUN_14009f2d0(HDC param_1,int *param_2,COLORREF param_3,COLORREF param_4,int param_5);
int FUN_14009f390(int param_1);
LRESULT FUN_14009f460(HWND param_1,uint param_2,ulonglong param_3,LONG_PTR *param_4);
void FUN_1400a0de0(HWND param_1,UINT param_2,ulonglong param_3,LPARAM param_4,undefined8 param_5,HWND param_6);
LRESULT FUN_1400a0ff0(HWND param_1,uint param_2,WPARAM param_3,LONG_PTR *param_4);
void FUN_1400a26a0(undefined8 param_1,int param_2,int param_3);
undefined8 FUN_1400a2730(HWND param_1,undefined8 param_2);
void FUN_1400a2800(HDC param_1);
HGDIOBJ FUN_1400a2860(HWND param_1,uint param_2,HWND param_3,LONG_PTR *param_4);
LRESULT FUN_1400a3ae0(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4,undefined8 param_5,HWND param_6);
LPRECT FUN_1400a3c10(LPRECT param_1,HWND param_2,int param_3);
char FUN_1400a3fd0(RECT *param_1,POINT param_2);
void FUN_1400a40c0(HWND param_1,int *param_2);
ulonglong FUN_1400a4540(HWND param_1,uint param_2,HDC param_3,tagPOINT param_4,undefined8 param_5,int *param_6);
LRESULT FUN_1400a5cc0(HWND param_1,uint param_2,WPARAM param_3,LONG_PTR *param_4);
undefined8 FUN_1400a6630(longlong param_1);
void FUN_1400a6690(byte param_1);
void FUN_1400a66d0(void);
void FUN_1400a67d0(void);
void FUN_1400a69b0(void);
void FUN_1400a6a60(void);
void FUN_1400a6ad0(int *param_1);
longlong FUN_1400a6cb0(int param_1,int param_2,ulonglong param_3);
uint FUN_1400a6f40(int param_1,float *param_2);
void FUN_1400a7050(int param_1);
uint FUN_1400a7130(POINT param_1);
longlong * FUN_1400a7210(void);
undefined8 * FUN_1400a7670(undefined8 *param_1,undefined8 *param_2);
ulonglong FUN_1400a7780(POINT param_1,int param_2);
float FUN_1400a7820(int param_1);
LRESULT FUN_1400a78a0(HWND param_1,UINT param_2,ulonglong param_3,LPARAM param_4);
LPITEMIDLIST FUN_1400a9ab0(LPBROWSEINFOW param_1);
BOOL FUN_1400a9c90(LPCHOOSECOLORW param_1);
void FUN_1400a9d90(HWND param_1,undefined8 param_2,UINT_PTR param_3);
undefined4 FUN_1400a9e80(HWND param_1);
void FUN_1400a9f70(HWND param_1,uint param_2,WPARAM param_3,longlong param_4);
uint FUN_1400aa150(HWND param_1,LPCWSTR param_2,LPCWSTR param_3,UINT param_4);
undefined1 FUN_1400aa560(void);
undefined8 FUN_1400aa5c0(void);
undefined8 FUN_1400aa6a0(undefined8 param_1);
BOOL FUN_1400aa750(HMENU param_1,UINT param_2,int param_3,int param_4,HWND param_5,LPTPMPARAMS param_6);
void FUN_1400aab30(void);
void FUN_1400aaf50(HWND param_1,byte param_2);
int * FUN_1400aafe0(int *param_1,HWND param_2,longlong param_3);
int FUN_1400ab130(undefined8 param_1,longlong param_2);
LRESULT FUN_1400ab1d0(HWND param_1,uint param_2,WPARAM param_3,LONG_PTR *param_4);
undefined2 * FUN_1400ac0a0(undefined2 *param_1,ulonglong param_2);
ulonglong FUN_1400ad750(undefined8 *param_1,LPCWSTR param_2);
undefined8 FUN_1400adb40(byte *param_1,longlong *param_2);
undefined8 FUN_1400addd0(LPCWSTR param_1,undefined8 *param_2);
undefined1 * FUN_1400ae070(undefined1 *param_1);
undefined1 * FUN_1400ae520(undefined1 *param_1,undefined8 param_2,char *param_3);
void FUN_1400ae8b0(void);
bool FUN_1400aefb0(undefined8 *param_1,undefined8 param_2);
undefined2 * FUN_1400af0d0(undefined2 *param_1);
undefined2 * FUN_1400b0830(undefined2 *param_1);
longlong FUN_1400b1760(void);
void FUN_1400b17e0(void);
undefined8 FUN_1400b1860(void);
ulonglong FUN_1400b1f20(LPCWSTR param_1,LPCWSTR param_2,uint param_3,LPCWSTR param_4);
ulonglong FUN_1400b2140(LPCWSTR param_1,LPCWSTR param_2,LPCWSTR param_3,LPWSTR param_4,DWORD param_5,LPCWSTR param_6);
uint FUN_1400b2630(LPCWSTR param_1,LPCWSTR param_2,LPCWSTR param_3,LPCWSTR param_4);
longlong * FUN_1400b2bc0(longlong *param_1,char *param_2,undefined8 param_3,undefined8 param_4);
undefined8 FUN_1400b2cf0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3);
undefined8 FUN_1400b3090(undefined8 *param_1,undefined8 *param_2,undefined8 *******param_3);
undefined8 * FUN_1400b3560(undefined8 *param_1);
undefined8 * FUN_1400b3630(undefined8 *param_1,LPCWSTR param_2);
ulonglong FUN_1400b3700(char *param_1);
undefined8 * FUN_1400b3cb0(undefined8 *param_1,longlong param_2);
ulonglong FUN_1400b3fa0(HBRUSH param_1,int param_2,ulonglong param_3,HWND param_4,undefined8 param_5,longlong param_6);
LRESULT FUN_1400b50c0(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4);
void FUN_1400b51b0(void);
undefined8 FUN_1400b5220(undefined8 param_1,undefined8 param_2,LPCWSTR param_3);
undefined8 * FUN_1400b5920(undefined8 *param_1);
undefined8 * FUN_1400b5a80(undefined8 *param_1);
longlong * FUN_1400b5bb0(longlong *param_1);
undefined8 * FUN_1400b5ed0(void);
undefined8 * FUN_1400b6040(undefined8 *param_1,LPCSTR param_2);
void FUN_1400b6160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5);
LRESULT FUN_1400b6460(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4);
undefined8 * FUN_1400b6640(undefined8 *param_1,LPCWSTR param_2);
undefined8 * FUN_1400b6770(undefined8 *param_1,ushort *param_2);
ulonglong FUN_1400b6950(HWND param_1);
undefined8 * FUN_1400b6a00(undefined8 *param_1,undefined8 *param_2,uint param_3);
undefined8 FUN_1400b6aa0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4);
void FUN_1400b6ac0(void);
void FUN_1400b6bb0(undefined8 *param_1,float param_2,float param_3,float param_4,float param_5);
void FUN_1400b6dc0(void);
void FUN_1400b7020(void);
void FUN_1400b7140(void);
void FUN_1400b7600(void);
void FUN_1400b7700(void);
void FUN_1400b8d30(undefined8 param_1);
void FUN_1400b8fb0(char param_1);
undefined8 FUN_1400ba2c0(float param_1);
HGDIOBJ FUN_1400ba330(HWND param_1,UINT param_2,HDC param_3,longlong param_4);
undefined8 * FUN_1400baa20(undefined8 *param_1,LPCWSTR param_2);
LRESULT FUN_1400baaf0(HWND param_1,uint param_2,WPARAM param_3,LPARAM param_4);
undefined8 * FUN_1400bb870(undefined8 *param_1,longlong param_2);
HWND FUN_1400bbc30(int param_1);
void FUN_1400bbc80(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4,int param_5);
void FUN_1400bbe10(longlong param_1,uint param_2);
void FUN_1400bbf20(longlong *param_1,undefined4 param_2,undefined8 param_3,DWORD param_4,LONGLONG param_5,LONGLONG param_6,char param_7);
ulonglong FUN_1400bc150(HANDLE param_1,LPCVOID param_2,DWORD param_3,DWORD *param_4);
undefined8 FUN_1400bc1e0(void);
undefined4 FUN_1400bc7f0(longlong param_1,undefined8 *param_2,char param_3);
undefined8 FUN_1400bd5e0(longlong *param_1);
void FUN_1400bd6c0(ulonglong *param_1,ulonglong param_2,undefined8 param_3);
void FUN_1400bd7f0(ulonglong *param_1,ulonglong param_2);
void FUN_1400bd870(ulonglong *param_1,ulonglong param_2);
void FUN_1400bd900(ulonglong *param_1,ulonglong param_2);
void FUN_1400bd990(ulonglong *param_1,ulonglong param_2);
void FUN_1400bda20(ulonglong *param_1,ulonglong param_2);
void FUN_1400bdab0(ulonglong *param_1,ulonglong param_2);
void FUN_1400bdb40(longlong *param_1,longlong param_2,longlong param_3,longlong param_4);
void FUN_1400bdbb0(ulonglong *param_1,ulonglong param_2,longlong param_3,longlong param_4);
void FUN_1400bdc30(ulonglong *param_1,ulonglong param_2,longlong param_3,longlong param_4);
void FUN_1400bdcb0(ulonglong *param_1,ulonglong param_2,longlong param_3,longlong param_4);
void FUN_1400bdd30(longlong *param_1,longlong param_2,longlong param_3,longlong param_4);
void FUN_1400bddb0(ulonglong *param_1,ulonglong param_2,longlong param_3,longlong param_4);
void FUN_1400bde50(ulonglong *param_1,ulonglong param_2,longlong param_3,longlong param_4);
void FUN_1400bdf40(longlong *param_1,longlong param_2,longlong param_3,longlong param_4);
void FUN_1400be000(longlong *param_1,longlong param_2,longlong param_3,longlong param_4);
void FUN_1400be0c0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4);
void FUN_1400be150(longlong *param_1,longlong param_2,longlong param_3,longlong param_4);
void FUN_1400be220(longlong *param_1,ulonglong param_2);
void FUN_1400be2d0(ulonglong *param_1,ulonglong param_2);
void FUN_1400be430(longlong *param_1);
void FUN_1400be450(longlong param_1);
void FUN_1400be470(longlong param_1);
void FUN_1400be4b0(longlong param_1);
void _guard_check_icall(void);
void FUN_1400be500(longlong param_1);
void FUN_1400be560(longlong param_1);
void FUN_1400be5c0(longlong param_1);
uint * FUN_1400be5e0(uint *param_1,uint *param_2);
void FUN_1400be6e0(longlong param_1,ulonglong param_2);
void FUN_1400be8d0(longlong param_1,ulonglong param_2);
longlong * FUN_1400beb70(longlong *param_1,longlong *param_2,longlong *param_3);
undefined4 * FUN_1400bede0(undefined4 *param_1,undefined4 param_2);
int FUN_1400bee00(undefined8 *param_1,ulonglong param_2,undefined8 *param_3,undefined8 param_4);
longlong *FUN_1400befd0(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4);
void FUN_1400bf230(undefined8 *param_1,uint *param_2);
undefined8 FUN_1400bf380(undefined8 param_1,longlong param_2);
void FUN_1400bf3e0(void);
void FUN_1400bf400(undefined8 param_1,undefined8 param_2,undefined8 param_3);
void FUN_1400bf470(undefined4 param_1);
void FUN_1400bf4b0(undefined4 param_1);
void FUN_1400bf4f0(void);
void FUN_1400bf510(ulonglong *param_1);
void FUN_1400bf5d0(ulonglong *param_1);
void FUN_1400bf690(ulonglong *param_1);
void FUN_1400bf750(ulonglong *param_1);
void FUN_1400bf810(longlong *param_1);
void FUN_1400bf8b0(ulonglong *param_1);
void FUN_1400bf970(ulonglong *param_1);
void FUN_1400bf9f0(ulonglong *param_1);
void FUN_1400bfab0(longlong *param_1);
void FUN_1400bfb40(longlong *param_1);
void FUN_1400bfbb0(longlong *param_1);
void FUN_1400bfc60(longlong *param_1);
void FUN_1400bfcd0(longlong *param_1);
longlong * FUN_1400bfd40(longlong param_1,longlong *param_2,longlong *param_3);
longlong * FUN_1400c0030(longlong param_1,longlong *param_2,longlong *param_3);
void FUN_1400c0290(void);
void FUN_1400c02b0(void);
void FUN_1400c02d0(void);
void FUN_1400c02f0(void);
undefined8 * FUN_1400c0310(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3);
void FUN_1400c0480(longlong *param_1,ulonglong param_2,short *param_3);
void FUN_1400c0680(longlong *param_1,ulonglong param_2,int *param_3);
void FUN_1400c0820(ulonglong *param_1,ulonglong param_2,undefined8 param_3);
undefined8 * FUN_1400c09d0(undefined8 *param_1);
undefined * FUN_1400c09e0(longlong *param_1);
int * FUN_1400c0a00(int *param_1,int param_2,undefined8 param_3);
void FUN_1400c0a20(longlong param_1);
void FUN_1400c0af0(longlong *param_1);
void FUN_1400c0b00(longlong *param_1);
undefined8 FUN_1400c0b50(longlong param_1,longlong param_2,longlong param_3);
ulonglong FUN_1400c0bb0(undefined8 *param_1,longlong *param_2);
longlong FUN_1400c0d80(int *param_1,int *param_2,int param_3);
ulonglong FUN_1400c0da0(uint *param_1,uint *param_2);
undefined4 *FUN_1400c10c0(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4);
void FUN_1400c10d0(int *param_1);
int * FUN_1400c1100(undefined8 param_1,int *param_2,int param_3);
undefined4 * FUN_1400c1180(undefined8 param_1,undefined4 *param_2,undefined4 param_3);
void FUN_1400c1190(undefined8 *param_1);
longlong FUN_1400c11d0(longlong param_1,int *param_2,int param_3);
undefined8 FUN_1400c11f0(longlong *param_1,undefined4 param_2,int *param_3);
longlong * FUN_1400c1230(longlong *param_1,ulonglong param_2);
undefined8 * FUN_1400c1270(longlong param_1,undefined8 *param_2,longlong *param_3,longlong *param_4);
undefined8 * FUN_1400c1340(longlong param_1,undefined8 *param_2,longlong *param_3);
void FUN_1400c13f0(int *param_1,uint *param_2,byte param_3);
uint FUN_1400c1730(undefined8 param_1,undefined8 param_2);
void FUN_1400c17f0(int *param_1,int *param_2,int *param_3);
void FUN_1400c2190(int *param_1,int *param_2,int param_3);
void FUN_1400c23a0(int *param_1,int *param_2);
void FUN_1400c2920(undefined1 *param_1,int *param_2);
undefined8 * FUN_1400c2ba0(undefined8 *param_1,undefined8 *param_2);
ulonglong FUN_1400c2c60(undefined8 *param_1,undefined8 param_2,ulonglong param_3);
longlong FUN_1400c2d10(ushort *param_1,ushort *param_2,ulonglong param_3);
longlong FUN_1400c2e70(ushort *param_1,ushort *param_2,ulonglong param_3);
void FUN_1400c2fd0(int *param_1,int *param_2,longlong param_3);
void FUN_1400c33d0(int *param_1,int *param_2);
void FUN_1400c34e0(longlong param_1,int *param_2,int *param_3);
undefined8 FUN_1400c3890(int *param_1,longlong param_2);
void FUN_1400c3a50(int *param_1,int *param_2,longlong param_3,int *param_4,int *param_5);
void FUN_1400c3e70(longlong param_1,longlong param_2);
void FUN_1400c3fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9);
uint FUN_1400c4130(uint param_1);
int FUN_1400c4140(int *param_1);
uint FUN_1400c4150(uint *param_1,undefined8 param_2);
bool FUN_1400c4590(uint *param_1);
void FUN_1400c4610(undefined8 *param_1);
void FUN_1400c4680(longlong param_1,longlong param_2,ulonglong param_3);
undefined4 FUN_1400c4700(undefined4 *param_1);
undefined1 FUN_1400c4710(undefined1 *param_1);
void FUN_1400c4720(longlong param_1);
undefined4 * FUN_1400c4760(undefined4 *param_1,undefined4 param_2);
undefined8 * FUN_1400c4780(undefined8 param_1,undefined8 *param_2,undefined4 param_3);
undefined8 * FUN_1400c47e0(undefined8 param_1,undefined8 *param_2,undefined4 param_3);
longlong * FUN_1400c4880(longlong param_1,longlong *param_2);
void FUN_1400c4a70(undefined1 *param_1,uint *param_2);
char * FUN_1400c51c0(void);
char * FUN_1400c51d0(void);
longlong * FUN_1400c51e0(longlong *param_1);
void FUN_1400c5290(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4);
undefined4 * FUN_1400c5380(uint param_1);
void FUN_1400c5430(undefined8 *param_1,undefined2 param_2);
void FUN_1400c5470(longlong *param_1,undefined4 *param_2);
void FUN_1400c55e0(longlong *param_1,undefined8 *param_2);
void FUN_1400c5750(longlong *param_1,undefined8 *param_2);
void FUN_1400c58c0(longlong *param_1,undefined8 *param_2);
void FUN_1400c5a30(longlong param_1,undefined8 *param_2);
void FUN_1400c5ac0(longlong param_1,undefined8 *param_2);
longlong * FUN_1400c5b40(longlong *param_1);
undefined8 FUN_1400c5b60(undefined8 param_1,longlong *param_2,undefined8 *param_3,longlong *param_4,longlong *param_5);
void FUN_1400c5d00(ulonglong *param_1,ulonglong param_2);
void FUN_1400c5ee0(ulonglong *param_1,ulonglong param_2);
void FUN_1400c5fa0(undefined8 *param_1,ulonglong param_2,char param_3);
void FUN_1400c6040(undefined8 *param_1,ulonglong param_2,undefined2 param_3);
void FUN_1400c60d0(ulonglong *param_1);
int FUN_1400c6f90(short *param_1,int param_2,uint param_3,longlong param_4);
void FUN_1400c7110(int param_1,undefined4 *param_2);
void FUN_1400c73a0(undefined8 param_1);
undefined4 * FUN_1400c73d0(longlong param_1,undefined4 *param_2);
undefined4 * FUN_1400c7460(undefined4 *param_1);
undefined8 * FUN_1400c74c0(undefined8 *param_1,undefined8 *param_2);
undefined8 FUN_1400c75c0(undefined8 param_1,int param_2);
undefined8 FUN_1400c7630(undefined8 param_1,uint param_2);
undefined8 FUN_1400c76f0(undefined8 param_1);
longlong * FUN_1400c7750(longlong *param_1,longlong param_2,uint param_3);
void FUN_1400c7800(undefined8 *param_1);
void FUN_1400c7820(undefined8 *param_1);
void FUN_1400c7840(longlong *param_1);
char * FUN_1400c7870(longlong param_1);
longlong * FUN_1400c7890(longlong param_1);
ulonglong FUN_1400c78b0(ulonglong *param_1,ulonglong *param_2);
undefined * FUN_1400c7a10(void);
int FUN_1400c7a20(longlong param_1,undefined8 param_2,longlong param_3);
void FUN_1400c8290(undefined8 param_1,undefined4 *param_2);
void FUN_1400c8500(undefined8 *param_1,undefined1 *param_2);
void FUN_1400c88d0(longlong param_1,longlong param_2,ulonglong param_3);
int FUN_1400c8f20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
undefined4 FUN_1400c8f80(HINSTANCE param_1);
undefined1 * FUN_1400cb4f0(undefined1 (*param_1) [32],short param_2,ulonglong param_3);
BOOL __stdcall CloseHandle(HANDLE hObject);
DWORD __stdcall GetLastError(void);
BOOL __stdcall SetEvent(HANDLE hEvent);
DWORD __stdcall WaitForSingleObject(HANDLE hHandle,DWORD dwMilliseconds);
HANDLE __stdcall CreateEventW(LPSECURITY_ATTRIBUTES lpEventAttributes,BOOL bManualReset,BOOL bInitialState,LPCWSTR lpName);
BOOL __stdcall FreeLibrary(HMODULE hLibModule);
FARPROC __stdcall GetProcAddress(HMODULE hModule,LPCSTR lpProcName);
int __stdcall MultiByteToWideChar(UINT CodePage,DWORD dwFlags,LPCSTR lpMultiByteStr,int cbMultiByte,LPWSTR lpWideCharStr,int cchWideChar);
int __stdcall WideCharToMultiByte(UINT CodePage,DWORD dwFlags,LPCWSTR lpWideCharStr,int cchWideChar,LPSTR lpMultiByteStr,int cbMultiByte,LPCSTR lpDefaultChar,LPBOOL lpUsedDefaultChar);
void SHGetKnownFolderPath(void);
void __stdcall CoUninitialize(void);
HRESULT __stdcall CoInitializeEx(LPVOID pvReserved,DWORD dwCoInit);
void __stdcall SysFreeString(BSTR bstrString);
UINT __stdcall SysStringLen(BSTR param_1);
undefined1 (*) [32] FUN_1400cb6e0(undefined1 (*param_1) [32],undefined1 (*param_2) [32]);
ulonglong FUN_1400cb7e0(undefined1 (*param_1) [16],longlong param_2);
ulonglong FUN_1400cb840(longlong param_1,ulonglong param_2,ushort *param_3,ulonglong param_4);
ulonglong FUN_1400cba40(longlong param_1,ulonglong param_2,ushort *param_3,ulonglong param_4);
ulonglong FUN_1400cbc50(longlong param_1,ulonglong param_2,undefined1 (*param_3) [16],ulonglong param_4);
undefined1 (*) [32]FUN_1400cbe20(undefined1 (*param_1) [32],undefined1 (*param_2) [32],undefined1 (*param_3) [32],ulonglong param_4);
undefined1 (*) [16]FUN_1400cc1d0(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],longlong param_4);
undefined1 (*) [32]FUN_1400cc580(undefined1 (*param_1) [32],undefined1 (*param_2) [32],byte param_3);
undefined1 (*) [32]FUN_1400cc680(undefined1 (*param_1) [32],undefined1 (*param_2) [32],short param_3);
undefined1 (*) [32]FUN_1400cc780(undefined1 (*param_1) [32],undefined1 (*param_2) [32],uint param_3);
undefined1 (*) [32]FUN_1400cc860(undefined1 (*param_1) [32],undefined1 (*param_2) [32],ulonglong param_3);
undefined1 (*) [32]FUN_1400cc940(undefined1 (*param_1) [32],undefined1 (*param_2) [32],short param_3);
longlong FUN_1400cca70(undefined1 (*param_1) [16],longlong param_2,undefined1 (*param_3) [16],longlong param_4);
longlong FUN_1400cccf0(undefined1 (*param_1) [16],longlong param_2,undefined1 (*param_3) [16],longlong param_4);
longlong FUN_1400ccf30(longlong param_1,ulonglong param_2,ushort *param_3,ulonglong param_4);
ulonglong FUN_1400cd1a0(longlong param_1,ulonglong param_2,ushort *param_3,ulonglong param_4);
ulonglong FUN_1400cd410(longlong param_1,ulonglong param_2,ushort *param_3,ulonglong param_4);
undefined1 (*) [16]FUN_1400cd680(undefined1 (*param_1) [16],ulonglong param_2,undefined1 (*param_3) [16],ulonglong param_4);
undefined1 (*) [32] FUN_1400cd8c0(undefined1 (*param_1) [32],undefined1 (*param_2) [32]);
undefined1 (*) [16] FUN_1400cdab0(undefined1 (*param_1) [16],undefined1 (*param_2) [16]);
undefined1 (*) [32] FUN_1400cdc20(undefined1 (*param_1) [32],undefined1 (*param_2) [32]);
undefined1 (*) [16] FUN_1400cde10(undefined1 (*param_1) [16],undefined1 (*param_2) [16]);
ulonglong FUN_1400cdf80(longlong param_1,longlong param_2,ulonglong param_3);
void FUN_1400ce080(undefined1 (*param_1) [32],undefined1 (*param_2) [32]);
undefined1 (*) [32]FUN_1400ce180(undefined1 (*param_1) [32],undefined1 (*param_2) [32],undefined1 (*param_3) [32],ulonglong param_4);
undefined1 (*) [16]FUN_1400ce400(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],ulonglong param_4);
undefined1 (*) [16]FUN_1400ce5f0(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],longlong param_4);
ulonglong FUN_1400ce820(undefined8 *param_1,uint param_2);
undefined1 (*) [16]thunk_FUN_1400cc1d0(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],longlong param_4);
ulonglong FUN_1400ce8c0(ushort *param_1,ulonglong param_2,ushort *param_3,longlong param_4);
void thunk_FUN_1400cb840(void);
void thunk_FUN_1400cba40(void);
undefined1 (*) [32]thunk_FUN_1400cc940(undefined1 (*param_1) [32],undefined1 (*param_2) [32],short param_3);
undefined1 (*) [32]thunk_FUN_1400cc580(undefined1 (*param_1) [32],undefined1 (*param_2) [32],byte param_3);
undefined1 (*) [32]thunk_FUN_1400cc680(undefined1 (*param_1) [32],undefined1 (*param_2) [32],short param_3);
undefined1 (*) [32]thunk_FUN_1400cc780(undefined1 (*param_1) [32],undefined1 (*param_2) [32],uint param_3);
undefined1 (*) [32]thunk_FUN_1400cc860(undefined1 (*param_1) [32],undefined1 (*param_2) [32],ulonglong param_3);
float * FUN_1400cea40(float *param_1,float *param_2);
float * FUN_1400ceab0(float *param_1,float *param_2);
ulonglong thunk_FUN_1400cdf80(longlong param_1,longlong param_2,ulonglong param_3);
void thunk_FUN_1400ce080(undefined1 (*param_1) [32],undefined1 (*param_2) [32]);
undefined1 (*) [16]thunk_FUN_1400ce400(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],ulonglong param_4);
undefined1 (*) [16]thunk_FUN_1400ce5f0(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],longlong param_4);
undefined1 (*) [32] FUN_1400ceb60(undefined8 param_1,undefined1 (*param_2) [32]);
undefined8 * FUN_1400cec80(undefined8 *param_1,longlong param_2);
undefined8 * FUN_1400cecc0(undefined8 *param_1,undefined8 param_2);
undefined8 * FUN_1400ced10(undefined8 *param_1,longlong param_2);
undefined8 * FUN_1400ced50(undefined8 *param_1,undefined8 param_2);
void FUN_1400ceda0(undefined8 param_1);
void FUN_1400cedd0(undefined8 param_1);
LONGLONG FUN_1400cee00(void);
void FUN_1400cee20(void);
undefined4 FUN_1400cee50(undefined8 *param_1);
DWORD __stdcall GetCurrentThreadId(void);
undefined4 FUN_1400cee80(undefined8 *param_1,DWORD *param_2);
undefined4 FUN_1400cef00(longlong param_1,longlong param_2,DWORD param_3);
void __stdcall Sleep(DWORD dwMilliseconds);
undefined8 FUN_1400cef60(uint *param_1);
undefined8 FUN_1400ceff0(longlong param_1);
undefined8 FUN_1400cf020(longlong param_1);
void FUN_1400cf040(void);
undefined8 *FUN_1400cf130(undefined8 *param_1,undefined4 param_2,undefined8 param_3,longlong param_4);
void FUN_1400cf270(int param_1);
undefined ** FUN_1400cf2c0(void);
void FUN_1400cf2d0(DWORD param_1,longlong *param_2);
HLOCAL __stdcall LocalFree(HLOCAL hMem);
char * FUN_1400cf3c0(int param_1);
int FUN_1400cf3f0(int param_1);
DWORD FUN_1400cf420(HANDLE param_1);
ulonglong FUN_1400cf4a0(void);
undefined8 FUN_1400cf4d0(UINT param_1,LPCWSTR param_2,int param_3,LPSTR param_4,int param_5);
ulonglong FUN_1400cf580(LPCWSTR param_1);
DWORD FUN_1400cf600(HANDLE param_1,LPWIN32_FIND_DATAW param_2);
void FUN_1400cf620(HANDLE param_1);
DWORD FUN_1400cf640(LPCWSTR param_1,undefined8 *param_2,LPVOID param_3);
ulonglong FUN_1400cf6d0(LPCWSTR param_1,DWORD param_2,LPWSTR param_3);
DWORD FUN_1400cf710(LPCWSTR param_1,ulonglong *param_2,uint param_3,uint param_4);
DWORD FUN_1400cfa50(longlong *param_1,undefined8 param_2,undefined4 param_3,uint param_4);
undefined8 FUN_1400cfad0(undefined8 param_1);
void FUN_1400cfe00(longlong param_1);
void FUN_1400d0020(undefined8 *param_1,longlong param_2,longlong param_3);
void FUN_1400d0400(undefined8 *param_1,longlong param_2);
void FUN_1400d07c0(longlong param_1,float *param_2);
void FUN_1400d0a70(undefined8 *param_1,longlong param_2);
void FUN_1400d0bc0(longlong param_1,undefined4 *param_2);
void FUN_1400d0d90(float *param_1,undefined8 *param_2);
void FUN_1400d1030(longlong param_1,float *param_2,longlong param_3,float *param_4,float *param_5,int param_6);
bool FUN_1400d12c0(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,ulonglong param_5,ulonglong param_6,float *param_7,undefined1 *param_8);
void FUN_1400d1ac0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5,longlong param_6);
void FUN_1400d2260(LPVOID param_1);
undefined8 FUN_1400d2270(void);
undefined8 FUN_1400d2280(void);
undefined8 FUN_1400d2290(longlong param_1,longlong *param_2);
undefined4 FUN_1400d2330(longlong param_1,longlong param_2,undefined8 param_3);
void FUN_1400d2c50(float *param_1,int param_2,int param_3);
void FUN_1400d2f30(float *param_1,longlong param_2,longlong param_3,int param_4,int param_5,int param_6);
void FUN_1400d3560(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5,int param_6);
void FUN_1400d3a60(int *param_1,longlong param_2,longlong param_3);
longlong FUN_1400d3e20(longlong *param_1,char *param_2,int param_3);
undefined8 FUN_1400d3e90(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4,char *param_5,char *param_6,char *param_7,char *param_8,char *param_9,int param_10,int param_11);
int FUN_1400d42a0(longlong *param_1,longlong param_2,uint param_3);
void FUN_1400d43e0(longlong param_1,float *param_2,longlong param_3,int param_4,float *param_5);
void FUN_1400d46d0(longlong param_1,longlong param_2,longlong param_3,int param_4,float *param_5,float *param_6);
void FUN_1400d4810(longlong param_1,longlong param_2,int param_3,int param_4,int *param_5);
void FUN_1400d4c30(longlong *param_1,float *param_2,int param_3,int param_4);
void FUN_1400d5030(longlong param_1,longlong param_2,int param_3,int param_4,int *param_5);
void FUN_1400d54e0(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5);
float FUN_1400d5630(longlong param_1,int param_2,int param_3,int param_4,int *param_5,int param_6,float param_7);
void FUN_1400d5f90(float *param_1,float *param_2,float *param_3,int param_4);
bool FUN_1400d6290(longlong param_1,undefined8 param_2);
void FUN_1400d66a0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,undefined4 param_6);
undefined8 FUN_1400d6810(float *param_1,longlong param_2,longlong param_3,int param_4,int param_5,uint param_6);
void FUN_1400d6ad0(longlong param_1,float *param_2,int param_3);
void FUN_1400d6d50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5,undefined4 param_6);
void FUN_1400d6e40(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4);
void FUN_1400d6e80(undefined8 param_1,longlong param_2,float *param_3,undefined8 param_4);
void FUN_1400d73d0(longlong param_1,undefined1 (*param_2) [16],longlong param_3,int param_4,int param_5,undefined8 param_6);
void FUN_1400d7850(ulonglong param_1,ulonglong param_2,uint param_3,int param_4);
void FUN_1400d7bd0(ulonglong *param_1,ulonglong param_2,longlong param_3);
void FUN_1400d8160(longlong param_1,longlong param_2,int param_3,int param_4,int param_5,longlong param_6);
void FUN_1400d8770(longlong param_1,longlong param_2,int param_3);
void FUN_1400d8980(longlong param_1,undefined1 (*param_2) [16],int *param_3,longlong param_4,int param_5,undefined4 param_6,undefined8 param_7);
void FUN_1400d8e10(longlong param_1,longlong param_2,int param_3);
void FUN_1400d90e0(float *param_1,float *param_2,uint param_3);
void FUN_1400d92a0(longlong param_1,longlong param_2,int param_3);
void FUN_1400d9560(ulonglong param_1,ulonglong param_2,uint param_3);
void D2D1CreateFactory(void);
BOOL __stdcall SetWindowSubclass(HWND hWnd,SUBCLASSPROC pfnSubclass,UINT_PTR uIdSubclass,DWORD_PTR dwRefData);
BOOL __stdcall RemoveWindowSubclass(HWND hWnd,SUBCLASSPROC pfnSubclass,UINT_PTR uIdSubclass);
LRESULT __stdcall DefSubclassProc(HWND hWnd,UINT uMsg,WPARAM wParam,LPARAM lParam);
void D3D11CreateDevice(void);
void CreateDirect3D11DeviceFromDXGIDevice(void);
HRESULT __stdcall MFStartup(ULONG Version,DWORD dwFlags);
HRESULT __stdcall MFShutdown(void);
HRESULT __stdcall MFCreateFile(MF_FILE_ACCESSMODE AccessMode,MF_FILE_OPENMODE OpenMode,MF_FILE_FLAGS fFlags,LPCWSTR pwszFileURL,IMFByteStream **ppIByteStream);
HRESULT __stdcall MFCreateMemoryBuffer(DWORD cbMaxLength,IMFMediaBuffer **ppBuffer);
void MFCreateDXGIDeviceManager(void);
HRESULT __stdcall MFCreateSample(IMFSample **ppIMFSample);
HRESULT __stdcall MFCreateAttributes(IMFAttributes **ppMFAttributes,UINT32 cInitialSize);
HRESULT __stdcall MFCreateMediaType(IMFMediaType **ppMFType);
void MFCreateSinkWriterFromURL(void);
NTSTATUS __stdcall BCryptOpenAlgorithmProvider(BCRYPT_ALG_HANDLE *phAlgorithm,LPCWSTR pszAlgId,LPCWSTR pszImplementation,ULONG dwFlags);
NTSTATUS __stdcall BCryptCloseAlgorithmProvider(BCRYPT_ALG_HANDLE hAlgorithm,ULONG dwFlags);
NTSTATUS __stdcall BCryptCreateHash(BCRYPT_ALG_HANDLE hAlgorithm,BCRYPT_HASH_HANDLE *phHash,PUCHAR pbHashObject,ULONG cbHashObject,PUCHAR pbSecret,ULONG cbSecret,ULONG dwFlags);
NTSTATUS __stdcall BCryptHashData(BCRYPT_HASH_HANDLE hHash,PUCHAR pbInput,ULONG cbInput,ULONG dwFlags);
NTSTATUS __stdcall BCryptFinishHash(BCRYPT_HASH_HANDLE hHash,PUCHAR pbOutput,ULONG cbOutput,ULONG dwFlags);
NTSTATUS __stdcall BCryptDestroyHash(BCRYPT_HASH_HANDLE hHash);
NTSTATUS __stdcall BCryptGenRandom(BCRYPT_ALG_HANDLE hAlgorithm,PUCHAR pbBuffer,ULONG cbBuffer,ULONG dwFlags);
void FUN_1400d9750(longlong param_1,longlong param_2,longlong param_3,code *param_4);
void FUN_1400d97d0(longlong param_1,longlong param_2,longlong param_3,code *param_4);
void FUN_1400d9850(longlong param_1,longlong param_2,longlong param_3,code *param_4);
void FUN_1400d98b0(longlong param_1);
void thunk_FUN_1400da5b0(LPVOID param_1);
undefined8 FUN_1400d9910(void);
undefined1 FUN_1400d9960(int param_1);
undefined4 FUN_1400d99a0(uint param_1);
ulonglong FUN_1400d9a40(longlong param_1);
undefined8 FUN_1400d9ae0(char param_1);
undefined1 FUN_1400d9b10(undefined1 param_1,char param_2);
int FUN_1400d9b40(longlong param_1);
void FUN_1400d9b80(undefined4 *param_1);
void _Init_thread_footer(int *param_1);
void FUN_1400d9c30(int *param_1);
void FUN_1400d9cd0(void);
void FUN_1400d9cf0(void);
undefined8 FUN_1400d9d00(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4);
int * FUN_1400d9d20(int *param_1,longlong param_2,int *param_3);
undefined8 FUN_1400d9f00(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4);
void __chkstk(void);
void __cdecl __security_check_cookie(uintptr_t _StackCookie);
undefined8 * FUN_1400da000(undefined8 *param_1,ulonglong param_2);
void FUN_1400da030(void);
undefined8 FUN_1400da0f0(void);
void FUN_1400da100(void);
uint FUN_1400da120(void);
void entry(void);
undefined8 FUN_1400da2c0(void);
undefined8 FUN_1400da570(void);
void FUN_1400da590(void);
void FUN_1400da5b0(LPVOID param_1);
undefined8 FUN_1400da5c0(void);
bool FUN_1400da5d0(void);
void FUN_1400da5e0(void);
void FUN_1400da5f0(undefined4 param_1);
ulonglong FUN_1400da600(void);
undefined8 thunk_FUN_140035650(void);
bool FUN_1400da670(void);
void FUN_1400da6d0(void);
undefined8 FUN_1400da6e0(undefined8 *param_1);
void FUN_1400da740(void);
undefined8 FUN_1400da800(void);
void FUN_1400da810(void);
undefined1 FUN_1400da820(void);
undefined * FUN_1400da830(void);
void FUN_1400da840(void);
bool FUN_1400da860(void);
undefined * FUN_1400da870(void);
undefined * FUN_1400da880(void);
void FUN_1400da890(void);
void FUN_1400da8e0(void);
ulonglong FUN_1400da930(void);
undefined8 FUN_1400da990(void);
void FUN_1400da9a0(void);
undefined8 * FUN_1400da9c0(undefined8 *param_1,longlong param_2);
undefined8 * FUN_1400daa00(undefined8 *param_1,longlong param_2);
undefined8 * FUN_1400daa40(undefined8 *param_1,longlong param_2);
int * FUN_1400daa80(longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5,longlong param_6);
int * FUN_1400dac10(longlong param_1,longlong param_2,longlong param_3,longlong param_4);
int * FUN_1400dad50(longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5,longlong param_6);
undefined8 * FUN_1400daf70(undefined8 *param_1,undefined8 param_2);
undefined8 * FUN_1400daf90(undefined8 *param_1,undefined8 param_2);
undefined8 * FUN_1400dafb0(undefined8 *param_1,undefined8 param_2);
longlong FUN_1400dafd0(longlong *param_1,int param_2,undefined8 param_3,undefined8 param_4,int param_5);
void FUN_1400db130(longlong *param_1);
void __DestructExceptionObject(int *param_1);
void FUN_1400db250(undefined8 param_1,code *UNRECOVERED_JUMPTABLE);
undefined8 FUN_1400db260(longlong param_1);
longlong FUN_1400db2a0(longlong param_1,int *param_2);
undefined8 FUN_1400db2d0(undefined8 *param_1);
longlong FUN_1400db340(void);
longlong FUN_1400db360(void);
void Unwind@1400db380(void);
void FUN_1400db390(longlong *param_1,longlong *param_2);
void FUN_1400db430(undefined8 *param_1);
uint FUN_1400db470(longlong param_1,longlong param_2);
void FUN_1400db4a0(longlong *param_1,byte *param_2);
undefined8 FUN_1400db550(undefined4 *param_1,undefined8 param_2,undefined8 param_3);
undefined8 FUN_1400db5a0(undefined4 *param_1,undefined8 param_2,undefined8 param_3);
longlong FUN_1400db5f0(byte *param_1,byte *param_2,longlong param_3,int param_4,char param_5);
bool FUN_1400db700(undefined8 param_1,longlong param_2);
byte FUN_1400db770(undefined8 param_1,byte *param_2);
void FUN_1400db780(longlong *param_1,DWORD64 *param_2,longlong param_3);
void FUN_1400db8b0(longlong *param_1,undefined8 param_2,byte *param_3);
longlong * FUN_1400db8f0(longlong *param_1,DWORD64 *param_2,longlong param_3,longlong *param_4);
longlong * FUN_1400db9f0(longlong *param_1,undefined8 param_2,byte *param_3,longlong *param_4);
undefined8 *FUN_1400dba20(undefined8 *param_1,undefined8 param_2,int param_3,longlong param_4,longlong param_5);
undefined8 * FUN_1400dbb50(undefined8 *param_1,int *param_2,int param_3);
void FUN_1400dbcd0(undefined8 *param_1,ULONG_PTR param_2,ULONG_PTR param_3,ULONG_PTR param_4,ULONG_PTR param_5,ULONG_PTR param_6,int param_7,undefined8 param_8,undefined8 param_9,undefined8 *param_10,byte param_11);
void FUN_1400dbe00(undefined8 *param_1,ULONG_PTR param_2,ULONG_PTR param_3,ULONG_PTR param_4,ULONG_PTR param_5,undefined8 param_6,int param_7,int param_8,longlong param_9,undefined8 *param_10,byte param_11);
void FUN_1400dbf80(longlong param_1,longlong param_2);
undefined8 * _CreateFrameInfo(undefined8 *param_1,undefined8 param_2);
void FUN_1400dc1b0(longlong param_1);
undefined8 FUN_1400dc210(void);
undefined8 FUN_1400dc230(void);
void FUN_1400dc250(undefined8 param_1);
void FUN_1400dc270(undefined8 param_1);
void FUN_1400dc290(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4);
void FUN_1400dc310(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4);
undefined8 FUN_1400dc3d0(PEXCEPTION_RECORD param_1,PVOID param_2,undefined8 param_3,longlong *param_4);
undefined1 FUN_1400dc5f0(void);
undefined1 FUN_1400dc620(char param_1);
PVOID FUN_1400dc660(void);
undefined4 FUN_1400dc740(void);
undefined1 FUN_1400dc7b0(void);
int FUN_1400dc7e0(longlong *param_1,ulonglong *param_2,longlong param_3);
undefined4 GetUnwindTryBlock(undefined8 param_1,undefined8 param_2,longlong param_3);
void FUN_1400dc8a0(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 param_4);
void SetUnwindTryBlock(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4);
undefined4 FUN_1400dc8f0(longlong param_1,ulonglong *param_2);
int FUN_1400dc960(longlong param_1,ulonglong *param_2);
undefined4 FUN_1400dca60(longlong param_1,longlong param_2,ulonglong param_3);
int FUN_1400dcad0(longlong param_1,longlong param_2,ulonglong param_3);
char FUN_1400dcbc0(longlong param_1,longlong *param_2,uint *param_3,byte *param_4);
char FUN_1400dcda0(longlong param_1,longlong *param_2,longlong param_3,byte *param_4);
void FUN_1400dcf90(longlong param_1,longlong *param_2,int *param_3,longlong param_4);
void FUN_1400dd050(longlong param_1,longlong *param_2,longlong param_3,longlong param_4);
void FUN_1400dd110(int *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,uint *param_5,char param_6,int param_7,undefined8 param_8);
void FUN_1400dd6c0(int *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,byte *param_5,char param_6,int param_7,undefined8 param_8);
void FUN_1400ddc70(int *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,longlong param_5,int param_6,undefined4 param_7,undefined8 param_8);
void FUN_1400dded0(int *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,longlong param_5,int param_6,undefined4 param_7,undefined8 param_8);
undefined8 FUN_1400de240(byte *param_1,byte *param_2,uint *param_3);
undefined8 FUN_1400de370(longlong param_1,byte *param_2,uint *param_3);
undefined8 FUN_1400de4a0(int *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,uint *param_5,int param_6,undefined8 param_7,byte param_8);
undefined8 FUN_1400de6d0(int *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,byte *param_5,int param_6,undefined8 param_7,byte param_8);
void FUN_1400de930(void);
undefined4 FUN_1400de940(void);
uint * FUN_1400de9a0(uint *param_1,longlong param_2,longlong param_3);
undefined8 * FUN_1400dea90(undefined8 *param_1,longlong param_2);
undefined8 * FUN_1400dead0(undefined8 *param_1);
undefined8 FUN_1400deb00(longlong param_1);
longlong FUN_1400ded10(longlong param_1);
void FUN_1400def70(longlong param_1);
undefined8 FUN_1400df100(undefined8 *param_1,longlong param_2,undefined4 *param_3);
int __cdecl ExFilterRethrowFH4(_EXCEPTION_POINTERS *param_1,EHExceptionRecord *param_2,int param_3,int *param_4);
void FUN_1400df1c0(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4);
void FUN_1400df370(longlong *param_1,ulonglong param_2,longlong param_3,int param_4);
int FUN_1400df750(undefined8 param_1,longlong param_2,undefined8 param_3);
uint FUN_1400df7c0(longlong param_1,longlong param_2);
undefined1 FUN_1400df800(longlong param_1,int *param_2);
undefined8 FUN_1400df910(int *param_1);
void FUN_1400df9a0(longlong param_1,longlong *param_2);
void FUN_1400dfa40(undefined8 param_1,code *UNRECOVERED_JUMPTABLE,undefined8 param_3);
void FUN_1400dfa50(undefined8 param_1,code *UNRECOVERED_JUMPTABLE,undefined8 param_3,undefined4 param_4);
int FUN_1400dfa60(undefined8 *param_1,int param_2,longlong param_3,int param_4,undefined8 *param_5);
void FUN_1400dfb40(longlong param_1,uint param_2);
void FUN_1400dfd60(void);
void FUN_1400dfd80(void);
void FUN_1400dfd90(void);
void __except_validate_context_record(void);
undefined4 FUN_1400dfde0(void);
undefined1 FUN_1400dfe70(void);
void _CallSettingFrame(undefined8 param_1,undefined8 *param_2);
void FUN_1400dff40(undefined8 param_1,undefined8 *param_2);
void FUN_1400dff70(undefined8 param_1,undefined8 *param_2);
void _CallSettingFrameEncoded(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4);
longlong FUN_1400dffe8(longlong *param_1);
longlong FUN_1400e0050(longlong *param_1);
longlong FUN_1400e00bc(longlong param_1,longlong param_2);
void FUN_1400e0108(int param_1,DWORD param_2,DWORD param_3);
void FUN_1400e0278(undefined8 param_1);
void FUN_1400e0280(void);
void FUN_1400e031c(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5,undefined8 param_6);
void FUN_1400e03d4(void);
void __cdecl _invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5);
_LocaleUpdate * __thiscall _LocaleUpdate::_LocaleUpdate(_LocaleUpdate *this,__crt_locale_pointers *param_1);
void FUN_1400e04d8(wint_t param_1);
ushort FUN_1400e04e4(ushort param_1,__crt_locale_pointers *param_2);
void FUN_1400e05e0(undefined8 param_1);
int __cdecl isdigit(int _C);
uint FUN_1400e0698(uint param_1,__crt_locale_pointers *param_2);
int __cdecl tolower(int _C);
uint FUN_1400e07f8(uint param_1);
void FUN_1400e08c8(undefined4 param_1);
void FUN_1400e08f0(undefined4 param_1,longlong param_2);
undefined * FUN_1400e0914(void);
undefined * FUN_1400e0938(void);
undefined8 FUN_1400e0960(short *param_1,longlong param_2,longlong param_3);
undefined4 FUN_1400e09f0(short *param_1,longlong param_2,longlong param_3,longlong param_4);
longlong FUN_1400e0b40(short *param_1,undefined8 param_2);
undefined8 FUN_1400e0ba0(longlong param_1,longlong param_2);
void FUN_1400e0bd0(ushort *param_1,ushort *param_2);
void FUN_1400e0c30(ushort *param_1,ushort *param_2);
int FUN_1400e0c60(ushort *param_1,ushort *param_2,longlong *param_3);
LPVOID _malloc_base(ulonglong param_1);
undefined4 FUN_1400e0e38(longlong param_1,longlong *param_2,__crt_locale_pointers *param_3);
undefined8 common_strtod_l<>(longlong param_1,longlong *param_2,__crt_locale_pointers *param_3);
undefined8 parse_floating_point<>(longlong param_1,undefined8 *param_2,longlong param_3);
undefined8 parse_floating_point<>(longlong param_1,undefined8 *param_2,longlong param_3);
ulonglong FUN_1400e10c4(longlong *param_1,longlong *param_2,int *param_3);
undefined8 FUN_1400e1e90(short *param_1,longlong *param_2,short *param_3);
undefined8 FUN_1400e1ffc(ushort *param_1,longlong *param_2,ushort *param_3);
undefined8 FUN_1400e2224(ushort *param_1,undefined8 *param_2);
undefined8 FUN_1400e2270(ushort *param_1,undefined8 *param_2);
SLD_STATUS FUN_1400e22bc(int param_1,floating_point_string *param_2,uint *param_3);
SLD_STATUS FUN_1400e2424(int param_1,floating_point_string *param_2,ulonglong *param_3);
undefined8 FUN_1400e25fc(undefined8 *param_1);
undefined8 FUN_1400e2638(undefined8 *param_1);
undefined8 FUN_1400e2674(ulonglong param_1,int param_2,longlong param_3,char param_4,undefined8 *param_5);
void FUN_1400e2a2c(uint *param_1,uint param_2,undefined8 param_3,byte param_4,longlong param_5);
undefined8 FUN_1400e2b8c(uint *param_1,undefined8 *param_2);
SLD_STATUS __cdecl __crt_strtox::convert_hexadecimal_string_to_floating_type_common(floating_point_string *param_1,floating_point_value *param_2);
ulonglong FUN_1400e4940(uint *param_1,uint *param_2);
uint FUN_1400e4dcc(int param_1,uint param_2,_locale_t param_3);
errno_t __cdecl memcpy_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount);
void FUN_1400e4ecc(undefined8 param_1,undefined8 param_2);
void FUN_1400e4ed4(undefined8 param_1,undefined8 param_2);
undefined8 FUN_1400e4edc(byte param_1,ulonglong param_2);
uint FUN_1400e4f14(longlong param_1,longlong *param_2,uint param_3,uint param_4);
ulonglong FUN_1400e56b0(longlong param_1,longlong *param_2,uint param_3,byte param_4);
ulonglong FUN_1400e598c(longlong param_1,longlong *param_2,uint param_3,byte param_4);
void FUN_1400e6110(longlong param_1);
undefined8 FUN_1400e6188(undefined8 param_1,undefined8 *param_2,undefined8 param_3);
undefined4 FUN_1400e623c(undefined8 param_1,undefined8 *param_2,undefined8 param_3);
void FUN_1400e62f0(void);
undefined8 FUN_1400e6348(undefined8 param_1);
ulonglong FUN_1400e63fc(ulonglong param_1,undefined1 *param_2,ulonglong param_3,longlong param_4,longlong param_5,undefined8 param_6);
ulonglong FUN_1400e65ac(ulonglong param_1,undefined2 *param_2,ulonglong param_3,longlong param_4,longlong param_5,undefined8 param_6);
bool FUN_1400e6764(longlong param_1,ulonglong param_2,longlong param_3);
bool FUN_1400e680c(longlong param_1,ulonglong param_2,longlong param_3);
bool __cdecl __crt_stdio_output::is_wide_character_specifier<wchar_t>(__uint64 param_1,wchar_t param_2,length_modifier param_3);
uint FUN_1400e68f8(longlong param_1,longlong *param_2,uint param_3,byte param_4);
uint FUN_1400e6bac(longlong param_1,longlong *param_2,uint param_3,uint param_4);
ulonglong FUN_1400e7318(longlong param_1,undefined1 param_2);
ulonglong FUN_1400e751c(longlong param_1,undefined1 param_2);
ulonglong FUN_1400e7728(longlong param_1,undefined1 param_2);
ulonglong FUN_1400e792c(longlong param_1,undefined1 param_2);
ulonglong FUN_1400e7b38(longlong param_1,undefined1 param_2);
ulonglong FUN_1400e7d3c(longlong param_1,undefined1 param_2);
void FUN_1400e7f48(longlong param_1,uint param_2);
void FUN_1400e7fb8(longlong param_1,uint param_2);
void FUN_1400e803c(longlong param_1,uint param_2,byte param_3);
void FUN_1400e80e8(longlong param_1,uint param_2,byte param_3);
void FUN_1400e81a8(longlong param_1,uint param_2,byte param_3);
void FUN_1400e822c(longlong param_1,uint param_2,byte param_3);
void FUN_1400e82cc(longlong param_1,ulonglong param_2);
void FUN_1400e833c(longlong param_1,ulonglong param_2);
void FUN_1400e83c4(longlong param_1,ulonglong param_2,byte param_3);
void FUN_1400e8474(longlong param_1,ulonglong param_2,byte param_3);
void FUN_1400e8538(longlong param_1,ulonglong param_2,byte param_3);
void FUN_1400e85bc(longlong param_1,ulonglong param_2,byte param_3);
void FUN_1400e865c(char *param_1,longlong *param_2);
undefined1 FUN_1400e86c8(longlong param_1,undefined4 *param_2);
undefined1 FUN_1400e8758(longlong param_1,undefined4 *param_2);
undefined4 FUN_1400e87e8(longlong param_1);
undefined4 FUN_1400e8b50(longlong param_1);
ulonglong FUN_1400e8e0c(byte *param_1);
ulonglong FUN_1400e8f94(byte *param_1);
undefined8 FUN_1400e9144(longlong param_1);
undefined8 FUN_1400e95b4(longlong param_1);
undefined8 FUN_1400e9b2c(longlong param_1);
undefined8 FUN_1400e9ba8(__uint64 *param_1);
undefined8 FUN_1400e9c1c(undefined8 *param_1);
undefined8 FUN_1400e9e78(undefined8 *param_1);
undefined8 FUN_1400ea0f4(longlong param_1);
undefined8 FUN_1400ea1c8(__uint64 *param_1);
ulonglong FUN_1400ea28c(longlong param_1);
undefined8 FUN_1400ea344(longlong param_1);
undefined8 FUN_1400ea3e0(__uint64 *param_1);
int FUN_1400ea47c(longlong param_1,int param_2);
void __thiscall __crt_stdio_output::string_output_adapter<char>::write_string(string_output_adapter<char> *this,char *param_1,int param_2,int *param_3,__crt_deferred_errno_cache *param_4);
void __thiscall __crt_stdio_output::string_output_adapter<wchar_t>::write_string(string_output_adapter<wchar_t> *this,wchar_t *param_1,int param_2,int *param_3,__crt_deferred_errno_cache *param_4);
int FUN_1400ea688(undefined8 param_1,undefined1 *param_2,longlong param_3,longlong param_4,undefined4 *param_5);
int FUN_1400ea79c(undefined8 param_1,undefined2 *param_2,longlong param_3,longlong param_4,undefined4 *param_5);
uint FUN_1400ea8b0(uint param_1);
ulonglong FUN_1400ea900(ulonglong param_1);
int FUN_1400ea970(undefined4 param_1);
void FUN_1400ea9d4(void);
void FUN_1400ea9f4(undefined8 *param_1);
void __cdecl common_end_thread(uint param_1);
undefined8 * FUN_1400eaac0(LPCWSTR param_1,undefined8 param_2);
HANDLE FUN_1400eab24(LPSECURITY_ATTRIBUTES param_1,ulonglong param_2,longlong param_3,undefined8 param_4,DWORD param_5,DWORD *param_6);
void FUN_1400eac04(uint param_1);
float FUN_1400eac10(float param_1,float param_2);
undefined8 FUN_1400ead50(float param_1,float param_2);
ulonglong FUN_1400ead70(float param_1,float param_2);
double FUN_1400eb170(void);
ulonglong FUN_1400eb240(void);
undefined8 FUN_1400eb2e0(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
undefined8 FUN_1400eb580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4);
ulonglong FUN_1400eb7a0(void);
ulonglong FUN_1400eb830(ulonglong param_1,float param_2);
ulonglong FUN_1400ebb90(undefined8 param_1,undefined8 param_2);
ulonglong FUN_1400ebd90(undefined8 param_1,undefined8 param_2);
ulonglong FUN_1400ebf90(undefined8 param_1,double param_2,undefined8 param_3);
double FUN_1400ece50(double param_1,double param_2);
undefined8 FUN_1400ed3c0(undefined8 param_1);
undefined8 FUN_1400ed730(void);
double FUN_1400eda80(double param_1);
float FUN_1400edb40(float param_1);
ulonglong FUN_1400edbe0(ulonglong param_1);
void FUN_1400edc00(uint param_1);
ulonglong FUN_1400ede70(undefined1 (*param_1) [32],ulonglong param_2);
ulonglong FUN_1400ee000(undefined1 (*param_1) [32]);
ulonglong FUN_1400ee150(undefined1 (*param_1) [32],ulonglong param_2);
undefined8 FUN_1400ee358(void);
void __acrt_uninitialize_stdio(bool param_1);
void FUN_1400ee4d4(longlong param_1);
void FUN_1400ee4e0(longlong param_1);
LPVOID _calloc_base(ulonglong param_1,ulonglong param_2);
void thunk_FUN_1400f11f0(LPVOID param_1);
undefined4 FUN_1400ee508(void);
undefined4 FUN_1400ee538(longlong param_1,longlong param_2);
undefined4 FUN_1400ee5b4(longlong param_1,longlong param_2);
undefined4 FUN_1400ee65c(undefined4 param_1);
double FUN_1400ee700(void);
LPVOID _realloc_base(LPVOID param_1,ulonglong param_2);
double FUN_1400eecc0(void);
bool FUN_1400eed80(undefined8 param_1);
void FUN_1400eedc0(undefined8 param_1);
ulonglong FUN_1400eedd0(void);
ulonglong _set_new_handler(ulonglong param_1);
undefined4 FUN_1400eee7c(int param_1,undefined8 param_2);
void operator()<>(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined4 *param_4);
void FUN_1400ef020(undefined8 *param_1);
void FUN_1400ef0e0(undefined4 param_1,undefined4 param_2,int param_3);
void FUN_1400ef1c4(UINT param_1,char param_2);
void FUN_1400ef1f4(uint param_1);
void FUN_1400ef258(undefined8 param_1);
void FUN_1400ef270(void);
void FUN_1400ef280(undefined8 param_1);
void FUN_1400ef28c(ulonglong param_1);
void FUN_1400ef2c8(undefined8 param_1);
void FUN_1400ef2d4(short *param_1,undefined8 *param_2,short *param_3,longlong *param_4,longlong *param_5);
undefined8 __acrt_allocate_buffer_for_argv(ulonglong param_1,ulonglong param_2,ulonglong param_3);
int FUN_1400ef4d8(int param_1);
undefined8 FUN_1400ef654(void);
longlong * FUN_1400ef6c4(short *param_1);
void free_environment<>(longlong *param_1);
void uninitialize_environment_internal<>(longlong *param_1);
void uninitialize_environment_internal<>(longlong *param_1);
void FUN_1400ef860(void);
undefined8 thunk_FUN_1400ef654(void);
undefined4 operator()<>(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined4 *param_4);
undefined4 operator()<>(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined4 *param_4);
undefined8 FUN_1400ef924(undefined8 *param_1);
undefined8 FUN_1400efad4(undefined8 *param_1);
void FUN_1400efbec(undefined8 param_1);
void FUN_1400efbfc(undefined8 param_1);
undefined8 _initialize_onexit_table(longlong *param_1);
void _register_onexit_function(undefined8 param_1,undefined8 param_2);
undefined1 FUN_1400efcc4(void);
undefined1 FUN_1400efce8(void);
undefined1 FUN_1400efcf8(void);
undefined8 FUN_1400efd40(void);
undefined1 FUN_1400efd80(void);
void FUN_1400efddc(void);
undefined4 FUN_1400efdf0(bool param_1);
undefined4 FUN_1400efe28(void);
void FUN_1400efe30(undefined4 param_1);
undefined8 FUN_1400efe40(void);
void FUN_1400efe60(undefined8 param_1);
undefined8 FUN_1400efe70(undefined8 param_1);
void FUN_1400efea0(ulonglong param_1);
ushort * _get_wide_winmain_command_line(void);
void FUN_1400eff18(undefined8 *param_1,undefined8 *param_2);
undefined8 FUN_1400eff50(undefined8 *param_1,undefined8 *param_2);
errno_t __cdecl _set_fmode(int _Mode);
void __thiscall __crt_seh_guarded_call<void>::operator()<>(__crt_seh_guarded_call<void> *this,<> *param_1,<> *param_2,<> *param_3);
undefined4 FUN_1400f003c(void);
void __acrt_uninitialize_locale(void);
int __cdecl _configthreadlocale(int _Flag);
undefined4 FUN_1400f00f0(void);
uint FUN_1400f0100(uint param_1);
undefined * FUN_1400f012c(void);
undefined8 FUN_1400f0140(char *param_1,longlong param_2,longlong param_3);
void operator()<>(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4);
void operator()<>(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4);
void operator()<>(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4);
void operator()<>(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4);
void __cdecl construct_ptd_array(__acrt_ptd *param_1);
void FUN_1400f03b8(__acrt_ptd *param_1);
void __cdecl destroy_ptd_array(__acrt_ptd *param_1);
__acrt_ptd * FUN_1400f04d0(void);
void __cdecl replace_current_thread_locale_nolock(__acrt_ptd *param_1,__crt_locale_data *param_2);
void FUN_1400f05f0(void);
void FUN_1400f060c(void);
PVOID FUN_1400f0650(void);
PVOID FUN_1400f06e0(undefined8 param_1,longlong param_2);
undefined4 FUN_1400f073c(void);
undefined4 FUN_1400f0780(void);
int __cdecl iswctype(wint_t _C,wctype_t _Type);
void __acrt_update_locale_info(longlong param_1,longlong *param_2);
void FUN_1400f0850(longlong param_1,longlong *param_2,longlong param_3);
void FUN_1400f0888(longlong param_1,longlong *param_2);
void FUN_1400f08bc(longlong param_1,longlong *param_2,longlong param_3);
void __acrt_LCMapStringW(undefined8 param_1,undefined4 param_2,undefined8 param_3,int param_4,undefined8 param_5,undefined4 param_6);
undefined8 FUN_1400f097c(void);
int __cdecl _isctype_l(int _C,int _Type,_locale_t _Locale);
ulonglong FUN_1400f0ab4(longlong *param_1,undefined8 param_2,uint param_3,char *param_4,int param_5,undefined8 param_6,int param_7,int param_8,int param_9);
void __acrt_LCMapStringA(__crt_locale_pointers *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9);
LPVOID _malloc_base(ulonglong param_1);
void fegetround(void);
ulonglong FUN_1400f0ef4(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined4 *param_4);
void __acrt_get_sigabrt_handler(void);
void FUN_1400f0f6c(undefined8 param_1);
undefined8 FUN_1400f0f8c(uint param_1);
void FUN_1400f11f0(LPVOID param_1);
undefined8 FUN_1400f1248(double *param_1,undefined1 *param_2,ulonglong param_3,undefined8 param_4,undefined8 param_5,uint param_6,byte param_7,undefined4 param_8,__acrt_rounding_mode param_9,longlong param_10);
void FUN_1400f15dc(undefined8 *param_1,undefined1 *param_2,longlong param_3,undefined8 param_4,undefined8 param_5,int param_6,undefined1 param_7,undefined4 param_8,undefined4 param_9,ulonglong param_10);
undefined8 FUN_1400f16e0(undefined1 *param_1,ulonglong param_2,int param_3,char param_4,int param_5,int *param_6,byte param_7,longlong param_8);
void FUN_1400f18c4(undefined8 *param_1,undefined1 *param_2,longlong param_3,undefined8 param_4,undefined8 param_5,int param_6,undefined4 param_7,undefined8 param_8);
undefined8 FUN_1400f199c(undefined1 *param_1,undefined8 param_2,int param_3,int *param_4,char param_5,longlong param_6);
void FUN_1400f1aec(undefined8 *param_1,undefined1 *param_2,longlong param_3,undefined8 param_4,undefined8 param_5,int param_6,undefined1 param_7,undefined4 param_8,undefined4 param_9,undefined8 param_10);
bool __cdecl should_round_up(double *param_1,__uint64 param_2,short param_3,__acrt_rounding_mode param_4);
undefined8 FUN_1400f1d58(ulonglong *param_1,undefined1 *param_2,ulonglong param_3,longlong param_4,longlong param_5,int param_6,undefined4 param_7,ulonglong param_8,uint param_9,longlong param_10);
undefined4 FUN_1400f2040(int *param_1,undefined1 *param_2,ulonglong param_3,ushort param_4,longlong param_5);
int FUN_1400f21f0(ushort *param_1,byte *param_2,ulonglong param_3,longlong param_4);
ulonglong FUN_1400f2368(byte *param_1);
ulonglong FUN_1400f23a0(ulonglong param_1,byte *param_2,ulonglong param_3,uint *param_4,undefined8 param_5);
undefined8 FUN_1400f2560(undefined8 param_1,uint param_2,int *param_3,undefined8 param_4);
void FUN_1400f2604(undefined2 *param_1);
longlong FUN_1400f264c(ushort *param_1,undefined8 *param_2,ulonglong param_3,undefined8 param_4,longlong param_5);
undefined4 FUN_1400f2804(longlong param_1);
bool FUN_1400f282c(void);
void FUN_1400f2844(void);
void FUN_1400f2944(void);
bool __acrt_initialize_lowio(void);
undefined1 __acrt_uninitialize_lowio(void);
uint FUN_1400f2ad0(uint param_1);
void FUN_1400f2b10(uint param_1);
void FUN_1400f2be0(void);
void FUN_1400f2c10(uint *param_1,ulonglong *param_2,ulonglong param_3,int param_4,uint *param_5,uint *param_6,int param_7);
void FUN_1400f2f20(void);
void FUN_1400f2f50(int param_1);
LPVOID _calloc_base(ulonglong param_1,ulonglong param_2);
FARPROC FUN_1400f3008(uint param_1,LPCSTR param_2,uint *param_3,uint *param_4);
undefined8 FUN_1400f31bc(undefined8 param_1);
undefined8 FUN_1400f3218(undefined8 param_1);
DWORD __stdcall FlsAlloc(PFLS_CALLBACK_FUNCTION lpCallback);
BOOL __stdcall FlsFree(DWORD dwFlsIndex);
PVOID __stdcall FlsGetValue(DWORD dwFlsIndex);
void FUN_1400f328c(void);
BOOL __stdcall FlsSetValue(DWORD dwFlsIndex,PVOID lpFlsData);
BOOL __stdcall InitializeCriticalSectionEx(LPCRITICAL_SECTION lpCriticalSection,DWORD dwSpinCount,DWORD Flags);
void FUN_1400f32a8(undefined8 param_1,DWORD param_2,LPCWSTR param_3,int param_4,LPWSTR param_5,int param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9);
void FUN_1400f339c(undefined8 param_1,undefined4 param_2);
undefined8 FUN_1400f3400(undefined4 param_1);
void FUN_1400f3450(void);
bool FUN_1400f3494(void);
bool FUN_1400f34c4(void);
undefined8 __acrt_uninitialize_winapi_thunks(char param_1);
void FUN_1400f354c(void);
bool FUN_1400f358c(void);
uint FUN_1400f35c0(void);
uint FUN_1400f35e0(uint param_1,uint param_2);
undefined4 FUN_1400f3660(void);
void FUN_1400f3670(undefined4 param_1);
void FUN_1400f3680(uint param_1);
uint FUN_1400f36a0(void);
uint FUN_1400f36b0(uint param_1,ulonglong *param_2);
undefined8 FUN_1400f37c0(undefined8 param_1,undefined4 param_2,undefined8 param_3,int param_4,undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,int param_9);
float FUN_1400f3900(undefined8 param_1,undefined4 param_2,float param_3,int param_4,undefined4 param_5,undefined8 param_6,float param_7,float param_8,int param_9);
ulonglong FUN_1400f3a40(ulonglong param_1);
uint FUN_1400f3a60(uint param_1);
undefined8 FUN_1400f3a70(float param_1,float param_2);
undefined8 FUN_1400f3e50(void);
ulonglong FUN_1400f3f50(ulonglong param_1);
ulonglong FUN_1400f40a0(ulonglong param_1);
uint FUN_1400f4290(double param_1);
void FUN_1400f4310(uint param_1);
void FUN_1400f43a0(undefined8 param_1);
ulonglong FUN_1400f43c0(ulonglong param_1,undefined8 param_2,undefined4 param_3);
void FUN_1400f4470(uint param_1);
void FUN_1400f4500(void);
void FUN_1400f4520(void);
undefined4 FUN_1400f4540(undefined8 param_1,undefined8 param_2,int param_3,undefined4 param_4,undefined8 param_5);
undefined4 FUN_1400f45e0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined8 param_5);
undefined4 FUN_1400f4690(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
ulonglong FUN_1400f4800(ulonglong param_1);
void __remainder_piby2d2f_forC(ulonglong param_1,double *param_2,uint *param_3);
ulonglong FUN_1400f4ba0(ulonglong param_1);
int FUN_1400f4e18(void);
void FUN_1400f4ecc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4);
void FUN_1400f4f68(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4);
int __cdecl common_flush_all(bool param_1);
undefined8 FUN_1400f50ac(int *param_1,undefined8 param_2);
int FUN_1400f5138(undefined4 param_1);
int __cdecl common_flush_all(bool param_1);
void __acrt_stdio_free_buffer_nolock(undefined8 *param_1);
BOOL FUN_1400f5258(__crt_locale_pointers *param_1,DWORD param_2,undefined8 param_3,undefined4 param_4,LPWORD param_5,int param_6,int param_7);
undefined4 FUN_1400f53e8(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4);
undefined8 FUN_1400f5460(uint param_1,longlong param_2);
undefined8 FUN_1400f5524(uint param_1,undefined8 param_2);
undefined4 FUN_1400f55f4(undefined8 *param_1);
longlong FUN_1400f5610(uint param_1,LARGE_INTEGER param_2,DWORD param_3,longlong param_4);
longlong thunk_FUN_1400f5610(uint param_1,LARGE_INTEGER param_2,DWORD param_3,longlong param_4);
LPVOID _realloc_base(LPVOID param_1,ulonglong param_2);
undefined4 __acrt_initialize_locks(void);
void __acrt_lock(int param_1);
undefined8 __acrt_uninitialize_locks(void);
void __acrt_unlock(int param_1);
ulonglong FUN_1400f5804(void);
uint FUN_1400f5820(void);
int FUN_1400f584c(longlong *param_1,longlong *param_2);
undefined8 FUN_1400f5c4c(longlong param_1,undefined8 param_2,ulonglong param_3,longlong *param_4);
int thunk_FUN_1400f584c(longlong *param_1,longlong *param_2);
void FUN_1400f5ddc(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4);
int __cdecl getSystemCP(int param_1);
void FUN_1400f602c(longlong param_1);
void FUN_1400f60c4(longlong param_1);
int FUN_1400f62bc(int param_1,char param_2,__acrt_ptd *param_3,__crt_multibyte_data **param_4);
__crt_multibyte_data * __cdecl update_thread_multibyte_data_internal(__acrt_ptd *param_1,__crt_multibyte_data **param_2);
undefined8 __acrt_initialize_multibyte(void);
void FUN_1400f6644(void);
undefined8 FUN_1400f6660(int param_1,longlong param_2);
undefined1 FUN_1400f6928(void);
void FUN_1400f6950(UINT param_1,DWORD param_2,LPCSTR param_3,int param_4,LPWSTR param_5,int param_6);
void FUN_1400f69e0(uint param_1,uint param_2,LPCWSTR param_3,int param_4,LPSTR param_5,int param_6,LPCSTR param_7,LPBOOL param_8);
longlong FUN_1400f6ac0(void);
longlong _recalloc_base(longlong param_1,ulonglong param_2,ulonglong param_3);
bool FUN_1400f6c20(void);
undefined8 FUN_1400f6c78(undefined8 *param_1,undefined8 *param_2);
undefined8 FUN_1400f6cf8(longlong param_1,longlong param_2);
undefined8 * __acrt_lowio_create_handle_array(void);
void __acrt_lowio_destroy_handle_array(LPCRITICAL_SECTION param_1);
undefined4 __acrt_lowio_ensure_fh_exists(uint param_1);
void FUN_1400f6ed4(uint param_1);
void FUN_1400f6efc(uint param_1);
undefined8 FUN_1400f6f24(uint param_1);
undefined8 FUN_1400f6fe0(uint param_1);
void __acrt_locale_free_monetary(longlong param_1);
void __acrt_locale_free_numeric(longlong *param_1);
void FUN_1400f71e8(undefined8 *param_1,longlong param_2);
void __acrt_locale_free_time(longlong param_1);
int __cdecl wcsncmp(wchar_t *_Str1,wchar_t *_Str2,size_t _MaxCount);
short * FUN_1400f7370(short *param_1,undefined8 param_2);
void __acrt_add_locale_ref(longlong param_1);
void __acrt_free_locale(longlong param_1);
int __acrt_locale_add_lc_time_reference(undefined **param_1);
void __acrt_locale_free_lc_time_if_unreferenced(undefined **param_1);
int __acrt_locale_release_lc_time_reference(undefined **param_1);
void __acrt_release_locale_ref(longlong param_1);
longlong __acrt_update_thread_locale_data(void);
undefined ** _updatetlocinfoEx_nolock(longlong *param_1,undefined **param_2);
BOOL __stdcall GetStringTypeW(DWORD dwInfoType,LPCWSTR lpSrcStr,int cchSrc,LPWORD lpCharType);
size_t __cdecl __strncnt(char *_String,size_t _Cnt);
uint FUN_1400f7800(uint param_1);
uint FUN_1400f7810(void);
uint FUN_1400f78f0(uint param_1);
uint FUN_1400f7900(void);
void FUN_1400f7960(uint param_1);
void FUN_1400f7a90(uint param_1);
bool FUN_1400f7b04(char *param_1,char *param_2,int param_3,int param_4,int param_5);
undefined4 FUN_1400f7bd4(char *param_1,ulonglong param_2,int param_3,longlong param_4,undefined8 param_5,undefined8 param_6,longlong param_7);
undefined8 FUN_1400f7ce4(ulonglong param_1,int param_2,int param_3,undefined4 *param_4,char *param_5,longlong param_6);
undefined8 FUN_1400f8f64(byte *param_1,uint param_2,undefined8 *param_3,undefined8 param_4);
undefined8 FUN_1400f9008(undefined8 param_1,undefined8 *param_2);
undefined8 FUN_1400f9010(undefined8 *param_1,longlong param_2);
byte FUN_1400f9024(uint param_1);
undefined8 FUN_1400f9090(uint *param_1,uint param_2);
bool FUN_1400f90e0(uint *param_1,uint param_2);
undefined4 FUN_1400f9160(longlong param_1);
uint FUN_1400f9210(uint param_1);
undefined8 FUN_1400f921c(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4);
int __cdecl _commit(int _FileHandle);
DWORD * FUN_1400f933c(DWORD *param_1,uint param_2,byte *param_3,ulonglong param_4,longlong param_5);
DWORD * FUN_1400f97d0(DWORD *param_1,uint param_2,char *param_3,ulonglong param_4);
DWORD * FUN_1400f98d8(DWORD *param_1,uint param_2,short *param_3,ulonglong param_4);
DWORD * FUN_1400f99f4(DWORD *param_1,uint param_2,short *param_3,uint param_4);
undefined4 FUN_1400f9b68(uint param_1,undefined8 param_2,undefined4 param_3,longlong param_4);
int FUN_1400f9c88(uint param_1,short *param_2,uint param_3,longlong param_4);
int FUN_1400f9fc0(ushort *param_1,ushort *param_2,longlong param_3);
void FUN_1400fa030(undefined1 *param_1,ulonglong param_2,ulonglong param_3,code *param_4);
byte FUN_1400fa3c8(void);
undefined8 _msize_base(longlong param_1);
undefined8 FUN_1400fa430(undefined4 *param_1,uint param_2,uint param_3);
undefined8 FUN_1400fa4a0(undefined4 *param_1);
bool FUN_1400fa4c0(int *param_1);
undefined8 FUN_1400fa530(ulonglong *param_1);
uint FUN_1400fa590(undefined4 param_1);
undefined2 FUN_1400fa5b4(undefined2 param_1);
void FUN_1400fa5f4(void);
uint FUN_1400fa610(void);
uint thunk_FUN_1400fa690(uint param_1,uint param_2);
uint FUN_1400fa690(uint param_1,uint param_2);
bool __dcrt_lowio_ensure_console_output_initialized(void);
void FUN_1400fa978(void);
BOOL __dcrt_write_console(void *param_1,DWORD param_2,LPDWORD param_3);
PSLIST_ENTRY.conflict __stdcall InterlockedPushEntrySList(PSLIST_HEADER ListHead,PSLIST_ENTRY ListEntry);
LPVOID __stdcall HeapAlloc(HANDLE hHeap,DWORD dwFlags,SIZE_T dwBytes);
BOOL __stdcall HeapFree(HANDLE hHeap,DWORD dwFlags,LPVOID lpMem);
HMODULE __stdcall LoadLibraryExW(LPCWSTR lpLibFileName,HANDLE hFile,DWORD dwFlags);
HANDLE __stdcall GetProcessHeap(void);
longlong FUN_1400faa70(longlong param_1,ulonglong param_2);
ulonglong FUN_1400faac0(longlong param_1);
bool FUN_1400fab10(short *param_1);
undefined8 FUN_1400fab40(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4);
undefined8 FUN_1400fabc0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4);
ushort * FUN_1400fac30(ushort *param_1,ushort param_2);
void FUN_1400facc0(int *param_1,undefined8 param_2,undefined8 param_3);
undefined1 (*) [16] FUN_1400fad10(undefined1 (*param_1) [16],byte param_2);
DWORD __stdcall FormatMessageW(DWORD dwFlags,LPCVOID lpSource,DWORD dwMessageId,DWORD dwLanguageId,LPWSTR lpBuffer,DWORD nSize,va_list *Arguments);
HRESULT __stdcall CoCreateFreeThreadedMarshaler(LPUNKNOWN punkOuter,LPUNKNOWN *ppunkMarshal);
HRESULT __stdcall SetErrorInfo(ULONG dwReserved,IErrorInfo *perrinfo);
HRESULT __stdcall GetErrorInfo(ULONG dwReserved,IErrorInfo **pperrinfo);
void RoGetActivationFactory(void);
void RoOriginateLanguageException(void);
void _guard_dispatch_icall(void);
void _guard_dispatch_icall(void);
void _guard_dispatch_icall(void);
int __cdecl memcmp(void *_Buf1,void *_Buf2,size_t _Size);
void FUN_1400faff0(undefined1 *param_1,undefined1 *param_2,longlong param_3);
void FUN_1400fb000(undefined8 *param_1,undefined8 *param_2,ulonglong param_3);
undefined8 FUN_1400fb6a0(undefined1 *param_1,undefined1 param_2,longlong param_3,undefined8 param_4);
undefined1 (*) [32] FUN_1400fb6b0(undefined1 (*param_1) [32],byte param_2,ulonglong param_3);
size_t __cdecl strlen(char *_Str);
int __cdecl strcmp(char *_Str1,char *_Str2);
int __cdecl strncmp(char *_Str1,char *_Str2,size_t _MaxCount);
void FUN_1400fbc20(undefined8 param_1,longlong param_2);
void FUN_1400fbcd0(undefined8 param_1,longlong param_2);
void FUN_1400fbdb0(undefined8 param_1,longlong param_2);
void FUN_1400fc300(undefined8 param_1,longlong param_2);
void FUN_1400fc330(undefined8 param_1,longlong param_2);
void FUN_1400fc3a0(undefined8 param_1,longlong param_2);
void FUN_1400fc3d0(undefined8 param_1,longlong param_2);
void FUN_1400fc400(undefined8 param_1,longlong param_2);
undefined8 FUN_1400fc490(undefined8 param_1,longlong param_2);
void FUN_1400fc4d0(undefined8 param_1,longlong param_2);
void FUN_1400fc510(undefined8 param_1,longlong param_2);
void FUN_1400fc540(undefined8 param_1,longlong param_2);
void FUN_1400fc570(undefined8 param_1,longlong param_2);
void FUN_1400fc910(undefined8 param_1,longlong param_2);
void FUN_1400fc9e0(undefined8 param_1,longlong param_2);
undefined8 FUN_1400fca60(void);
void FUN_1400fcaa0(undefined8 param_1,longlong param_2);
void FUN_1400fcb20(undefined8 param_1,longlong param_2);
void FUN_1400fcb50(undefined8 param_1,longlong param_2);
void FUN_1400fcbc0(undefined8 param_1,longlong param_2);
void FUN_1400fcc10(undefined8 param_1,longlong param_2);
void FUN_1400fcc60(undefined8 param_1,longlong param_2);
void FUN_1400fccb0(undefined8 param_1,longlong param_2);
void FUN_1400fcd60(undefined8 param_1,longlong param_2);
void FUN_1400fcd90(undefined8 param_1,longlong param_2);
void FUN_1400fce30(undefined8 param_1,longlong param_2);
void FUN_1400fcec0(undefined8 param_1,longlong param_2);
void FUN_1400fcef0(undefined8 param_1,longlong param_2);
void FUN_1400fcf40(undefined8 param_1,longlong param_2);
void FUN_1400fcf60(undefined8 param_1,longlong param_2);
undefined8 FUN_1400fd020(undefined8 param_1,longlong param_2);
undefined8 FUN_1400fd0f0(undefined8 param_1,longlong param_2);
undefined8 FUN_1400fd120(undefined8 param_1,longlong param_2);
undefined8 FUN_1400fd1b0(void);
undefined8 FUN_1400fd220(void);
void FUN_1400fd240(undefined8 param_1,longlong param_2);
void FUN_1400fd260(undefined8 param_1,longlong param_2);
void FUN_1400fd2c0(undefined8 param_1,longlong param_2);
void FUN_1400fd310(undefined8 param_1,longlong param_2);
void FUN_1400fd380(undefined8 param_1,longlong param_2);
void FUN_1400fd3e0(undefined8 param_1,longlong param_2);
void FUN_1400fd410(undefined8 param_1,longlong param_2);
void FUN_1400fd450(undefined8 param_1,longlong param_2);
void FUN_1400fd4e0(undefined8 param_1,longlong param_2);
void FUN_1400fd530(undefined8 param_1,longlong param_2);
void FUN_1400fd570(undefined8 param_1,longlong param_2);
void FUN_1400fd5a0(undefined8 param_1,longlong param_2);
void FUN_1400fd5d0(undefined8 param_1,longlong param_2);
void FUN_1400fd720(undefined8 param_1,longlong param_2);
void FUN_1400fd760(undefined8 param_1,longlong param_2);
void FUN_1400fd790(undefined8 param_1,longlong param_2);
void FUN_1400fd7c0(undefined8 param_1,longlong param_2);
void FUN_1400fd830(undefined8 param_1,longlong param_2);
void FUN_1400fd890(undefined8 param_1,longlong param_2);
void FUN_1400fd8c0(undefined8 param_1,longlong param_2);
undefined8 FUN_1400fd900(undefined8 param_1,longlong param_2);
undefined8 FUN_1400fd990(undefined8 param_1,longlong param_2);
undefined8 FUN_1400fda00(void);
void FUN_1400fdb10(undefined8 param_1,longlong param_2);
undefined8 FUN_1400fdb90(void);
void FUN_1400fdc70(undefined8 param_1,longlong param_2);
void FUN_1400fdca0(undefined8 param_1,longlong param_2);
void FUN_1400fdcd0(undefined8 param_1,longlong param_2);
void FUN_1400fdd00(undefined8 param_1,longlong param_2);
void FUN_1400fdd30(undefined8 param_1,longlong param_2);
void FUN_1400fddc0(undefined8 param_1,longlong param_2);
undefined8 FUN_1400fdf40(undefined8 param_1,longlong param_2);
void FUN_1400fdfa0(undefined8 param_1,longlong param_2);
void FUN_1400fdfd0(undefined8 param_1,longlong param_2);
void FUN_1400fe000(undefined8 param_1,longlong param_2);
void FUN_1400fe030(undefined8 param_1,longlong param_2);
void FUN_1400fe060(undefined8 param_1,longlong param_2);
undefined8 FUN_1400fe0d0(undefined8 param_1,longlong param_2);
undefined8 FUN_1400fe140(undefined8 param_1,longlong param_2);
void FUN_1400fe180(undefined8 param_1,longlong param_2);
void FUN_1400fe1c0(undefined8 param_1,longlong param_2);
void FUN_1400fe1e0(undefined8 param_1,longlong param_2);
void FUN_1400fe260(undefined8 param_1,longlong param_2);
undefined8 FUN_1400fe2e0(void);
void FUN_1400fe340(undefined8 param_1,longlong param_2);
void FUN_1400fe370(undefined8 param_1,longlong param_2);
void FUN_1400fe3a0(undefined8 param_1,longlong param_2);
void FUN_1400fe400(undefined8 param_1,longlong param_2);
void FUN_1400fe430(undefined8 param_1,longlong param_2);
void FUN_1400fe460(undefined8 param_1,longlong param_2);
void FUN_1400fe4a0(undefined8 param_1,longlong param_2);
void FUN_1400fe830(undefined8 param_1,longlong param_2);
void FUN_1400fe860(undefined8 param_1,longlong param_2);
void FUN_1400fea80(undefined8 param_1,longlong param_2);
void FUN_1400feab0(undefined8 param_1,longlong param_2);
void FUN_1400feb40(undefined8 param_1,longlong param_2);
undefined8 FUN_1400febc0(undefined8 param_1,longlong param_2);
void FUN_1400fee00(undefined8 param_1,longlong param_2);
undefined8 FUN_1400fee20(undefined8 param_1,longlong param_2);
undefined8 FUN_1400ff2a0(undefined8 param_1,longlong param_2);
undefined8 FUN_1400ff2e0(undefined8 param_1,longlong param_2);
undefined8 FUN_1400ff320(undefined8 param_1,longlong param_2);
undefined8 FUN_1400ff3c0(undefined8 param_1,longlong param_2);
undefined8 FUN_1400ff400(undefined8 param_1,longlong param_2);
void FUN_1400ff440(undefined8 param_1,longlong param_2);
void FUN_1400ff470(undefined8 param_1,longlong param_2);
void FUN_1400ff4a0(undefined8 param_1,longlong param_2);
void FUN_1400ff4d0(undefined8 param_1,longlong param_2);
void FUN_1400ff500(undefined8 param_1,longlong param_2);
void FUN_1400ff530(undefined8 param_1,longlong param_2);
void FUN_1400ff560(undefined8 param_1,longlong param_2);
void FUN_1400ff590(undefined8 param_1,longlong param_2);
void FUN_1400ff5c0(undefined8 param_1,longlong param_2);
void FUN_1400ff5f0(undefined8 param_1,longlong param_2);
void FUN_1400ff620(undefined8 param_1,longlong param_2);
void FUN_1400ff650(undefined8 param_1,longlong param_2);
void FUN_1400ff680(undefined8 param_1,longlong param_2);
undefined8 FUN_1400ff6d0(undefined8 param_1,longlong param_2);
undefined8 FUN_1400ff700(undefined8 param_1,longlong param_2);
void FUN_1400ff7d0(undefined8 param_1,longlong param_2);
void FUN_1400ff820(undefined8 param_1,longlong param_2);
void FUN_1400ff850(undefined8 param_1,longlong param_2);
void FUN_1400ff880(undefined8 param_1,longlong param_2);
void FUN_1400ff8b0(undefined8 param_1,longlong param_2);
void FUN_1400ff980(undefined8 param_1,longlong param_2);
void FUN_1400ff9b0(undefined8 param_1,longlong param_2);
void FUN_1400ffa10(undefined8 param_1,longlong param_2);
void FUN_1400ffa60(undefined8 param_1,longlong param_2);
void FUN_1400ffa90(undefined8 param_1,longlong param_2);
void FUN_1400ffad0(undefined8 param_1,longlong param_2);
void FUN_1400ffb00(undefined8 param_1,longlong param_2);
void FUN_1400ffb30(undefined8 param_1,longlong param_2);
void FUN_1400ffbc0(undefined8 param_1,longlong param_2);
void FUN_1400ffc30(undefined8 param_1,longlong param_2);
undefined8 FUN_1400ffc60(undefined8 param_1,longlong param_2);
void FUN_1400ffd00(undefined8 param_1,longlong param_2);
void FUN_1400ffd30(undefined8 param_1,longlong param_2);
void FUN_1400ffd50(undefined8 param_1,longlong param_2);
void FUN_1400ffe40(undefined8 param_1,longlong param_2);
void FUN_1400fff00(undefined8 param_1,longlong param_2);
void FUN_1400fff30(undefined8 param_1,longlong param_2);
void FUN_1400fff60(undefined8 param_1,longlong param_2);
void FUN_1400fff90(undefined8 param_1,longlong param_2);
void FUN_1400fffc0(undefined8 param_1,longlong param_2);
void FUN_140100000(undefined8 param_1,longlong param_2);
void FUN_140100030(undefined8 param_1,longlong param_2);
void FUN_140100090(undefined8 param_1,longlong param_2);
void FUN_140100150(undefined8 param_1,longlong param_2);
void FUN_140100180(undefined8 param_1,longlong param_2);
void FUN_1401001b0(undefined8 param_1,longlong param_2);
void FUN_1401001e0(undefined8 param_1,longlong param_2);
void FUN_140100210(undefined8 param_1,longlong param_2);
void FUN_140100240(undefined8 param_1,longlong param_2);
void FUN_140100290(undefined8 param_1,longlong param_2);
void FUN_1401002f0(undefined8 param_1,longlong param_2);
void FUN_140100320(undefined8 param_1,longlong param_2);
void FUN_140100350(undefined8 param_1,longlong param_2);
void FUN_140100380(undefined8 param_1,longlong param_2);
void FUN_1401003b0(undefined8 param_1,longlong param_2);
void FUN_140100470(undefined8 param_1,longlong param_2);
void FUN_1401004c0(undefined8 param_1,longlong param_2);
void FUN_140100580(undefined8 param_1,longlong param_2);
void FUN_1401005b0(undefined8 param_1,longlong param_2);
void FUN_1401005e0(undefined8 param_1,longlong param_2);
void FUN_140100610(undefined8 param_1,longlong param_2);
void FUN_140100640(undefined8 param_1,longlong param_2);
void FUN_140100670(undefined8 param_1,longlong param_2);
undefined8 FUN_1401006a0(undefined8 param_1,longlong param_2);
void FUN_140100720(undefined8 param_1,longlong param_2);
void FUN_140100750(undefined8 param_1,longlong param_2);
void FUN_140100780(undefined8 param_1,longlong param_2);
void FUN_1401007b0(undefined8 param_1,longlong param_2);
void FUN_1401007f0(undefined8 param_1,longlong param_2);
void FUN_140100820(undefined8 param_1,longlong param_2);
undefined8 FUN_140100860(undefined8 param_1,longlong param_2);
undefined8 FUN_140100890(undefined8 param_1,longlong param_2);
undefined8 FUN_1401008c0(undefined8 param_1,longlong param_2);
undefined8 FUN_1401009f0(undefined8 param_1,longlong param_2);
undefined8 FUN_140100b20(undefined8 param_1,longlong param_2);
void FUN_140100c60(undefined8 param_1,longlong param_2);
void FUN_140100c90(undefined8 param_1,longlong param_2);
undefined4 FUN_140100cc0(undefined8 param_1,longlong param_2);
bool FUN_140100d20(undefined8 *param_1);
undefined8 FUN_140100d40(void);
void FUN_140100d60(undefined8 *param_1);
bool FUN_140100d80(undefined8 *param_1);
bool FUN_140100da0(undefined8 *param_1);
undefined4 FUN_140100dc0(undefined8 param_1,longlong param_2);
undefined4 FUN_140100e60(undefined8 param_1,longlong param_2);
undefined4 FUN_140100f10(undefined8 param_1,longlong param_2);
void FUN_140100fd0(void);
void FUN_140100ff0(undefined8 param_1,longlong param_2);
void FUN_140101011(undefined8 param_1,longlong param_2);
void FUN_1401010a0(_EXCEPTION_POINTERS *param_1,longlong param_2);
void FUN_1401010c5(undefined8 param_1,longlong param_2);
void FUN_140101160(void);
void FUN_140101176(void);
void FUN_1401011a0(void);
void FUN_1401011b6(void);
void FUN_1401011d9(undefined8 *param_1);
void FUN_1401011f7(undefined8 param_1,longlong param_2);
void FUN_140101210(void);
void FUN_140101226(void);
void FUN_14010123c(undefined8 param_1,longlong param_2);
undefined4 FUN_140101256(undefined8 *param_1,longlong param_2);
void FUN_140101283(undefined8 param_1,longlong param_2);
void FUN_14010129d(undefined8 param_1,longlong param_2);
void FUN_1401012be(void);
undefined8 FUN_1401012e0(undefined8 *param_1,longlong param_2);
void FUN_14010130d(void);
void FUN_140101326(undefined8 param_1,longlong param_2);
void FUN_140101341(undefined8 param_1,longlong param_2);
void FUN_14010135e(undefined8 param_1,longlong param_2);
void FUN_140101378(undefined8 param_1,longlong param_2);
void FUN_140101392(void);
void FUN_1401013ab(void);
void FUN_1401013c4(undefined8 param_1,longlong param_2);
undefined8 _ctrlfp$filt$0(undefined8 *param_1);
void FUN_140101410(void);
void FUN_140101440(void);
void FUN_140101470(void);
void FUN_1401014a0(void);
void FUN_1401014d0(void);
void FUN_140101580(void);
void FUN_1401015a0(void);
void FUN_1401015d0(void);
void FUN_140101600(void);
void FUN_140101630(void);
void FUN_140101670(void);
void FUN_1401016f0(void);
void FUN_1401017a0(void);
void FUN_140101800(void);
void FUN_1401018a0(void);
void FUN_140101940(void);
void FUN_1401019c0(void);
void FUN_140101a20(void);
void FUN_140101a40(void);
void FUN_140101af0(void);
void FUN_140101b60(void);
void FUN_140101be0(void);
void FUN_140101c60(void);
void FUN_140101ce0(void);
void FUN_140101d60(void);
void FUN_140101df0(void);
void FUN_140101ea0(void);
void FUN_140101f20(void);
void FUN_140101f50(void);
void FUN_140101fd0(void);
void FUN_1401020a0(void);
void FUN_140102120(void);
void FUN_1401021b0(void);
void FUN_140102230(void);
void FUN_140102300(void);
void FUN_140102340(void);
void FUN_1401023f0(void);
void FUN_140102480(void);
void FUN_1401024b0(void);
void FUN_1401024e0(void);
void FUN_140102580(void);
void FUN_140102650(void);
void FUN_140102700(void);
void FUN_140102760(void);
void FUN_1401027a0(void);
void FUN_140102840(void);
void FUN_1401028b0(void);
void FUN_1401028f0(void);
void FUN_1401029b0(void);
void FUN_140102a20(void);
void FUN_140102ac0(void);
void FUN_140102b40(void);
void FUN_140102be0(void);
void FUN_140102c60(void);
void FUN_140102ce0(void);
void FUN_140102d60(void);


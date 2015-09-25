/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

@interface PKPrinter : NSObject {
    int _jobAccountIDSupport;
    PKPaperList *_paperList;
    int accessState;
    BOOL connectionShouldNotBeTrusted;
    BOOL hasIdentifyPrinterOp;
    BOOL isFromMCProfile;
    BOOL isLocal;
    struct _http_s { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; struct sockaddr_in { unsigned char x_9_1_1; unsigned char x_9_1_2; unsigned short x_9_1_3; struct in_addr { unsigned int x_4_2_1; } x_9_1_4; BOOL x_9_1_5[8]; } x9; BOOL x10[256]; BOOL x11[27][256]; char *x12; int x13; int x14; int x15; BOOL x16[2048]; int x17; struct _cups_md5_state_s { unsigned int x_18_1_1[2]; unsigned int x_18_1_2[4]; unsigned char x_18_1_3[64]; } x18; BOOL x19[256]; int x20; struct SSLContext {} *x21; int x22; struct fd_set {} *x23; int x24; char *x25; BOOL x26[256]; BOOL x27[256]; int x28; long long x29; union { /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_30_1_1; void*x_30_1_2; void*x_30_1_3; void*x_30_1_4; void*x_30_1_5; void*x_30_1_6; void*x_30_1_7; double x_30_1_8; double x_30_1_9; const void*x_30_1_10; void*x_30_1_11; } *x30; struct http_addrlist_s {} *x31; BOOL x32[2048]; int x33; char *x34; char *x35; struct __CFArray {} *x36; int (*x37)(); void *x38; double x39; int x40; int x41; int x42; char *x43; char *x44; char *x45; char *x46; char *x47; char *x48; int x49; struct z_stream_s { char *x_50_1_1; unsigned int x_50_1_2; unsigned int x_50_1_3; char *x_50_1_4; unsigned int x_50_1_5; unsigned int x_50_1_6; char *x_50_1_7; struct internal_state {} *x_50_1_8; int (*x_50_1_9)(); int (*x_50_1_10)(); void *x_50_1_11; int x_50_1_12; unsigned int x_50_1_13; unsigned int x_50_1_14; } x50; char *x51; } *job_http;
    int kind;
    NSArray *mandatoryJobAttributes;
    int maxCopies;
    int maxDocumentPasswordLength;
    int maxJPEGKBytes;
    int maxJPEGXDimension;
    int maxJPEGYDimension;
    int maxPDFKBytes;
    NSString *name;
    int preferred_landscape;
    NSDictionary *printInfoSupported;
    NSArray *printScalingSupported;
    int printerStateReasons;
    NSMutableDictionary *privateData;
    NSString *quotaManagementURL;
    NSMutableDictionary *specialFeedOrientation;
    int type;
}

@property (retain) NSDictionary *TXTRecord;
@property int accessState;
@property (readonly) int accessState;
@property (readonly) BOOL hasIdentifyPrinterOp;
@property (readonly) BOOL hasPrintInfoSupported;
@property (retain) NSString *hostname;
@property (readonly) BOOL isAdobeRGBSupported;
@property BOOL isFromMCProfile;
@property (readonly) BOOL isIPPS;
@property BOOL isLocal;
@property int jobAccountIDSupport;
@property (readonly) int jobTypesSupported;
@property (readonly) int kind;
@property (retain) NSString *name;
@property (readonly) BOOL needsSetup;
@property (retain) PKPaperList *paperList;
@property (retain) NSNumber *port;
@property (readonly) NSDictionary *printInfoSupported;
@property (readonly) NSURL *printerURL;
@property (readonly, retain) NSString *scheme;
@property (readonly) BOOL setupSupportsPasswordScope;
@property (readonly) int type;
@property (readonly) NSString *uuid;

+ (struct _ipp_s { int x1; union _ipp_request_u { struct { unsigned char x_1_2_1[2]; int x_1_2_2; int x_1_2_3; } x_2_1_1; struct { unsigned char x_2_2_1[2]; int x_2_2_2; int x_2_2_3; } x_2_1_2; struct { unsigned char x_3_2_1[2]; int x_3_2_2; int x_3_2_3; } x_2_1_3; struct { unsigned char x_4_2_1[2]; int x_4_2_2; int x_4_2_3; } x_2_1_4; } x2; struct _ipp_attribute_s {} *x3; struct _ipp_attribute_s {} *x4; struct _ipp_attribute_s {} *x5; int x6; struct _ipp_attribute_s {} *x7; int x8; int x9; int x10; }*)getAttributes:(const char **)arg1 count:(int)arg2 fromURI:(id)arg3;
+ (id)hardcodedURIs;
+ (id)nameForHardcodedURI:(id)arg1;
+ (BOOL)printerLookupWithName:(id)arg1 andTimeout:(double)arg2;
+ (id)printerWithName:(id)arg1;
+ (id)printerWithName:(id)arg1 discoveryTimeout:(double)arg2;
+ (id)requiredPDL;
+ (BOOL)urfIsOptional;

- (id)TXTRecord;
- (id)TXTRecordWithTimeout:(int)arg1;
- (int)abortJob;
- (int)accessState;
- (void)aggdAppsAndPrinters;
- (id)availableRollPapersPreferBorderless:(BOOL)arg1;
- (void)cancelUnlock;
- (void)checkOperations:(struct _ipp_s { int x1; union _ipp_request_u { struct { unsigned char x_1_2_1[2]; int x_1_2_2; int x_1_2_3; } x_2_1_1; struct { unsigned char x_2_2_1[2]; int x_2_2_2; int x_2_2_3; } x_2_1_2; struct { unsigned char x_3_2_1[2]; int x_3_2_2; int x_3_2_3; } x_2_1_3; struct { unsigned char x_4_2_1[2]; int x_4_2_2; int x_4_2_3; } x_2_1_4; } x2; struct _ipp_attribute_s {} *x3; struct _ipp_attribute_s {} *x4; struct _ipp_attribute_s {} *x5; int x6; struct _ipp_attribute_s {} *x7; int x8; int x9; int x10; }*)arg1;
- (struct _ipp_s { int x1; union _ipp_request_u { struct { unsigned char x_1_2_1[2]; int x_1_2_2; int x_1_2_3; } x_2_1_1; struct { unsigned char x_2_2_1[2]; int x_2_2_2; int x_2_2_3; } x_2_1_2; struct { unsigned char x_3_2_1[2]; int x_3_2_2; int x_3_2_3; } x_2_1_3; struct { unsigned char x_4_2_1[2]; int x_4_2_2; int x_4_2_3; } x_2_1_4; } x2; struct _ipp_attribute_s {} *x3; struct _ipp_attribute_s {} *x4; struct _ipp_attribute_s {} *x5; int x6; struct _ipp_attribute_s {} *x7; int x8; int x9; int x10; }*)createRequest:(id)arg1 ofType:(id)arg2 url:(id)arg3;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (void)doMedia2:(struct _ipp_s { int x1; union _ipp_request_u { struct { unsigned char x_1_2_1[2]; int x_1_2_2; int x_1_2_3; } x_2_1_1; struct { unsigned char x_2_2_1[2]; int x_2_2_2; int x_2_2_3; } x_2_1_2; struct { unsigned char x_3_2_1[2]; int x_3_2_2; int x_3_2_3; } x_2_1_3; struct { unsigned char x_4_2_1[2]; int x_4_2_2; int x_4_2_3; } x_2_1_4; } x2; struct _ipp_attribute_s {} *x3; struct _ipp_attribute_s {} *x4; struct _ipp_attribute_s {} *x5; int x6; struct _ipp_attribute_s {} *x7; int x8; int x9; int x10; }*)arg1;
- (int)feedOrientation:(id)arg1;
- (int)finalizeJob:(int)arg1;
- (int)finishJob;
- (struct _ipp_s { int x1; union _ipp_request_u { struct { unsigned char x_1_2_1[2]; int x_1_2_2; int x_1_2_3; } x_2_1_1; struct { unsigned char x_2_2_1[2]; int x_2_2_2; int x_2_2_3; } x_2_1_2; struct { unsigned char x_3_2_1[2]; int x_3_2_2; int x_3_2_3; } x_2_1_3; struct { unsigned char x_4_2_1[2]; int x_4_2_2; int x_4_2_3; } x_2_1_4; } x2; struct _ipp_attribute_s {} *x3; struct _ipp_attribute_s {} *x4; struct _ipp_attribute_s {} *x5; int x6; struct _ipp_attribute_s {} *x7; int x8; int x9; int x10; }*)getAttributes:(const char **)arg1 count:(int)arg2;
- (struct _ipp_s { int x1; union _ipp_request_u { struct { unsigned char x_1_2_1[2]; int x_1_2_2; int x_1_2_3; } x_2_1_1; struct { unsigned char x_2_2_1[2]; int x_2_2_2; int x_2_2_3; } x_2_1_2; struct { unsigned char x_3_2_1[2]; int x_3_2_2; int x_3_2_3; } x_2_1_3; struct { unsigned char x_4_2_1[2]; int x_4_2_2; int x_4_2_3; } x_2_1_4; } x2; struct _ipp_attribute_s {} *x3; struct _ipp_attribute_s {} *x4; struct _ipp_attribute_s {} *x5; int x6; struct _ipp_attribute_s {} *x7; int x8; int x9; int x10; }*)getPrinterAttributes;
- (struct _ipp_s { int x1; union _ipp_request_u { struct { unsigned char x_1_2_1[2]; int x_1_2_2; int x_1_2_3; } x_2_1_1; struct { unsigned char x_2_2_1[2]; int x_2_2_2; int x_2_2_3; } x_2_1_2; struct { unsigned char x_3_2_1[2]; int x_3_2_2; int x_3_2_3; } x_2_1_3; struct { unsigned char x_4_2_1[2]; int x_4_2_2; int x_4_2_3; } x_2_1_4; } x2; struct _ipp_attribute_s {} *x3; struct _ipp_attribute_s {} *x4; struct _ipp_attribute_s {} *x5; int x6; struct _ipp_attribute_s {} *x7; int x8; int x9; int x10; }*)getSupplyLevelAttributes;
- (void)getSupplyLevels:(id /* block */)arg1;
- (void)handlePrinterStateReasonsFromResponse:(struct _ipp_s { int x1; union _ipp_request_u { struct { unsigned char x_1_2_1[2]; int x_1_2_2; int x_1_2_3; } x_2_1_1; struct { unsigned char x_2_2_1[2]; int x_2_2_2; int x_2_2_3; } x_2_1_2; struct { unsigned char x_3_2_1[2]; int x_3_2_2; int x_3_2_3; } x_2_1_3; struct { unsigned char x_4_2_1[2]; int x_4_2_2; int x_4_2_3; } x_2_1_4; } x2; struct _ipp_attribute_s {} *x3; struct _ipp_attribute_s {} *x4; struct _ipp_attribute_s {} *x5; int x6; struct _ipp_attribute_s {} *x7; int x8; int x9; int x10; }*)arg1;
- (BOOL)hasIdentifyPrinterOp;
- (BOOL)hasPrintInfoSupported;
- (id)hostname;
- (void)identifySelf;
- (id)initWithName:(id)arg1 TXT:(id)arg2;
- (id)initWithName:(id)arg1 TXTRecord:(id)arg2;
- (BOOL)isAdobeRGBSupported;
- (BOOL)isBonjour;
- (BOOL)isFromMCProfile;
- (BOOL)isIPPS;
- (BOOL)isLocal;
- (BOOL)isPaperReady:(id)arg1;
- (int)jobAccountIDSupport;
- (int)jobTypesSupported;
- (int)kind;
- (BOOL)knowsReadyPaperList;
- (id)localName;
- (id)localizedPrinterWarnings;
- (id)location;
- (id)makeAndModel;
- (id)matchedPaper:(id)arg1 preferBorderless:(BOOL)arg2 withDuplexMode:(id)arg3 didMatch:(BOOL*)arg4;
- (id)name;
- (BOOL)needsSetup;
- (id)paperList;
- (id)paperListForDuplexMode:(id)arg1;
- (id)papersForDocumentWithSize:(struct CGSize { float x1; float x2; })arg1 andDuplex:(BOOL)arg2;
- (id)papersForDocumentWithSize:(struct CGSize { float x1; float x2; })arg1 scaleUpOnRoll:(BOOL)arg2 andDuplex:(BOOL)arg3;
- (id)papersForPhotoWithSize:(struct CGSize { float x1; float x2; })arg1;
- (id)port;
- (id)printInfoSupported;
- (int)printURL:(id)arg1 ofType:(id)arg2 printSettings:(id)arg3;
- (id)printerURL;
- (id)privateObjectForKey:(id)arg1;
- (void)reconfirmWithForce:(BOOL)arg1;
- (BOOL)resolve;
- (BOOL)resolveIfNeeded;
- (BOOL)resolveWithTimeout:(int)arg1;
- (id)rollReadyPaperListWithContentSize:(struct CGSize { float x1; float x2; })arg1;
- (id)rollReadyPaperListWithContentSize:(struct CGSize { float x1; float x2; })arg1 forPhoto:(BOOL)arg2;
- (id)scheme;
- (int)sendData:(const char *)arg1 ofLength:(int)arg2;
- (void)setAccessState:(int)arg1;
- (void)setAccessStateFromTXT;
- (void)setHostname:(id)arg1;
- (void)setIsFromMCProfile:(BOOL)arg1;
- (void)setIsLocal:(BOOL)arg1;
- (void)setJobAccountIDSupport:(int)arg1;
- (void)setName:(id)arg1;
- (void)setPaperList:(id)arg1;
- (void)setPort:(id)arg1;
- (void)setPrivateObject:(id)arg1 forKey:(id)arg2;
- (void)setTXTRecord:(id)arg1;
- (BOOL)setupSupportsPasswordScope;
- (void)setupWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)showPassCodeForSetupWithCompletionHandler:(id /* block */)arg1;
- (int)startJob:(id)arg1 ofType:(id)arg2;
- (BOOL)supportsJobAccountID;
- (id)txtRecordObjectForKey:(id)arg1;
- (int)type;
- (void)unlockWithCompletionHandler:(id /* block */)arg1;
- (void)updateType;
- (id)uuid;
- (void)validatePassCode:(id)arg1 withCompletionHandler:(id /* block */)arg2;

@end

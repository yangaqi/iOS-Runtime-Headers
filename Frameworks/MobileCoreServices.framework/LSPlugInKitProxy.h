/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface LSPlugInKitProxy : LSBundleProxy <NSSecureCoding> {
    NSDictionary *_infoPlist;
    BOOL _isOnSystemPartition;
    NSString *_originalIdentifier;
    LSBundleProxy *_parentBundle;
    unsigned long _parentBundleID;
    NSString *_pluginIdentifier;
    NSDictionary *_pluginKitDictionary;
    NSUUID *_pluginUUID;
    NSString *_protocol;
    NSDate *_registrationDate;
}

@property (nonatomic, readonly) LSBundleProxy *containingBundle;
@property (nonatomic, readonly) NSDictionary *infoPlist;
@property (nonatomic, readonly) BOOL isOnSystemPartition;
@property (nonatomic, readonly) NSString *originalIdentifier;
@property (nonatomic, readonly) NSString *pluginIdentifier;
@property (nonatomic, readonly) NSDictionary *pluginKitDictionary;
@property (nonatomic, readonly) NSUUID *pluginUUID;
@property (nonatomic, readonly) NSString *protocol;
@property (nonatomic, readonly) NSDate *registrationDate;

+ (id)plugInKitProxyForPlugin:(unsigned long)arg1;
+ (id)plugInKitProxyForUUID:(id)arg1 bundleIdentifier:(id)arg2 pluginIdentifier:(id)arg3 effectiveIdentifier:(id)arg4 version:(id)arg5 bundleURL:(id)arg6;
+ (id)pluginKitProxyForIdentifier:(id)arg1;
+ (id)pluginKitProxyForURL:(id)arg1;
+ (id)pluginKitProxyForUUID:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (id)_initWithPlugin:(unsigned long)arg1;
- (id)_initWithUUID:(id)arg1 bundleIdentifier:(id)arg2 pluginIdentifier:(id)arg3 effectiveIdentifier:(id)arg4 version:(id)arg5 bundleURL:(id)arg6;
- (id)appStoreReceiptURL;
- (id)containingBundle;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)iconDataForVariant:(int)arg1;
- (id)infoPlist;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isOnSystemPartition;
- (id)localizedName;
- (id)localizedShortName;
- (id)originalIdentifier;
- (id)pluginIdentifier;
- (id)pluginKitDictionary;
- (id)pluginUUID;
- (id)protocol;
- (id)registrationDate;

@end

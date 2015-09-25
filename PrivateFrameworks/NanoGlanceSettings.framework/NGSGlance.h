/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoGlanceSettings.framework/NanoGlanceSettings
 */

@interface NGSGlance : NSObject <NSCopying> {
    BOOL _active;
    NSString *_appBundleIdentifier;
    BOOL _cannotBeDisabled;
    BOOL _defaultGlance;
    NSString *_glanceBundleIdentifier;
    NSString *_glanceBundlePath;
    unsigned int _installState;
    NSString *_name;
    BOOL _prelaunch;
    NSString *_sockPuppetIdentifier;
}

@property (getter=isActive, nonatomic) BOOL active;
@property (nonatomic, copy) NSString *appBundleIdentifier;
@property (nonatomic) BOOL cannotBeDisabled;
@property (getter=isDefaultGlance, nonatomic) BOOL defaultGlance;
@property (nonatomic, copy) NSString *glanceBundleIdentifier;
@property (nonatomic, copy) NSString *glanceBundlePath;
@property (nonatomic, readonly) NSString *glanceIdentifier;
@property (nonatomic) unsigned int installState;
@property (nonatomic, readonly) BOOL isInstalled;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) BOOL prelaunch;
@property (nonatomic, copy) NSString *sockPuppetIdentifier;

- (void).cxx_destruct;
- (id)_localizedName;
- (id)appBundleIdentifier;
- (BOOL)cannotBeDisabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)glanceBundleIdentifier;
- (id)glanceBundlePath;
- (id)glanceIdentifier;
- (id)initWithDictionary:(id)arg1;
- (unsigned int)installState;
- (BOOL)isActive;
- (BOOL)isDefaultGlance;
- (BOOL)isInstalled;
- (id)name;
- (BOOL)prelaunch;
- (void)setActive:(BOOL)arg1;
- (void)setAppBundleIdentifier:(id)arg1;
- (void)setCannotBeDisabled:(BOOL)arg1;
- (void)setDefaultGlance:(BOOL)arg1;
- (void)setGlanceBundleIdentifier:(id)arg1;
- (void)setGlanceBundlePath:(id)arg1;
- (void)setInstallState:(unsigned int)arg1;
- (void)setName:(id)arg1;
- (void)setPrelaunch:(BOOL)arg1;
- (void)setSockPuppetIdentifier:(id)arg1;
- (id)sockPuppetIdentifier;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNContactsUserDefaults : NSObject

@property (nonatomic, readonly, copy) NSString *countryCode;
@property (nonatomic) int displayNameOrder;
@property (nonatomic) int shortNameFormat;
@property (getter=isShortNameFormatEnabled, nonatomic) BOOL shortNameFormatEnabled;
@property (nonatomic) BOOL shortNameFormatPrefersNicknames;
@property (nonatomic, readonly) int sortOrder;

+ (void)flushSharedInstance;
+ (id)sharedDefaults;
+ (Class)userDefaultsClass;

- (id)countryCode;
- (int)displayNameOrder;
- (BOOL)isShortNameFormatEnabled;
- (int)newContactDisplayNameOrder;
- (void)setDisplayNameOrder:(int)arg1;
- (void)setShortNameFormat:(int)arg1;
- (void)setShortNameFormatEnabled:(BOOL)arg1;
- (void)setShortNameFormatPrefersNicknames:(BOOL)arg1;
- (int)shortNameFormat;
- (BOOL)shortNameFormatPrefersNicknames;
- (int)sortOrder;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSpecifierUpdateContext : NSObject <NSCopying> {
    BOOL _animated;
    BOOL _updateModelOnly;
    NSDictionary *_userInfo;
}

@property (nonatomic) BOOL animated;
@property (nonatomic) BOOL updateModelOnly;
@property (nonatomic, copy) NSDictionary *userInfo;

+ (id)context;
+ (id)contextWithUserInfo:(id)arg1;

- (void).cxx_destruct;
- (BOOL)animated;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)setAnimated:(BOOL)arg1;
- (void)setUpdateModelOnly:(BOOL)arg1;
- (void)setUserInfo:(id)arg1;
- (BOOL)updateModelOnly;
- (id)userInfo;

@end

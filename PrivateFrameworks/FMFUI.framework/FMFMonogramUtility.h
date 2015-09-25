/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
 */

@interface FMFMonogramUtility : NSObject

+ (void)clearMonogramCache;
+ (id)contactImageCache;
+ (id)contactStatusCache;
+ (id)monogramImageOfDiameter:(float)arg1 forRecordID:(int)arg2 monogramStyle:(int)arg3 tintColor:(id)arg4 customFont:(id)arg5 isPersonImage:(BOOL*)arg6;
+ (id)monogramImageOfDiameter:(float)arg1 forRecordID:(int)arg2 useTintColor:(id)arg3 useCustomFont:(BOOL)arg4 isPersonImage:(BOOL*)arg5;
+ (id)monogrammerWithDiameter:(float)arg1 style:(int)arg2 useTintColor:(id)arg3 customFont:(id)arg4;
+ (id)placeholderContactImageOfDiameter:(float)arg1 monogramStyle:(int)arg2 useTintColor:(id)arg3;
+ (void)setAddressBook:(void*)arg1;

@end

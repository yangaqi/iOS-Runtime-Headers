/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICMigrationUtilities : NSObject

+ (void)fetchAndSetMigrationStateWithCompletionHandler:(id /* block */)arg1;
+ (void)fetchMigrationStateAndUserRecordWithCompletionHandler:(id /* block */)arg1;
+ (void)fetchMigrationStateWithCompletionHandler:(id /* block */)arg1;
+ (void)saveDidChooseToMigrate:(BOOL)arg1 didFinishMigration:(BOOL)arg2 didMigrateOnMac:(BOOL)arg3 toACAccount:(id)arg4 inStore:(id)arg5 completionHandler:(id /* block */)arg6;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface CallDBManagerServer : CallDBManager

+ (id)getDestinationModel:(int)arg1;
+ (id)getDestinationModelForVersion:(int)arg1;
+ (int)getNextVersionToMigrateToBaseVersion:(int)arg1;
+ (int)getNextVersionToMigrateToCurrentVersion:(int)arg1;
+ (id)getObjectIdsForAllRecords:(id)arg1;
+ (id)getObjectIdsForDuplicateRecordsWithUniqueIds:(id)arg1 andHavingObjectIds:(id)arg2;
+ (id)getUniqueIdsForAllRecords:(id)arg1;
+ (id)migrateDatabaseToBaseVersion:(id)arg1;

- (BOOL)bootUpDBAtLocation:(id)arg1 isEncrypted:(BOOL)arg2;
- (BOOL)bootUpDBAtLocationWithRecovery:(id)arg1 isEncrypted:(BOOL)arg2;
- (void)createPermanent;
- (void)createTemporary;
- (id)getUUIDsOfNMostRecentRecords:(unsigned int)arg1 fromManagedObjectContext:(id)arg2;
- (BOOL)handleBootUpFailure:(id)arg1;
- (BOOL)handleDatabaseMigration:(id)arg1 isEncrypted:(BOOL)arg2 isRetry:(BOOL)arg3;
- (void)moveCallsFromTempDatabase;
- (id)permDBLocation:(unsigned char*)arg1;
- (void)prepareForMigrationDBAtURL:(id)arg1 withModelAtURL:(id)arg2 andIsEncrypted:(BOOL)arg3;
- (BOOL)removeDuplicatesFromDBAtLocation:(id)arg1 dbVersion:(int)arg2 isEncrypted:(BOOL)arg3;
- (id)tempDBLocation:(unsigned char*)arg1;

@end

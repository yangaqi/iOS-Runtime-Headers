/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGSqlEntityStore : NSObject <CSSearchableIndexDelegate> {
    id /* block */ _crLookup;
    SGSqliteDatabase *_db;
    NSDictionary *_entityMigrations;
    unsigned int _entityVersion;
    BOOL _executeJournals;
    SGSuggestHistory *_history;
    BOOL _identityStoreDirty;
    BOOL _isEphemeral;
    SGJournal *_journal;
    SGBloomFilter *_messageRecipients;
    unsigned int _parentMessagesLimit;
    NSObject<OS_dispatch_queue> *_precomputationQueue;
    NSSet *_prematchedContactIdentifiers;
    NSCache *_recentlyDeletedDuplicateKeys;
    NSObject<OS_dispatch_queue> *_serialWriteQueue;
    NSSet *_serializedContactEntityIDs;
    unsigned int _serializedContactsLimit;
    SGSqliteDatabase *_snippetDb;
    NSString *_snippetDbPath;
    SGDatabaseJournal *_snippetsJournal;
    NSDictionary *_snippetsMigrations;
    unsigned int _snippetsVersion;
    SGSpotlightContactsAdapter *_spotlightContactsAdapter;
    BOOL _waitForMigrations;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL executeJournals;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isEphemeral;
@property unsigned int serializedContactsLimit;
@property (readonly) SGSpotlightContactsAdapter *spotlightContactsAdapter;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BOOL waitForMigrations;

+ (void)clearMigrationCompletedForPaths;
+ (id)defaultHarvestStore;
+ (id)defaultPath;
+ (id)defaultPathCreatingSuggestionsDirectoryIfNeeded:(BOOL)arg1;
+ (id)defaultSnippetPath;
+ (id)defaultStore;
+ (void)deletePreparedSqlStoreInMemory;
+ (void)prepareSqlStoreInMemory;
+ (void)prepareSqlStoreInMemoryByClearingExistingStore:(id)arg1;
+ (id)sqlStoreInMemory;
+ (id)sqlStoreWithEntityDbPath:(id)arg1 snippetDbPath:(id)arg2 isEphemeral:(BOOL)arg3 executeJournals:(BOOL)arg4;
+ (id)sqlStoreWithEntityDbPathNoMigrate:(id)arg1 snippetDbPath:(id)arg2 isEphemeral:(BOOL)arg3 executeJournals:(BOOL)arg4;
+ (id)storeWithDefaultLocationAndExecuteJournals:(BOOL)arg1;

- (void).cxx_destruct;
- (void)_addIndexingTagsTo:(id)arg1;
- (void)_addLocations:(id)arg1 toEntityWriteDictionary:(id)arg2;
- (void)_addSpotlightReferenceToEmailRecordId:(id)arg1 withBundleIdentifier:(id)arg2 uniqueIdentifier:(id)arg3 domainIdentifier:(id)arg4;
- (void)_addTimeRange:(id)arg1 toEntityWriteDictionary:(id)arg2;
- (id)_buildContactMatchForStorageContact:(id)arg1 fromQuery:(id)arg2 tokens:(id)arg3 preprocessSgContact:(id /* block */)arg4;
- (id)_buildNameBasedContactMatchForStorageContact:(id)arg1 preprocessSgContact:(id /* block */)arg2;
- (id)_computePseudoContactContentHash:(id)arg1 contactDetails:(id)arg2;
- (BOOL)_createEntityFTSTableWithName:(id)arg1;
- (void)_deleteIfNoSpotlightReferences:(id)arg1 addToRecentlyDeletedCache:(BOOL)arg2;
- (void)_deleteWithSqlWhere:(id)arg1 onPrep:(id /* block */)arg2;
- (void)_dumpTable:(id)arg1 columns:(id)arg2 limitTo:(int)arg3;
- (id)_duplicateKeysFromMailMessageKeys:(id)arg1;
- (id)_duplicateKeysFromRecordIds:(id)arg1;
- (id)_duplicateKeysWithZeroSpotlightReferencesFromRecordIds:(id)arg1;
- (void)_enqueueBatchOfCNContactIds:(id)arg1;
- (id)_eventFromSqlResult:(struct sqlite3_stmt { }*)arg1;
- (id)_filterOutAllButAcceptedWithUpdatedFields:(id)arg1;
- (id)_filterOutCancelledEvents:(id)arg1;
- (id)_filterOutOlderVersionsOfPseudoEvents:(id)arg1;
- (void)_filterOutRejectedDetailsFromContact:(id)arg1;
- (id)_filterOutUndisplayableEntities:(id)arg1;
- (void)_handleProtection;
- (id)_initializeDatabase:(id)arg1 withProtection:(BOOL)arg2 newDatabaseCreated:(BOOL*)arg3;
- (void)_joinNamelessEmailWithOthersOfItsIlk:(id)arg1 recordId:(id)arg2;
- (void)_joinNamelessPhonesWithOthersOfTheirIlk:(id)arg1 recordId:(id)arg2;
- (void)_linkNamelessEmailsIfAppropriate:(struct graph_t { unsigned int x1; unsigned int x2; struct _vertex_t {} *x3; }*)arg1 nameToVertex:(id)arg2 disjointSets:(struct DisjointSetHandle { }*)arg3;
- (void)_linkNamelessPhonesIfAppropriate:(struct graph_t { unsigned int x1; unsigned int x2; struct _vertex_t {} *x3; }*)arg1 nameToVertex:(id)arg2 disjointSets:(struct DisjointSetHandle { }*)arg3;
- (id)_loadContactForStorageContact:(id)arg1 usingSerializedContactCache:(BOOL)arg2;
- (void)_logConfirmPercentWithConfirmCount:(double)arg1 rejectCount:(double)arg2 domain:(id)arg3 suffix:(id)arg4;
- (void)_markRecordsLostIfNoSpotlightReferences:(id)arg1;
- (id)_masterEntityIDsForMasterEntityQuery:(id)arg1 bindings:(id /* block */)arg2;
- (int)_maxIdForTable:(id)arg1;
- (id)_popBatchOfCNContactIds;
- (long long)_popQueuedSerializedContactId;
- (BOOL)_prepareToCopyFrom:(id)arg1 toNewTableNamed:(id)arg2;
- (BOOL)_processBatchOfSerializedContactJobs;
- (id)_queryForAllContactsWithLimit;
- (id)_recordIdsFromRemovingSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2;
- (id)_recreateCorruptDatabase:(id)arg1 withProtection:(BOOL)arg2;
- (void)_removeCorruptionMarker;
- (BOOL)_removeEntitiesWhere:(id)arg1 onPrep:(id /* block */)arg2;
- (void)_removeSnippetsForEntities:(id)arg1;
- (void)_reportDbStats;
- (int)_scoreContactDetail:(id)arg1;
- (void)_selectAuthoritativeDetailsForContactWithId:(long long)arg1;
- (void)_slowCopyFromTable:(id)arg1 toTable:(id)arg2 startingAtEntityId:(unsigned long long)arg3;
- (id)_storageContactsForMasterEntityIds:(id)arg1;
- (void)_trimSerializedContacts;
- (void)_writeContactEntityToJournal:(id)arg1;
- (void)_writeDictionaryToEntities:(id)arg1 update:(BOOL)arg2;
- (void)_writeEntityParentageFor:(id)arg1 entityId:(long long)arg2;
- (long long)_writeEntityToDb:(id)arg1;
- (void)_writeEntityToSnippetsDb:(id)arg1;
- (void)_writeEventEntityToJournal:(id)arg1;
- (void)_writeFTSTermsForEntity:(id)arg1 entityId:(long long)arg2;
- (void)_writeTombstoneForSpotlightReferenceWithBundleIdentifier:(id)arg1 uniqueIdentifier:(id)arg2 domainIdentifier:(id)arg3;
- (void)addInterdictFrom:(id)arg1 with:(id)arg2;
- (BOOL)addSpotlightReferenceToEmailIfFullyDownloaded:(id)arg1 withBundleIdentifier:(id)arg2 uniqueIdentifier:(id)arg3 domainIdentifier:(id)arg4;
- (id)allContactsLimitedTo:(unsigned int)arg1;
- (id)allContactsMasterEntityIdsLimitedTo:(unsigned int)arg1;
- (id)allContactsWithEntityType:(unsigned int)arg1;
- (id)allPseudoContacts;
- (void)analyzeDatabase;
- (id)batch:(id /* block */)arg1;
- (id)batchOf:(unsigned int)arg1 contactsStartingAtEntityId:(unsigned int)arg2;
- (id)childrenFromParentKey:(id)arg1;
- (void)clearAllTables;
- (void)clearAllTombstonesForSpotlightReferences;
- (void)clearCaches;
- (int)clearDatabase:(id)arg1;
- (BOOL)clearDatabases;
- (void)clearMasterEntityCache;
- (id)cnContactMatchesForRecordId:(id)arg1;
- (id)computeBlobs;
- (int)configureMigratorThenMigrateToVersion:(unsigned int)arg1;
- (BOOL)confirm:(BOOL)arg1 orRejectContactByRecordID:(id)arg2 error:(id*)arg3;
- (BOOL)confirmContactByRecordID:(id)arg1 error:(id*)arg2;
- (BOOL)confirmContactDetailByRecordID:(id)arg1 error:(id*)arg2;
- (BOOL)confirmEventByRecordId:(id)arg1 error:(id*)arg2;
- (void)confirmFieldValues:(id)arg1 forEntity:(id)arg2;
- (BOOL)confirmRealtimeContact:(id)arg1 error:(id*)arg2;
- (BOOL)confirmRealtimeEvent:(id)arg1 error:(id*)arg2;
- (BOOL)confirmStoredEvent:(id)arg1 error:(id*)arg2;
- (id)confirmedFieldValuesForEntity:(id)arg1;
- (id)confirmedFieldValuesForEvent:(id)arg1;
- (id)contactIdsMergedWithMasterEntityId:(id)arg1;
- (BOOL)contactIsDisplayable:(id)arg1;
- (BOOL)contactIsSignificant:(id)arg1;
- (BOOL)contactIsSignificantOrSignificanceIsDisabled:(id)arg1;
- (id)contactsWithIdentifiers:(id)arg1;
- (BOOL)corruptionMarkerPresent;
- (id)curatedRecordIds;
- (id)dbHandleForTesting;
- (id)dbStats;
- (void)deleteAllCNContactMatches;
- (void)deleteAllCNContactMatchesForEntityID:(long long)arg1;
- (void)deleteAllCNContactMatchesForIdSet:(id)arg1;
- (void)deleteByRecordId:(id)arg1;
- (void)deleteCNContactMatchForContact:(id)arg1;
- (void)deleteEntitiesByDuplicateKey:(id)arg1;
- (void)deleteMessages:(id)arg1;
- (void)deleteMessagesByDuplicateKey:(id)arg1;
- (void)deleteSerializedContact:(id)arg1;
- (void)deleteSerializedContactForId:(long long)arg1;
- (void)deleteSerializedContactsForIdSet:(id)arg1;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 domainIdentifiers:(id)arg2;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2;
- (void)deleteSpotlightReferencesWithNoBundleIdentifier;
- (id)displayableEntities:(id)arg1;
- (id)duplicateKeysMatchingAnyEventHash:(id)arg1;
- (id)duplicateKeysMatchingAnyTag:(id)arg1;
- (id)duplicateKeysMatchingEmailAddressPrefix:(id)arg1 limitTo:(unsigned int)arg2;
- (unsigned int)entityCount;
- (id)entityFromSqlResult:(struct sqlite3_stmt { }*)arg1;
- (BOOL)entityWantsFullDownload:(id)arg1;
- (BOOL)eventIsCancelled:(id)arg1;
- (BOOL)executeJournals;
- (int)fixupVersionMismatch;
- (void)forceBlobSync;
- (id)getAllLinks;
- (long long)getMaxEntityId;
- (id)getNewBlobsIfChanged;
- (BOOL)hasSpotlightReferenceForBundleIdentifier:(id)arg1 uniqueIdentifier:(id)arg2;
- (id)historyForTesting;
- (double)incStatsCounterWithKey:(id)arg1;
- (id)initForDbStatsOnlyWithError:(id*)arg1;
- (id)initForMigratorTestWithEntityDb:(id)arg1 snippetDb:(id)arg2;
- (id)initWithEntityDbPath:(id)arg1 snippetDbPath:(id)arg2 isEphemeral:(BOOL)arg3 executeJournals:(BOOL)arg4 noMigrate:(BOOL)arg5;
- (BOOL)isEphemeral;
- (BOOL)isRecentlyDeleted:(id)arg1;
- (id)journal;
- (id)languageToUpdateEntityFTSTo;
- (double)lastSeenTimestampForKey:(id)arg1;
- (void)link:(id)arg1 to:(id)arg2 type:(unsigned int)arg3 strength:(double)arg4;
- (id)loadAllContactDetailsForRecordId:(id)arg1;
- (id)loadAllContactDetailsWithWhereClause:(id)arg1 onPrep:(id /* block */)arg2 dedupeAgainst:(id)arg3;
- (id)loadAllPrecomputedContactMatches;
- (id)loadAllSerializedContacts;
- (id)loadCNContactMatchesForContact:(id)arg1 andGetMaxEntityId:(long long*)arg2;
- (id)loadContactByRecordId:(id)arg1;
- (id)loadContactByRecordId:(id)arg1 error:(id*)arg2;
- (id)loadContactDetailsForRecordId:(id)arg1 type:(unsigned int)arg2;
- (id)loadContactDetailsWithWhereClause:(id)arg1 onPrep:(id /* block */)arg2 type:(unsigned int)arg3 dedupeAgainst:(id)arg4;
- (id)loadCuratedEventsStartingAt:(double)arg1;
- (id)loadEntitiesByEntityKey:(id)arg1 entityType:(long long)arg2 resolveDuplicates:(id /* block */)arg3;
- (id)loadEntityByKey:(id)arg1;
- (id)loadEntityByRecordId:(id)arg1;
- (id)loadEventByKey:(id)arg1;
- (id)loadEventByRecordId:(id)arg1;
- (id)loadFullDownloadRequestBatch:(unsigned int)arg1;
- (id)loadInterdicts;
- (id)loadMessagesToRefresh;
- (id)loadOriginByRecordId:(id)arg1;
- (id)loadSerializedContact:(id)arg1;
- (id)loadStatsCounterWithKey:(id)arg1;
- (void)logConfirmPercentAfterContactConfirmation;
- (void)logConfirmPercentAfterContactDetailConfirmation;
- (void)logConfirmPercentAfterContactDetailRejection;
- (void)logConfirmPercentAfterContactRejection;
- (void)markLostSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2;
- (void)markMessagesFound:(id)arg1;
- (void)markMessagesLost:(id)arg1;
- (void)markMessagesUndisplayablyLost:(id)arg1;
- (unsigned int)maxKnownDbVersion;
- (BOOL)mayHaveSentMessageTo:(id)arg1;
- (int)migrate;
- (int)migrateDatabases;
- (int)migrateToVersion:(unsigned int)arg1;
- (BOOL)migrationNeeded;
- (int)migration_AddAuthorColumnIfMissing;
- (int)migration_AddNewishTablesIfMissing;
- (int)migration_ConvertContentAndDupKeyHashesToBlobs;
- (int)migration_CreateFTSTableWithITS;
- (int)migration_DeduplicateIdentityPhones;
- (int)migration_DropMessagingTermsWithPhoneExtensions;
- (int)migration_FixUpColumnsForDevicesWhoMissedTheImprovedLegacyMigration;
- (int)migration_FixupMergeGroups;
- (int)migration_MoveContentToSnippets;
- (int)migration_RebuildIdentityTables;
- (int)migration_RecreateFTSTableWithITS;
- (int)migration_RemoveEntityReferencesWithoutBundleIdentifier;
- (id)mostRecentParentKeyForDuplicateKey:(id)arg1;
- (id)nextPendingGeocode;
- (id)parentKeysForDuplicateKey:(id)arg1;
- (id)prematchedContactIdentifiers;
- (void)prepMigrator;
- (BOOL)processEntity:(id)arg1 recordId:(id)arg2;
- (BOOL)processPseudoContactEntity:(id)arg1 recordId:(id)arg2;
- (void)pruneEntitiesOlderThan:(double)arg1 suspensionHandler:(id /* block */)arg2;
- (void)pruneEntitiesOlderThan:(double)arg1 suspensionHandler:(id /* block */)arg2 batchSize:(unsigned int)arg3;
- (void)pruneLostMessagesWithSource:(id)arg1 count:(unsigned long long)arg2;
- (BOOL)realtimeContactIsSignificant:(id)arg1;
- (BOOL)realtimeContactIsSignificantOrSignificanceIsDisabled:(id)arg1;
- (BOOL)rebuildIdentityTables;
- (BOOL)recentsContainSomeOfEmails:(id)arg1;
- (id)recordIdForKey:(id)arg1;
- (BOOL)registerAndLinkIdentity:(id)arg1 recordId:(id)arg2 phones:(id)arg3 email:(id)arg4 curated:(BOOL)arg5;
- (void)registerCachePrecomputationWithCTS;
- (void)registerSentMessage:(id)arg1;
- (void)reindexSearchableItemsWithMinimumEntityId:(unsigned int)arg1 searchableIndex:(id)arg2 acknowledgementHandler:(id /* block */)arg3;
- (BOOL)rejectContactByRecordID:(id)arg1 error:(id*)arg2;
- (BOOL)rejectContactDetailByRecordID:(id)arg1 error:(id*)arg2;
- (BOOL)rejectEventByRecordId:(id)arg1 error:(id*)arg2;
- (id)rejectFieldValuesForRecordId:(id)arg1;
- (BOOL)rejectRealtimeContact:(id)arg1 error:(id*)arg2;
- (BOOL)rejectRealtimeEvent:(id)arg1 error:(id*)arg2;
- (BOOL)rejectStoredEvent:(id)arg1 error:(id*)arg2;
- (void)resolveFullDownloadRequests:(id)arg1;
- (int)rowIdWhenContactsEnabled;
- (int)rowIdWhenEventsEnabled;
- (int)runQueries:(id)arg1 forVersion:(unsigned int)arg2 inTransactionOnDb:(id)arg3;
- (int)runQuery:(id)arg1 onDb:(id)arg2;
- (void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(id /* block */)arg2;
- (void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(id /* block */)arg3;
- (id)selectEntityQuery:(id)arg1;
- (id)selectMigrationQueue;
- (unsigned int)serializedContactsLimit;
- (id)serializedEntityIds;
- (void)setCRLookupForTesting:(id /* block */)arg1;
- (void)setContactsEnabled:(BOOL)arg1;
- (void)setEventsEnabled:(BOOL)arg1;
- (void)setParentMessagesLimitForTesting:(unsigned int)arg1;
- (void)setSerializedContactsLimit:(unsigned int)arg1;
- (int)skipFromZeroSchema;
- (id)snippetsDbHandleForTesting;
- (id)splitBlob:(id)arg1 withInterdicts:(id)arg2 edges:(id)arg3 curatedRecordIds:(id)arg4;
- (id)splitNeededFor:(id)arg1 withInterdicts:(id)arg2 curatedRecordIds:(id)arg3;
- (id)spotlightContactsAdapter;
- (void)startJournaling;
- (void)stopJournaling;
- (void)storeStatsCounterWithKey:(id)arg1 value:(double)arg2;
- (id)suggestContactByIdentityKey:(id)arg1 parentKey:(id)arg2;
- (id)suggestContactByKey:(id)arg1;
- (id)suggestContactByMasterEntityId:(long long)arg1;
- (id)suggestContactByRecordId:(id)arg1;
- (id)suggestContactMatchesByContactDetailTag:(id)arg1;
- (id)suggestContactMatchesWithContact:(id)arg1 limitTo:(unsigned int)arg2;
- (id)suggestContactMatchesWithFullTextSearch:(id)arg1 limitTo:(unsigned int)arg2;
- (id)suggestContactMatchesWithMessagingPrefix:(id)arg1 limitTo:(unsigned int)arg2;
- (id)suggestContactsByMasterEntityQuery:(id)arg1 limit:(unsigned int)arg2 bindings:(id /* block */)arg3;
- (id)suggestContactsByTag:(id)arg1;
- (id)suggestContactsWithPrefix:(id)arg1 limitTo:(unsigned int)arg2;
- (id)suggestEventsStartingAt:(double)arg1 endingAt:(double)arg2 limitTo:(unsigned int)arg3;
- (id)suggestEventsStartingAt:(double)arg1 endingAt:(double)arg2 limitTo:(unsigned int)arg3 additionalWhereClause:(id)arg4 options:(unsigned int)arg5 onPrep:(id /* block */)arg6;
- (id)suggestEventsStartingAt:(double)arg1 endingAt:(double)arg2 limitTo:(unsigned int)arg3 options:(unsigned int)arg4;
- (id)suggestEventsStartingAt:(double)arg1 endingAt:(double)arg2 prefix:(id)arg3 limitTo:(unsigned int)arg4;
- (id)suggestEventsStartingAt:(double)arg1 endingAt:(double)arg2 prefix:(id)arg3 limitTo:(unsigned int)arg4 options:(unsigned int)arg5;
- (id)suggestStorageContactsAndTokensWithQuery:(id)arg1 limitTo:(unsigned int)arg2;
- (id)suggestStorageContactsWithContact:(id)arg1 limitTo:(unsigned int)arg2;
- (BOOL)syncNewBlobsIfChanged;
- (BOOL)tombstoneExistsForSpotlightReferenceWithBundleIdentifier:(id)arg1 uniqueIdentifier:(id)arg2 domainIdentifier:(id)arg3;
- (id)unmergedCandidatesLimitedTo:(int)arg1;
- (int)unmigrateDatabases;
- (void)updateCNContactMatches:(id)arg1;
- (void)updateLanguageForFTSTablesToLanguage:(id)arg1;
- (void)updateMessages:(id)arg1 state:(unsigned int)arg2;
- (void)updateSerializedContacts:(id)arg1;
- (void)vacuum;
- (BOOL)waitForMigrations;
- (void)writeCNContactMatchAndUpdateSetForContact:(id)arg1 withMatches:(id)arg2 andMaxEntityID:(long long)arg3;
- (void)writeCNContactMatchForContact:(id)arg1 withMatches:(id)arg2 andMaxEntityID:(long long)arg3;
- (long long)writeEntity:(id)arg1;
- (long long)writeEntity:(id)arg1 withSpotlightReferenceForBundleIdentifier:(id)arg2 uniqueIdentifier:(id)arg3 domainIdentifier:(id)arg4;
- (long long)writeEntityFields:(id)arg1 parentEntity:(id)arg2;
- (void)writeEntityGeocodeResultToDb:(id)arg1;
- (void)writeIdentityBlobs:(id)arg1 forceRewrite:(BOOL)arg2;
- (void)writeSerializedContact:(id)arg1;
- (void)writeSerializedContactAndUpdateEntityIDSet:(id)arg1;
- (void)writeSerializedContactPlaceholder:(long long)arg1;
- (void)writeTombstoneForSpotlightReferenceWithBundleIdentifier:(id)arg1;
- (void)writeTombstoneForSpotlightReferenceWithBundleIdentifier:(id)arg1 domainIdentifier:(id)arg2;
- (void)writeTombstoneForSpotlightReferenceWithBundleIdentifier:(id)arg1 uniqueIdentifier:(id)arg2;

@end

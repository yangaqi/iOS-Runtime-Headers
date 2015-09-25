/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDPrimaryDatabaseMigrator : HDDatabaseMigrator

- (int)_addAuthorizationAnchorColumnWithError:(id*)arg1;
- (int)_addAuthorizationForeignKeysWithError:(id*)arg1;
- (int)_addBasalEnergyColumnToWorkoutsWithError:(id*)arg1;
- (int)_addDataProvenanceTableAndMigrateWithError:(id*)arg1;
- (int)_addDeviceEnabledColumnToKnownDevicesWithError:(id*)arg1;
- (int)_addEnergyBurnedGoalDateAndAnchorsToActivityCacheTableWithError:(id*)arg1;
- (int)_addMenstruationSamplesTable:(id*)arg1;
- (int)_addNotNullConstraintToProvenanceColumnWithError:(id*)arg1;
- (int)_addOriginalDataColumnsToQuantitySamplesWithError:(id*)arg1;
- (int)_addProvenanceColumnToCorrelationsWithError:(id*)arg1;
- (int)_addWalkingDistanceColumnToActivityCacheWithError:(id*)arg1;
- (int)_changeWorkoutActivityTypeOther:(id*)arg1;
- (int)_cleanupOrphanedRowsWithError:(id*)arg1;
- (int)_clearMenstrualFlowAndSexualActivitySamples:(id*)arg1;
- (int)_clearSamplesWithoutSourcesWithError:(id*)arg1;
- (int)_clearSourceOrderingWithError:(id*)arg1;
- (int)_createAchievementsAndActivityCachesTablesWithError:(id*)arg1;
- (int)_createActivityCachesTableWithError:(id*)arg1;
- (int)_createCorrelationsObjectIdIndexWithError:(id*)arg1;
- (int)_createMetadataValuesObjectIdIndexWithError:(id*)arg1;
- (int)_createNanoPairingTableWithError:(id*)arg1;
- (int)_createProtectedKeyValueTableAndMigrateCharacteristicsAndDefaultsWithError:(id*)arg1;
- (int)_createSyncAnchorsTableWithError:(id*)arg1;
- (int)_createUnprotectedKeyValueTableWithError:(id*)arg1;
- (int)_dropDataSessionActivitiesTableWithError:(id*)arg1;
- (int)_dropMenstruationTable:(id*)arg1;
- (int)_fixDanglingSourcesAndProvenancesWithError:(id*)arg1;
- (int)_fixObjectsProvenanceForeignKeyWithError:(id*)arg1;
- (int)_fixProvenancesWithZeroSourceOrDeviceWithError:(id*)arg1;
- (int)_fixupMigratedProtectedSchemaWithError:(id*)arg1;
- (int)_initializeDatabaseIdentifiersWithHealthDaemon:(id)arg1 error:(id*)arg2;
- (id)_lastReceivedNatalieDatum:(id*)arg1;
- (id)_lastReceivedPedometerDatum:(id*)arg1;
- (int)_migrateAchievementDataStoreSessionCountsWithError:(id*)arg1;
- (int)_migrateAuthorizationsForSync:(id*)arg1;
- (int)_migrateCalorimetryUserDefaults:(id*)arg1;
- (int)_migrateCoreMotionFromUserDefaultsToKeyValueWithError:(id*)arg1;
- (int)_migrateDataProvenanceValueAndRenameSyncStoreColumnWithError:(id*)arg1;
- (int)_migrateDataTypeSourceOrderForSyncAndForeignKeys:(id*)arg1;
- (int)_migrateKeyValueColumnsFromStringToText:(BOOL)arg1 error:(id*)arg2;
- (int)_migrateLastSessionAnchorKeyToEndDateWithHealthDaemon:(id)arg1 error:(id*)arg2;
- (int)_migrateNanoPairingSchema:(id*)arg1;
- (int)_migratePedometerUserDefaults:(id*)arg1;
- (int)_migrateSedentaryStateFromQuantityToCategoryWithError:(id*)arg1;
- (int)_migrateSourceDevices:(id*)arg1;
- (int)_migrateSourcesTableForSync:(id*)arg1;
- (int)_migrateSourcesToProvenanceWithError:(id*)arg1;
- (id)_migrationStepsForProtectedDatabaseWithHealthDaemon:(id)arg1;
- (id)_migrationStepsForUnprotectedDatabase;
- (int)_removeAchievementsAndActivityCachesFromUnprotectedDatabaseWithError:(id*)arg1;
- (int)_removeStandHourWriteAuthorizationWithError:(id*)arg1;
- (int)_renameKeyValueSyncStoreColumnInProtectedDabase:(BOOL)arg1 error:(id*)arg2;
- (int)_runMigrationStep:(id)arg1 currentVersion:(int*)arg2 databaseName:(id)arg3 error:(id*)arg4;
- (int)_runMigrationSteps:(id)arg1 currentVersion:(int*)arg2 databaseName:(id)arg3 expectedFinalVersion:(int)arg4 error:(id*)arg5;
- (int)_setAuthorizationAnchorWithError:(id*)arg1;
- (BOOL)_setHealthAppSourceForAllObjectsWithHealthDaemon:(id)arg1 error:(id*)arg2;
- (int)_setLastOkemoZursObjectAnchorWithError:(id*)arg1;
- (BOOL)_updateDataCollectorKeyValueContextWithObject:(id)arg1 domain:(id)arg2 error:(id*)arg3;
- (int)_updateDeviceEnabledWithError:(id*)arg1;
- (int)_updateHeightPreferenceWithError:(id*)arg1;
- (int)migrateProtectedDatabaseFromVersion:(int)arg1 healthDaemon:(id)arg2 error:(id*)arg3;
- (int)migrateUnprotectedDatabaseFromVersion:(int)arg1 error:(id*)arg2;

@end

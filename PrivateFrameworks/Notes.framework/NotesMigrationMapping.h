/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface NotesMigrationMapping : NSObject {
    NSString *_descriptionString;
    NSManagedObjectModel *_destinationModel;
    NSArray *_sourceModels;
    int _type;
}

@property (copy) NSString *descriptionString;
@property (retain) NSManagedObjectModel *destinationModel;
@property (copy) NSArray *sourceModels;
@property int type;

+ (id)customMappingFromSourceModelName:(id)arg1 toDestinationModelName:(id)arg2;
+ (id)descriptionStringFromSourceStoreNames:(id)arg1 destinationStoreName:(id)arg2;
+ (id)inferredMappingFromSourceModelNames:(id)arg1 toDestinationModelName:(id)arg2;
+ (id)mappings;
+ (id)modelForModelName:(id)arg1;

- (void).cxx_destruct;
- (BOOL)canMigrateStoreMetadata:(id)arg1;
- (id)description;
- (id)descriptionString;
- (id)destinationModel;
- (id)mappingModelForStoreMetadata:(id)arg1;
- (void)setDescriptionString:(id)arg1;
- (void)setDestinationModel:(id)arg1;
- (void)setSourceModels:(id)arg1;
- (void)setType:(int)arg1;
- (id)sourceModelForStoreMetadata:(id)arg1;
- (id)sourceModels;
- (int)type;

@end

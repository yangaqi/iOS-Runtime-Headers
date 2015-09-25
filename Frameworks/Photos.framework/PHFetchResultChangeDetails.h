/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHFetchResultChangeDetails : NSObject {
    NSIndexSet *_changedIndexes;
    NSArray *_changedItems;
    NSArray *_currentItems;
    PHFetchResult *_fetchResultAfterChanges;
    PHFetchResult *_fetchResultBeforeChanges;
    NSIndexSet *_insertedIndexes;
    struct __CFArray { } *_movedFromIndexes;
    NSIndexSet *_movedIndexes;
    NSArray *_previousItems;
    NSIndexSet *_removedIndexes;
    BOOL _skipIncrementalChanges;
}

@property (readonly) NSIndexSet *changedIndexes;
@property (readonly) NSArray *changedObjects;
@property (readonly) PHFetchResult *fetchResultAfterChanges;
@property (readonly) PHFetchResult *fetchResultBeforeChanges;
@property (readonly) BOOL hasIncrementalChanges;
@property (readonly) BOOL hasMoves;
@property (readonly) NSIndexSet *insertedIndexes;
@property (readonly) NSArray *insertedObjects;
@property (readonly) NSIndexSet *removedIndexes;
@property (readonly) NSArray *removedObjects;

+ (id)_oidsForPHObjects:(id)arg1;
+ (id)changeDetailsFromFetchResult:(id)arg1 toFetchResult:(id)arg2 changedObjects:(id)arg3;

- (void).cxx_destruct;
- (void)calculateDiffs;
- (id)changedIndexes;
- (id)changedObjects;
- (id)currentItems;
- (void)dealloc;
- (id)description;
- (void)enumerateMovesWithBlock:(id /* block */)arg1;
- (id)fetchResultAfterChanges;
- (id)fetchResultBeforeChanges;
- (BOOL)hasDiffs;
- (BOOL)hasIncrementalChanges;
- (BOOL)hasMoves;
- (id)initWithFetchResult:(id)arg1 currentFetchResult:(id)arg2 changedItems:(id)arg3 unknownMergeEvent:(BOOL)arg4;
- (id)initWithManualFetchResultAfterChanges:(id)arg1;
- (id)insertedIndexes;
- (id)insertedObjects;
- (id)removedIndexes;
- (id)removedObjects;
- (BOOL)shouldReload;
- (unsigned int)snapshotIndexForContainedObject:(id)arg1;

@end

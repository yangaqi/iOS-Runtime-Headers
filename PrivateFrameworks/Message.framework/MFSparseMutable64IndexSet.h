/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFSparseMutable64IndexSet : NSObject <NSCopying, NSMutableCopying> {
    unsigned int _count;
    unsigned int _cursor;
    unsigned long long *_storage;
    unsigned int _storageSize;
}

+ (id)indexSet;

- (void)_garbageCollectStorageIfNecessary;
- (void)_incrementStorageIfNecessaryForCount:(unsigned int)arg1;
- (unsigned long)_insertionPositionOfIndex:(unsigned long long)arg1;
- (unsigned long)_positionOfIndex:(unsigned long long)arg1;
- (void)addIndex:(unsigned long long)arg1;
- (void)addIndexes:(id)arg1;
- (BOOL)containsIndex:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (void)dealloc;
- (id)description;
- (void)enumerateIndexesWithBlock:(id /* block */)arg1;
- (unsigned long long)firstIndex;
- (unsigned long long)indexGreaterThanIndex:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)removeIndex:(unsigned long long)arg1;

@end

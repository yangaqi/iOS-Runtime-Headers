/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLRevGeoCompoundNameInfo : NSObject {
    BOOL _isContinuation;
    NSString *_namePrefix;
    NSString *_nameSuffix;
    NSArray *_sortedNames;
    BOOL _suffixWhenPrefixOnly;
}

@property (nonatomic) BOOL isContinuation;
@property (nonatomic, readonly, copy) NSArray *localizedSortedNames;
@property (nonatomic, readonly, copy) NSString *localizedTitleForNameInfo;
@property (nonatomic, copy) NSString *namePrefix;
@property (nonatomic, copy) NSString *nameSuffix;
@property (nonatomic, copy) NSArray *sortedNames;
@property (nonatomic) BOOL suffixWhenPrefixOnly;

+ (id)_localizedNameForName:(id)arg1;

- (void)dealloc;
- (id)description;
- (id)dictionaryForInfo;
- (id)initWithDictionary:(id)arg1;
- (BOOL)isContinuation;
- (id)localizedSortedNames;
- (id)localizedTitleForNameInfo;
- (id)namePrefix;
- (id)nameSuffix;
- (void)setIsContinuation:(BOOL)arg1;
- (void)setNamePrefix:(id)arg1;
- (void)setNameSuffix:(id)arg1;
- (void)setSortedNames:(id)arg1;
- (void)setSuffixWhenPrefixOnly:(BOOL)arg1;
- (id)sortedNames;
- (BOOL)suffixWhenPrefixOnly;

@end

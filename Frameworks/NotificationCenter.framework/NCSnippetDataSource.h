/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
 */

@interface NCSnippetDataSource : NSObject <NCDataSource, NCSnippetDataSourceObserver, _NCSnippetDataSource> {
    _NCConcreteDataSource *_concreteDataSource;
    NSString *_dataSourceIdentifier;
    NSString *_parentDataSourceIdentifier;
    BBSectionInfo *_representedSectionInfo;
    int _snippetDataSourceCategory;
    <_NCSnippetDataSourceManager> *_snippetDataSourceManager;
}

@property (nonatomic, readonly) NSString *dataSourceIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSString *parentDataSourceIdentifier;
@property (nonatomic, retain) BBSectionInfo *representedSectionInfo;
@property (nonatomic, readonly) int snippetDataSourceCategory;
@property (nonatomic) <_NCSnippetDataSourceManager> *snippetDataSourceManager;
@property (readonly) Class superclass;

- (void)addSnippetObserver:(id)arg1 completion:(id /* block */)arg2;
- (id)dataSourceIdentifier;
- (void)dealloc;
- (id)description;
- (id)initWithCategory:(int)arg1 identifier:(id)arg2 parentDataSourceIdentifier:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)parentDataSourceIdentifier;
- (void)removeSnippetObserver:(id)arg1 completion:(id /* block */)arg2;
- (id)representedSectionInfo;
- (void)setRepresentedSectionInfo:(id)arg1;
- (void)setSnippetDataSourceManager:(id)arg1;
- (void)snippetDataSource:(id)arg1 removeDatum:(id)arg2;
- (void)snippetDataSource:(id)arg1 replaceWithDatum:(id)arg2;
- (int)snippetDataSourceCategory;
- (id)snippetDataSourceManager;

@end

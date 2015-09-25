/* Generated by RuntimeBrowser.
 */

@protocol TSDInfo <NSObject, TSKModel, TSPCopying, TSDInfoUsingObjectPlaceholderGeometry>

@required

- (void)clearBackPointerToParentInfoIfNeeded:(NSObject<TSDContainerInfo> *)arg1;
- (TSDInfoGeometry *)geometry;
- (BOOL)isAnchoredToText;
- (BOOL)isAttachedToBodyText;
- (BOOL)isFloatingAboveText;
- (BOOL)isInlineWithText;
- (BOOL)isThemeContent;
- (Class)layoutClass;
- (TSPObject<TSDOwningAttachment> *)owningAttachment;
- (TSPObject<TSDOwningAttachment> *)owningAttachmentNoRecurse;
- (NSObject<TSDContainerInfo> *)parentInfo;
- (Class)repClass;
- (void)setGeometry:(TSDInfoGeometry *)arg1;
- (void)setOwningAttachment:(TSPObject<TSDOwningAttachment> *)arg1;
- (void)setParentInfo:(NSObject<TSDContainerInfo> *)arg1;
- (void)setPrimitiveGeometry:(TSDInfoGeometry *)arg1;

@optional

- (TSKCollaboratorCursor *)collaboratorCursorForSelectionPath:(TSKSelectionPath *)arg1;
- (<TSDInfoUUIDPathPrefixComponentsProvider> *)uuidPathPrefixComponentsProvider;

@end

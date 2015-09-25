/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentOptionGroup : NSObject {
    BOOL _editable;
    NSString *_groupDisplayMode;
    NSString *_groupDisplayName;
    NSString *_groupType;
    int _indexForSelectedItem;
    NSArray *_items;
    NSString *_readOnlyDisplayName;
    id /* block */ _selectionChangedHandler;
}

@property (nonatomic, readonly) NSString *abTitleDisplayName;
@property (nonatomic, readonly) NSString *addExistingDisplayName;
@property (nonatomic, readonly) NSString *addNewDisplayName;
@property (getter=isEditable, nonatomic) BOOL editable;
@property (nonatomic, copy) NSString *groupDisplayMode;
@property (nonatomic, copy) NSString *groupDisplayName;
@property (nonatomic, copy) NSString *groupType;
@property (nonatomic) int indexForSelectedItem;
@property (nonatomic, copy) NSArray *items;
@property (nonatomic, copy) NSString *readOnlyDisplayName;
@property (nonatomic, copy) id /* block */ selectionChangedHandler;

- (id)abTitleDisplayName;
- (id)addExistingDisplayName;
- (id)addNewDisplayName;
- (void)dealloc;
- (id)groupDisplayMode;
- (id)groupDisplayName;
- (id)groupType;
- (int)indexForSelectedItem;
- (id)init;
- (BOOL)isEditable;
- (id)items;
- (void)prependGroupItem:(id)arg1 promoteAndCoalesceDupes:(BOOL)arg2;
- (void)prependGroupItems:(id)arg1 afterItem:(id)arg2;
- (id)readOnlyDisplayName;
- (void)removeGroupItem:(id)arg1;
- (id /* block */)selectionChangedHandler;
- (void)setEditable:(BOOL)arg1;
- (void)setGroupDisplayMode:(id)arg1;
- (void)setGroupDisplayName:(id)arg1;
- (void)setGroupType:(id)arg1;
- (void)setIndexForSelectedItem:(int)arg1;
- (void)setItems:(id)arg1;
- (void)setReadOnlyDisplayName:(id)arg1;
- (void)setSelectionChangedHandler:(id /* block */)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNQuickActionsUsageManager : NSObject {
    NSCountedSet *_actionsUsageSet;
    NSArray *_cachedInteractions;
    NSDate *_cachedInteractionsDate;
    CNContact *_contact;
    NSMutableSet *_enabledActionIdentifiers;
    BOOL _sortsWithDuet;
}

@property (nonatomic, retain) NSCountedSet *actionsUsageSet;
@property (nonatomic, retain) NSArray *cachedInteractions;
@property (nonatomic, retain) NSDate *cachedInteractionsDate;
@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, retain) NSMutableSet *enabledActionIdentifiers;
@property (nonatomic) BOOL sortsWithDuet;

+ (id)managerForContact:(id)arg1;
+ (BOOL)sortUsingCoreDuetAvailable;

- (void).cxx_destruct;
- (void)_updateDuetInteractionsIfNeeded;
- (void)actionPerformed:(id)arg1;
- (id)actionsUsageSet;
- (void)cacheEnabledStateForAction:(id)arg1;
- (id)cachedInteractions;
- (id)cachedInteractionsDate;
- (id)contact;
- (id)enabledActionIdentifiers;
- (id)init;
- (double)scoreForAction:(id)arg1;
- (void)setActionsUsageSet:(id)arg1;
- (void)setCachedInteractions:(id)arg1;
- (void)setCachedInteractionsDate:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setEnabledActionIdentifiers:(id)arg1;
- (void)setSortsWithDuet:(BOOL)arg1;
- (id)sortedActions:(id)arg1;
- (BOOL)sortsWithDuet;
- (void)updateCachedEnabledStateForAction:(id)arg1;

@end

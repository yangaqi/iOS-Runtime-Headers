/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

@interface CNAutocompleteRecentResult : CNAutocompleteResult {
    BOOL _completesChosenGroup;
    NSDate *_date;
    BOOL _matchesSendingAddress;
}

@property BOOL completesChosenGroup;
@property (readonly) NSDate *date;
@property BOOL matchesSendingAddress;

+ (id)comparators;
+ (id)contactResultWithDisplayName:(id)arg1 value:(id)arg2 lastSendingAddress:(id)arg3 date:(id)arg4;
+ (id)groupResultWithDisplayName:(id)arg1 date:(id)arg2;

- (void).cxx_destruct;
- (BOOL)completesChosenGroup;
- (id)date;
- (BOOL)matchesSendingAddress;
- (void)setCompletesChosenGroup:(BOOL)arg1;
- (void)setMatchesSendingAddress:(BOOL)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

@interface CNAutocompleteRecentsSearch : NSObject <CNAutocompleteSearch> {
    CRRecentContactsLibrary *_library;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) CRRecentContactsLibrary *library;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)autocompleteResultForRecent:(id)arg1 factory:(id)arg2 membersFactory:(id)arg3 chosenAddressHashes:(id)arg4 searchString:(id)arg5;
- (id)contactAutocompleteResultForRecent:(id)arg1 factory:(id)arg2 completesChosenGroup:(BOOL)arg3;
- (id)executeRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)findRecentContactsWithString:(id)arg1 domain:(id)arg2 fetchContext:(id)arg3 kinds:(id)arg4 groupThreshold:(unsigned int)arg5 error:(id*)arg6;
- (id)groupAutocompleteResultForRecent:(id)arg1 factory:(id)arg2 membersFactory:(id)arg3 chosenAddressHashes:(id)arg4 searchString:(id)arg5;
- (id)init;
- (id)initWithCoreRecentContactsLibrary:(id)arg1;
- (id)library;
- (id /* block */)resultTransformWithFactory:(id)arg1 membersFactory:(id)arg2 chosenAddressHashes:(id)arg3 searchString:(id)arg4;
- (void)setLibrary:(id)arg1;

@end

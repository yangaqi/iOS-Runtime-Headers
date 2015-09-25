/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSCloudStorageOffersManager : NSObject <CommerceRemoteUIDelegateDelegate> {
    CommerceRemoteUIDelegate *_commerceDelegate;
    <PSCloudStorageOffersManagerDelegate> *_delegate;
    unsigned long long _requiredStorageThreshold;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PSCloudStorageOffersManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) unsigned long long requiredStorageThreshold;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)beginFlowWithNavigationController:(id)arg1 modally:(BOOL)arg2;
- (void)cancelLoad;
- (void)commerceDelegate:(id)arg1 loadDidFailWithError:(id)arg2;
- (void)commerceDelegate:(id)arg1 willPresentObjectModel:(id)arg2 page:(id)arg3;
- (void)commerceDelegateDidCancel:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (unsigned long long)requiredStorageThreshold;
- (void)setDelegate:(id)arg1;
- (void)setRequiredStorageThreshold:(unsigned long long)arg1;

@end

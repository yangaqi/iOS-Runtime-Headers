/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVSubscriptionResponse : NSObject <NSCopying, SSXPCCoding> {
    NSMutableDictionary *_accountUniqueIdentifierToSubscriptionStatus;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)setSubscriptionStatus:(id)arg1 forAccountUniqueIdentifier:(unsigned long long)arg2;
- (id)subscriptionStatusForAccountUniqueIdentifier:(unsigned long long)arg1;

@end

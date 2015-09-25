/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFDARequestQueue : MFRequestQueue {
    DAMailAccount *_account;
    NSString *_folderID;
}

- (void)dealloc;
- (id)filterRequests:(id)arg1 consumers:(id)arg2 newConsumers:(id*)arg3;
- (id)initWithAccount:(id)arg1 folderID:(id)arg2;
- (void)processRequests:(id)arg1 consumers:(id)arg2;

@end

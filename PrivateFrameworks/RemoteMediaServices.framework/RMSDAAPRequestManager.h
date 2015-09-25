/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSDAAPRequestManager : NSObject {
    <RMSDAAPRequestManagerDelegate> *_delegate;
    RMSFairPlaySession *_fairPlaySession;
    NSString *_homeSharingGroupKey;
    NSString *_hostName;
    NSString *_pairingGUID;
    int _port;
    int _sessionIdentifier;
    NSURLSession *_urlSession;
}

@property (nonatomic) <RMSDAAPRequestManagerDelegate> *delegate;
@property (nonatomic, retain) RMSFairPlaySession *fairPlaySession;
@property (nonatomic, copy) NSString *homeSharingGroupKey;
@property (nonatomic, copy) NSString *hostName;
@property (nonatomic, copy) NSString *pairingGUID;
@property (nonatomic) int port;
@property (nonatomic) int sessionIdentifier;

- (void).cxx_destruct;
- (id)delegate;
- (id)fairPlaySession;
- (id)homeSharingGroupKey;
- (id)hostName;
- (id)init;
- (id)pairingGUID;
- (int)port;
- (id)requestControlCommand:(id)arg1 text:(id)arg2 promptRevision:(int)arg3 completionHandler:(id /* block */)arg4;
- (id)requestWithPath:(id)arg1 method:(id)arg2 postData:(id)arg3 queryArgs:(id)arg4 completionHandler:(id /* block */)arg5;
- (int)sessionIdentifier;
- (void)setDelegate:(id)arg1;
- (void)setFairPlaySession:(id)arg1;
- (void)setHomeSharingGroupKey:(id)arg1;
- (void)setHostName:(id)arg1;
- (void)setPairingGUID:(id)arg1;
- (void)setPort:(int)arg1;
- (void)setSessionIdentifier:(int)arg1;

@end

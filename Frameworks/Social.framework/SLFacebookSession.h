/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLFacebookSession : NSObject {
    <SLFacebookRemoteSessionProtocol> *_remoteSession;
}

+ (id)_remoteInterface;
+ (id)sharedSession;

- (void).cxx_destruct;
- (void)cancelUploadWithIdentifier:(id)arg1;
- (void)fetchLikeStatusForURL:(id)arg1 flags:(unsigned int)arg2 completion:(id /* block */)arg3;
- (id)init;
- (void)injectCompletedUploadWithCompletion:(id /* block */)arg1;
- (void)likeURL:(id)arg1 completion:(id /* block */)arg2;
- (void)revokeAccessTokenForAppWithID:(id)arg1;
- (void)revokeAllAccessTokensForDevice;
- (void)testCall;
- (id)tokenSecretForEntitledClientWithError:(id*)arg1;
- (void)unlikeURL:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)uploadPost:(id)arg1;
- (BOOL)uploadPost:(id)arg1 forPID:(int)arg2;
- (void)uploadPost:(id)arg1 suppressAlerts:(BOOL)arg2 withPostCompletion:(id /* block */)arg3;
- (BOOL)uploadProfilePicture:(id)arg1 error:(id*)arg2;
- (void)uploadsInProgress:(id /* block */)arg1;

@end

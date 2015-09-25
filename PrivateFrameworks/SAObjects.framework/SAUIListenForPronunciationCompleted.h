/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIListenForPronunciationCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSNumber *errorCode;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *interactionId;
@property (nonatomic, retain) SASPronunciationData *pronunciationData;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)listenForPronunciationCompleted;
+ (id)listenForPronunciationCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)errorCode;
- (id)groupIdentifier;
- (id)interactionId;
- (id)pronunciationData;
- (void)setErrorCode:(id)arg1;
- (void)setInteractionId:(id)arg1;
- (void)setPronunciationData:(id)arg1;

@end

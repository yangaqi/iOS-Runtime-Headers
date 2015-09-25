/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNChangesNotifier : NSObject {
    CNChangesNotifierProxy *_notifierProxy;
}

@property (nonatomic, retain) CNChangesNotifierProxy *notifierProxy;

+ (void)flushSharedNotifier;
+ (id)sharedNotifier;

- (void)dealloc;
- (void)didChangeMeContactSuccessfully:(BOOL)arg1 fromContactStore:(id)arg2;
- (void)didSaveChangesSuccessfully:(BOOL)arg1 fromContactStore:(id)arg2;
- (id)init;
- (id)notifierProxy;
- (void)setNotifierProxy:(id)arg1;
- (void)waitForCurrentTasksToFinish;
- (void)willSaveChanges;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@interface DDDetectionController : NSObject <UIActionSheetDelegate> {
    DDActionController *_actionController;
    NSMapTable *_containerToContextsTable;
    NSMapTable *_containerToOperationsTable;
    NSMapTable *_containerToResultsTable;
    NSObject<DDDetectionControllerDelegate> *_delegate;
    NSOperationQueue *_fullScannerQueue;
    NSObject<OS_dispatch_queue> *_protectQueue;
    NSOperationQueue *_urlScannerQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property NSObject<DDDetectionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (BOOL)_shouldConsiderResultForCoreRecents:(struct __DDResult { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __DDQueryRange { struct __DDQueryOffset { int x_1_2_1; int x_1_2_2; } x_2_1_1; struct __DDQueryOffset { int x_2_2_1; int x_2_2_2; } x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; int x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; void *x9; int x10; }*)arg1;
+ (id)sharedController;
+ (id)tapAndHoldSchemes;

- (id)_applyBlock:(id /* block */)arg1 withResultsAtIndex:(unsigned int)arg2 ofStorage:(id)arg3 context:(id)arg4;
- (void)_commonResetResultsForContainer:(id)arg1;
- (void)_doURLification:(id)arg1;
- (void)_enqueueOperation:(id)arg1;
- (id)_newOperationForContainer:(id)arg1;
- (void)_resetStoredResultsForContainer:(id)arg1;
- (struct __DDResult { }*)_resultForAnchor:(id)arg1 forFrame:(id)arg2 context:(id*)arg3;
- (struct __DDResult { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __DDQueryRange { struct __DDQueryOffset { int x_1_2_1; int x_1_2_2; } x_2_1_1; struct __DDQueryOffset { int x_2_2_1; int x_2_2_2; } x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; int x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; void *x9; int x10; }*)_resultForIdentifier:(id)arg1 forContainer:(id)arg2 context:(id*)arg3;
- (id)_resultForLinkAtIndex:(unsigned int)arg1 inTextStorage:(id)arg2 subResult:(id*)arg3 url:(id*)arg4;
- (struct __DDResult { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __DDQueryRange { struct __DDQueryOffset { int x_1_2_1; int x_1_2_2; } x_2_1_1; struct __DDQueryOffset { int x_2_2_1; int x_2_2_2; } x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; int x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; void *x9; int x10; }*)_resultForURL:(id)arg1 forContainer:(id)arg2 context:(id*)arg3;
- (BOOL)_shouldImmediatelyShowActionSheetForCoreResult:(struct __DDResult { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __DDQueryRange { struct __DDQueryOffset { int x_1_2_1; int x_1_2_2; } x_2_1_1; struct __DDQueryOffset { int x_2_2_1; int x_2_2_2; } x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; int x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; void *x9; int x10; }*)arg1;
- (BOOL)_shouldImmediatelyShowActionSheetForURL:(id)arg1;
- (void)_startCoalescedURLification:(id)arg1;
- (void)_startCoalescedURLification:(id)arg1 clearPreviousResults:(BOOL)arg2;
- (id)_subResultAtIndex:(unsigned int)arg1 ofResult:(id)arg2;
- (id)actionsAtIndex:(unsigned int)arg1 ofStorage:(id)arg2 context:(id)arg3;
- (id)actionsForAnchor:(id)arg1 url:(id)arg2 forFrame:(id)arg3;
- (id)actionsForDOMNode:(id)arg1 forFrame:(id)arg2;
- (id)actionsForURL:(id)arg1;
- (void)cancelURLificationForContainer:(id)arg1;
- (void)cancelURLificationForFrame:(id)arg1;
- (void)containerWillBeRemoved:(id)arg1;
- (id)copyContextForContainer:(id)arg1;
- (void)dealloc;
- (id)defaultActionAtIndex:(unsigned int)arg1 ofStorage:(id)arg2 context:(id)arg3;
- (id)defaultActionForAnchor:(id)arg1 url:(id)arg2 forFrame:(id)arg3;
- (id)defaultActionForDOMNode:(id)arg1 forFrame:(id)arg2;
- (id)delegate;
- (void)frameWillBeRemoved:(id)arg1;
- (id)init;
- (void)performAction:(id)arg1 fromAlertController:(id)arg2 interactionDelegate:(id)arg3;
- (void)performAction:(id)arg1 inView:(id)arg2 interactionDelegate:(id)arg3;
- (void)resetResultsForContainer:(id)arg1;
- (void)resetResultsForFrame:(id)arg1;
- (void)resetResultsForTextView:(id)arg1;
- (struct __DDResult { }*)resultForDOMNode:(id)arg1 forFrame:(id)arg2;
- (struct __DDResult { }*)resultForLinkAtIndex:(unsigned int)arg1 inTextStorage:(id)arg2;
- (struct __DDResult { }*)resultForNode:(id)arg1 url:(id)arg2 frame:(id)arg3 contextRef:(id*)arg4;
- (void)setContext:(id)arg1 forContainer:(id)arg2;
- (void)setContext:(id)arg1 forFrame:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setResults:(struct __CFArray { }*)arg1 forContainer:(id)arg2;
- (void)setResults:(struct __CFArray { }*)arg1 forFrame:(id)arg2;
- (BOOL)shouldImmediatelyShowActionSheetForTapAtIndex:(unsigned int)arg1 ofStorage:(id)arg2;
- (BOOL)shouldImmediatelyShowActionSheetForURL:(id)arg1 forFrame:(id)arg2;
- (void)startURLificationForContainer:(id)arg1 detectedTypes:(unsigned int)arg2;
- (void)startURLificationForContainer:(id)arg1 detectedTypes:(unsigned int)arg2 options:(int)arg3;
- (void)startURLificationForFrame:(id)arg1 detectedTypes:(unsigned int)arg2;
- (void)startURLificationForFrame:(id)arg1 detectedTypes:(unsigned int)arg2 options:(int)arg3;

@end

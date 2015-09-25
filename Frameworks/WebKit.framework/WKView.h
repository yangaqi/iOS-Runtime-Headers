/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKView : UIView <UIScrollViewDelegate> {
    BOOL _allowsBackForwardNavigationGestures;
    struct RetainPtr<WKContentView> { 
        void *m_ptr; 
    } _contentView;
    WKViewData *_data;
    BOOL _drawsBackground;
    BOOL _drawsTransparentBackground;
    struct unique_ptr<WebKit::ViewGestureController, std::__1::default_delete<WebKit::ViewGestureController> > { 
        struct __compressed_pair<WebKit::ViewGestureController *, std::__1::default_delete<WebKit::ViewGestureController> > { 
            struct ViewGestureController {} *__first_; 
        } __ptr_; 
    } _gestureController;
    BOOL _hasStaticMinimumLayoutSize;
    bool _isChangingObscuredInsetsInteractively;
    BOOL _isWaitingForNewLayerTreeAfterDidCommitLoad;
    float _lastAdjustmentForScroller;
    struct CGSize { 
        float width; 
        float height; 
    } _minimumLayoutSizeOverride;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _obscuredInsets;
    struct RetainPtr<WKScrollView> { 
        void *m_ptr; 
    } _scrollView;
    unsigned int _unused;
}

@property (setter=_setBackgroundExtendsBeyondPage:, nonatomic) BOOL _backgroundExtendsBeyondPage;
@property (setter=_setObscuredInsets:, nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } _obscuredInsets;
@property (readonly) UIColor *_pageExtendedBackgroundColor;
@property (readonly) WKBrowsingContextController *browsingContextController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL drawsBackground;
@property BOOL drawsTransparentBackground;
@property (readonly) unsigned int hash;
@property (nonatomic) struct CGSize { float x1; float x2; } minimumLayoutSizeOverride;
@property (readonly) struct OpaqueWKPage { }*pageRef;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)_backgroundExtendsBeyondPage;
- (void)_beginInteractiveObscuredInsetsChange;
- (void)_commonInitializationWithContextRef:(struct OpaqueWKContext { }*)arg1 pageGroupRef:(struct OpaqueWKPageGroup { }*)arg2 relatedToPage:(struct OpaqueWKPage { }*)arg3;
- (void)_didFinishScrolling;
- (void)_didRelaunchProcess;
- (void)_endInteractiveObscuredInsetsChange;
- (void)_frameOrBoundsChanged;
- (void)_keyboardChangedWithInfo:(id)arg1 adjustScrollView:(BOOL)arg2;
- (void)_keyboardDidChangeFrame:(id)arg1;
- (void)_keyboardWillChangeFrame:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_obscuredInsets;
- (id)_pageExtendedBackgroundColor;
- (void)_setBackgroundExtendsBeyondPage:(BOOL)arg1;
- (void)_setObscuredInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)_updateVisibleContentRects;
- (BOOL)allowsBackForwardNavigationGestures;
- (id)browsingContextController;
- (void)dealloc;
- (void)didMoveToWindow;
- (BOOL)drawsBackground;
- (BOOL)drawsTransparentBackground;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 contextRef:(struct OpaqueWKContext { }*)arg2 pageGroupRef:(struct OpaqueWKPageGroup { }*)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 contextRef:(struct OpaqueWKContext { }*)arg2 pageGroupRef:(struct OpaqueWKPageGroup { }*)arg3 relatedToPage:(struct OpaqueWKPage { }*)arg4;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 processGroup:(id)arg2 browsingContextGroup:(id)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 processGroup:(id)arg2 browsingContextGroup:(id)arg3 relatedToView:(id)arg4;
- (struct CGSize { float x1; float x2; })minimumLayoutSizeOverride;
- (struct OpaqueWKPage { }*)pageRef;
- (id)scrollView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)setAllowsBackForwardNavigationGestures:(BOOL)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDrawsBackground:(BOOL)arg1;
- (void)setDrawsTransparentBackground:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setMinimumLayoutSizeOverride:(struct CGSize { float x1; float x2; })arg1;
- (id)viewForZoomingInScrollView:(id)arg1;

@end

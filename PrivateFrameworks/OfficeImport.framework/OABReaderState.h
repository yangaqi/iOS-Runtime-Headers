/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OABReaderState : NSObject {
    ESDContainer *mBstoreContainerHolder;
    Class mClient;
    <OADColorPalette> *mColorPalette;
    NSMutableDictionary *mEshContentIdMap;
    NSMutableArray *mGroupStack;
    NSMutableDictionary *mShapeIdMap;
}

@property (nonatomic, retain) ESDContainer *bstoreContainerHolder;

- (id)bstoreContainerHolder;
- (Class)client;
- (id)colorPalette;
- (void)dealloc;
- (id)drawableForShapeId:(int)arg1;
- (struct EshContent { }*)eshContentForId:(int)arg1;
- (int)groupDepth;
- (id)groupStackReference;
- (id)init;
- (id)initWithClient:(Class)arg1;
- (BOOL)isInsideGroup;
- (id)peekGroup;
- (id)popGroup;
- (void)pushGroup:(id)arg1;
- (void)resetForNewDrawing;
- (void)setBstoreContainerHolder:(id)arg1;
- (void)setColorPalette:(id)arg1;
- (void)setDrawable:(id)arg1 forShapeId:(unsigned long)arg2;
- (void)setEshContent:(struct EshContent { }*)arg1 forId:(int)arg2;
- (BOOL)useXmlBlobs;
- (id)xmlDrawingState;

@end

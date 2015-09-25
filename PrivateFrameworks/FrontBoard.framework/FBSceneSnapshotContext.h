/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSceneSnapshotContext : NSObject <BSDescriptionProviding> {
    NSDate *_expirationDate;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _frame;
    NSSet *_layersToExclude;
    BOOL _opaque;
    int _orientation;
    float _scale;
    NSString *_sceneID;
    FBSSceneSettings *_settings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } frame;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSSet *layersToExclude;
@property (getter=isOpaque, nonatomic) BOOL opaque;
@property (nonatomic) int orientation;
@property (nonatomic) float scale;
@property (nonatomic, readonly, copy) NSString *sceneID;
@property (nonatomic, copy) FBSSceneSettings *settings;
@property (readonly) Class superclass;

+ (id)contextWithFBSContext:(id)arg1;

- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)expirationDate;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (id)initWithFBSContext:(id)arg1;
- (id)initWithScene:(id)arg1;
- (BOOL)isOpaque;
- (id)layersToExclude;
- (int)orientation;
- (float)scale;
- (id)sceneID;
- (void)setExpirationDate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setLayersToExclude:(id)arg1;
- (void)setOpaque:(BOOL)arg1;
- (void)setOrientation:(int)arg1;
- (void)setScale:(float)arg1;
- (void)setSettings:(id)arg1;
- (id)settings;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

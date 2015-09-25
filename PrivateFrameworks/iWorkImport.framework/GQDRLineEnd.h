/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDRLineEnd : NSObject <GQDNameMappable> {
    struct CGPoint { 
        float x; 
        float y; 
    } mEndPoint;
    BOOL mIsFilled;
    GQDBezierPath *mPath;
    double mScale;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (const struct StateSpec { int (**x1)(); char *x2; int x3; int x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;

- (void)dealloc;
- (struct CGPoint { float x1; float x2; })endPoint;
- (BOOL)isFilled;
- (struct CGPath { }*)path;
- (char *)pathStr;
- (int)readAttributesFromReader:(struct _xmlTextReader { }*)arg1;
- (double)scale;

@end

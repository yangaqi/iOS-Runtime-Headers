/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalRoute : NSObject <NSSecureCoding> {
    double _duration;
    CalLocation *_end;
    NSString *_route;
    CalLocation *_start;
}

@property double duration;
@property (retain) CalLocation *end;
@property (copy) NSString *route;
@property (retain) CalLocation *start;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)end;
- (id)initWithCoder:(id)arg1;
- (id)route;
- (void)setDuration:(double)arg1;
- (void)setEnd:(id)arg1;
- (void)setRoute:(id)arg1;
- (void)setStart:(id)arg1;
- (id)start;

@end

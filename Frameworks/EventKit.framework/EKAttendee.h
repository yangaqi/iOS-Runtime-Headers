/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKAttendee : EKParticipant

@property (nonatomic) BOOL commentChanged;
@property (nonatomic, readonly) NSDate *lastModifiedParticipationStatus;
@property (nonatomic) int pendingStatus;
@property (nonatomic) BOOL statusChanged;

+ (id)attendeeWithEmailAddress:(id)arg1 name:(id)arg2;
+ (id)attendeeWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3;

- (id)_persistentAttendee;
- (BOOL)commentChanged;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)hash;
- (id)init;
- (id)initWithEmailAddress:(id)arg1 name:(id)arg2;
- (id)initWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3;
- (BOOL)isCurrentUser;
- (BOOL)isEqual:(id)arg1;
- (id)lastModifiedParticipationStatus;
- (id)lazyLoadRelationForKey:(id)arg1;
- (id)owner;
- (int)participantRole;
- (int)participantStatus;
- (int)participantType;
- (int)pendingStatus;
- (void)setCommentChanged:(BOOL)arg1;
- (void)setParticipantRole:(int)arg1;
- (void)setParticipantStatus:(int)arg1;
- (void)setParticipantType:(int)arg1;
- (void)setPendingStatus:(int)arg1;
- (void)setStatusChanged:(BOOL)arg1;
- (BOOL)statusChanged;

@end
